#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pb_lewy->setEnabled(false);
    ui->pb_prawy->setEnabled(true);
    ui->label->setAlignment(Qt::AlignCenter);
    ui->doubleSpinBox->setDecimals(4);
    ui->doubleSpinBox->setSingleStep(0.1);
    ui->calendarWidget->setSelectedDate(QDate::currentDate());
    setStatusBar(ui->statusbar);
    aktualizacjaStatusBara();
    ui->sliderR->setRange(0, 255);
    ui->sliderG->setRange(0, 255);
    ui->sliderB->setRange(0, 255);
    ui->spinBox_R->setRange(0, 255);
    ui->spinBox_G->setRange(0, 255);
    ui->spinBox_B->setRange(0, 255);
    ui->spinBox_R->setValue(255);
    ui->spinBox_G->setValue(255);
    ui->spinBox_B->setValue(255);
    Kolor();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pb_prawy_clicked()
{
    aktywujPrzycisk(ui->pb_prawy);
}


void MainWindow::on_pb_lewy_clicked()
{
    aktywujPrzycisk(ui->pb_lewy);
}

void MainWindow::aktywujPrzycisk(QPushButton* przycisk)
{
    if(przycisk == ui->pb_prawy)
    {
        ui->pb_prawy->setEnabled(false);
        ui->pb_lewy->setEnabled(true);
    }
    else
    {
        ui->pb_prawy->setEnabled(true);
        ui->pb_lewy->setEnabled(false);
    }
}

void MainWindow::aktualizujDate(const QDate& data)
{
    ui->dateEdit->setDate(data);
}

void MainWindow::aktualizacjaStatusBara()
{
    QRadioButton* radio1 = ui->radioButton;
    QRadioButton* radio2 = ui->radioButton_2;
    QRadioButton* radio3 = ui->radioButton_3;
    if(radio1->isChecked())
    {
        ui->statusbar->showMessage("1st");
    }
    else if(radio2->isChecked())
    {
        ui->statusbar->showMessage("2nd");
    }
    else if(radio3->isChecked())
    {
        ui->statusbar->showMessage("3rd");
    }
}

void MainWindow::on_dateEdit_dateChanged(const QDate &data_)
{
    ui->calendarWidget->setSelectedDate(data_);
}


void MainWindow::on_calendarWidget_clicked(const QDate &data_)
{
    ui->dateEdit->setDate(data_);
}


void MainWindow::on_doubleSpinBox_valueChanged(double arg1)
{
    double value = ui->doubleSpinBox->value();
    ui->label->setText(QString::number(value * value, 'f', 4));
}

void MainWindow::Kolor()
{
    int red = ui->spinBox_R->value();
    int green = ui->spinBox_G->value();
    int blue = ui->spinBox_B->value();

    QColor kolor(red, green, blue);


    ui->Kolor->setStyleSheet(QString(kolor.name()));
}


void MainWindow::on_sliderR_valueChanged(int value)
{
    ui->spinBox_R->setValue(ui->sliderR->value());
    Kolor();
}


void MainWindow::on_sliderG_valueChanged(int value)
{
    ui->spinBox_G->setValue(ui->sliderG->value());
    Kolor();
}


void MainWindow::on_sliderB_valueChanged(int value)
{
    ui->spinBox_B->setValue(ui->sliderB->value());
    Kolor();
}


void MainWindow::on_spinBox_R_valueChanged(int arg1)
{
    ui->sliderR->setValue(ui->spinBox_R->value());
    Kolor();
}


void MainWindow::on_spinBox_G_valueChanged(int arg1)
{
    ui->sliderG->setValue(ui->spinBox_G->value());
    Kolor();
}


void MainWindow::on_spinBox_B_valueChanged(int arg1)
{
    ui->sliderB->setValue(ui->spinBox_B->value());
    Kolor();
}

