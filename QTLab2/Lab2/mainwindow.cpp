#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QTimer"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->le_komentarz->setReadOnly(true);
    ui->sb_timer->setRange(1, 10);
    ui->sb_timer->setValue(3);
    listaZdjec.push_back({"C:/Users/dawid/Desktop/1.jpg", "Kula srebrna"});
    listaZdjec.push_back({"C:/Users/dawid/Desktop/2.jpg", "Kula niebieska"});
    pokazSlajdowTimer = new QTimer(this);
    obecnyIndeks = 0;
    WyswietlZdjecie();

}

void MainWindow::WyswietlZdjecie()
{
    if(obecnyIndeks < 0 || obecnyIndeks >= listaZdjec.size())
    {
        ui->lbl_zdjecie->setText("Brak obrazka");
        ui->le_komentarz->setText("Brak komentarza");
    }

    QPixmap pixmap(listaZdjec[obecnyIndeks].sciezkaDoPliku);
    if(!pixmap.isNull())
    {
        ui->lbl_zdjecie->setPixmap(pixmap.scaled(ui->lbl_zdjecie->size(), Qt::KeepAspectRatio));

    }
    else
    {
        ui->lbl_zdjecie->setText("Nie udało się załadować obrazka");
    }

    ui->le_komentarz->setText(listaZdjec[obecnyIndeks].komentarz);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_pokaz_clicked()
{
    pokazSlajdowTimer->start(ui->sb_timer->value());
}


void MainWindow::on_pb_nastepny_clicked()
{
    obecnyIndeks++;
    if(obecnyIndeks >= listaZdjec.size())
    {
        obecnyIndeks = 0;
    }
    WyswietlZdjecie();
}


void MainWindow::on_pb_reset_clicked()
{
    pokazSlajdowTimer->stop();
    obecnyIndeks = 0;
    WyswietlZdjecie();
}


void MainWindow::on_pb_poprzedni_clicked()
{
    obecnyIndeks--;
    if(obecnyIndeks >= listaZdjec.size())
    {
        obecnyIndeks = 0;
    }
    WyswietlZdjecie();
}

