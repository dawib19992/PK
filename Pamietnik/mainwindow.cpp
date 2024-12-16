#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include <QFile>
#include <QTextStream>
#include <QKeyEvent>

const QString nazwaPliku = "wpis.txt";

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->WpisyTE->setReadOnly(true);
    ui->WpisyTE_poprzedni->setReadOnly(true);
    ui->WpisyTE_nastepny->setReadOnly(true);
    ui->WpisyTE_nastepny->setFontItalic(true);
    ui->WpisyTE_poprzedni->setFontItalic(true);
    ui->WpisyTE->setFontItalic(true);
    ui->WpisyTE->setTextColor(Qt::gray);
    ui->WpisyTE_poprzedni->setTextColor(Qt::gray);
    ui->WpisyTE_nastepny->setTextColor(Qt::gray);
    ui->WpisyTE_poprzedni->setText("Brak wspomnienia");
    ui->WpisyTE->setText("Brak wspomnienia");
    ui->WpisyTE_nastepny->setText("Brak wspomnienia");
    ui->dateTimeEdit->setDateTime(QDateTime::currentDateTime());
    setFixedSize(800,350);
    indeksWpisu = 0;
    WczytajWspomnienie();
    AktualizujWpisy();
}

MainWindow::~MainWindow()
{
    ZapiszWspomnienie();
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QDateTime data = ui->dateTimeEdit->dateTime();
    QString text = ui->NowyWpisTE->toPlainText();

    if (!text.isEmpty())
    {
        Pamietniczek pamietnik(data, text);
        bool czyIstnieje = false;
        for (auto &w : wpisy)
        {
            if (w == pamietnik)
            {
                w.text = text;
                czyIstnieje = true;
                break;
            }
        }

        if (!czyIstnieje)
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
    if (indeksWpisu > 0)
    {
        Pamietniczek* poprzedniWpis = &wpisy[indeksWpisu - 1];
        UstawPoleTekstowe(ui->WpisyTE_poprzedni, poprzedniWpis);
    }
    else
    {
        UstawPoleTekstowe(ui->WpisyTE_poprzedni, nullptr);
    }
    if (indeksWpisu < wpisy.size())
    {
        Pamietniczek* aktualnyWpis = &wpisy[indeksWpisu];
        UstawPoleTekstowe(ui->WpisyTE, aktualnyWpis);
    }
    else
    {
        UstawPoleTekstowe(ui->WpisyTE, nullptr);
    }
    if (indeksWpisu + 1 < wpisy.size())
    {
        Pamietniczek* nastepnyWpis = &wpisy[indeksWpisu + 1];
        UstawPoleTekstowe(ui->WpisyTE_nastepny, nastepnyWpis);
    }
    else
    {
        UstawPoleTekstowe(ui->WpisyTE_nastepny, nullptr);
    }
}

void MainWindow::on_pb_nastepny_clicked()
{
    NastepnyWpis();
}


void MainWindow::on_pb_poprzedni_clicked()
{
    PoprzedniWpis();
}

void MainWindow::PoprzedniWpis()
{
    if (indeksWpisu > 0)
    {
        indeksWpisu--;
        AktualizujWpisy();
    }
}

void MainWindow::NastepnyWpis()
{
    if (indeksWpisu < wpisy.size() - 1)
    {
        indeksWpisu++;
        AktualizujWpisy();
    }
}

void MainWindow::UstawPoleTekstowe(QTextEdit* pole, const Pamietniczek* wpis)
{
    pole->clear();
    if (wpis != nullptr)
    {
        pole->setTextColor(Qt::black);
        pole->setFontItalic(false);
        pole->setText(wpis->data.toString("dd-MM-yyyyr. HH:mm") + "\n" + wpis->text);
    }
    else
    {
        pole->setTextColor(Qt::gray);
        pole->setFontItalic(true);
        pole->setText("Brak wspomnienia");
    }
}

void MainWindow::on_zapis_clicked()
{
    ZapiszWspomnienie();
}

void MainWindow::on_wczytaj_clicked()
{
    WczytajWspomnienie();
}

void MainWindow::WczytajWspomnienie()
{
    QFile plik(nazwaPliku);
    if (plik.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&plik);
        wpisy.clear();
        in >> indeksWpisu;
        in.readLine();
        while (!in.atEnd())
        {
            QString dataStr = in.readLine();
            QString text = in.readLine();
            QDateTime data = QDateTime::fromString(dataStr, Qt::ISODate);
            wpisy.push_back(Pamietniczek(data, text));
        }
        plik.close();
    }
}

void MainWindow::ZapiszWspomnienie()
{
    QFile plik(nazwaPliku);
    if (plik.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream out(&plik);
        out << indeksWpisu << "\n";
        for (const auto& wpis : wpisy)
        {
            out << wpis.data.toString(Qt::ISODate) << "\n";
            out << wpis.text << "\n";
        }
        plik.close();
    }
}

void MainWindow::on_usun_clicked()
{
    if (!wpisy.empty() && indeksWpisu < wpisy.size())
    {
        wpisy.erase(wpisy.begin() + indeksWpisu);

        if (wpisy.empty())
        {
            indeksWpisu = 0;
        }
        else if (indeksWpisu >= wpisy.size())
        {
            indeksWpisu = wpisy.size() - 1;
        }
        AktualizujWpisy();
    }
}

void MainWindow::keyPressEvent(QKeyEvent* event)
{
    if (event->key() == Qt::Key_Up)
    {
        PoprzedniWpis();
    }
    else if (event->key() == Qt::Key_Down)
    {
        NastepnyWpis();
    }
    else
    {
        QMainWindow::keyPressEvent(event);
    }
}

