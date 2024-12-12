#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "qslider.h"
#include "qspinbox.h"
#include <QMainWindow>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pb_prawy_clicked();

    void on_pb_lewy_clicked();

    void aktywujPrzycisk(QPushButton* przycisk);

    void aktualizujDate(const QDate& data);

    void aktualizacjaStatusBara();

    void on_dateEdit_dateChanged(const QDate &data_);

    void on_calendarWidget_clicked(const QDate &data_);

    void on_doubleSpinBox_valueChanged(double arg1);

    void Kolor();

    void on_sliderR_valueChanged(int value);

    void on_sliderG_valueChanged(int value);

    void on_sliderB_valueChanged(int value);

    void on_spinBox_R_valueChanged(int arg1);

    void on_spinBox_G_valueChanged(int arg1);

    void on_spinBox_B_valueChanged(int arg1);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
