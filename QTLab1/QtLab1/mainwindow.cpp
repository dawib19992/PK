#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->WpisyTE->setReadOnly(true);
    ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());
    setFixedSize(800,600);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QDateTime data = ui->dateTimeEdit->dateTime();
    QString text = ui->NowyWpisTE->toPlainText();

    if(!text.isEmpty())
    {
        Pamietniczek pamietnik(data, text);
        bool czyIstnieje = false;
        for(auto& w : wpisy)
        {
            if(w == pamietnik)
            {
                w.text = ui->NowyWpisTE->toPlainText();
                czyIstnieje = true;
            }
        }

        if(!czyIstnieje)
        {
            wpisy.push_back(pamietnik);
        }
        std::sort(wpisy.begin(), wpisy.end());
        AktualizujWpisy();
        ui->NowyWpisTE->clear();
    }
}

void MainWindow::AktualizujWpisy()
{
    ui->WpisyTE->clear();

    QTextCursor c(ui->WpisyTE->document());
    QTextCharFormat formatNaglowka;
    formatNaglowka.setFontWeight(QFont::Bold);

    int LicznikWpisow = 0;

    for (const auto& w : wpisy)
    {
        if (LicznikWpisow > 0)
        {
            int szerokosc = ui->WpisyTE->viewport()->width();
            QString separator = QString(szerokosc / 6, '-');
            c.insertText(separator + "\n");
        }
        QString naglowek = w.data.toString("dd-MM-yyyyr. HH:mm");
        c.insertText(naglowek, formatNaglowka);
        c.insertBlock();

        c.insertText(w.text);
        c.insertBlock();

        LicznikWpisow++;
    }
}
