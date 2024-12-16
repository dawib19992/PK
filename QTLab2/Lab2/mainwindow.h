#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

struct DaneWejsciowe{
    QString sciezkaDoPliku;
    QString komentarz;
};

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
    QTimer* pokazSlajdowTimer;

private slots:
    void on_pb_pokaz_clicked();
    void WyswietlZdjecie();

    void on_pb_nastepny_clicked();

    void on_pb_reset_clicked();

    void on_pb_poprzedni_clicked();

private:
    Ui::MainWindow *ui;

    std::vector<DaneWejsciowe> listaZdjec;
    int obecnyIndeks;

};
#endif // MAINWINDOW_H
