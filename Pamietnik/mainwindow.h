#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "pamietniczek.h"
#include "qtextedit.h"

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
    void AktualizujWpisy();
    void UstawPoleTekstowe(QTextEdit* pole, const Pamietniczek* wpis);
    void ZapiszWspomnienie();
    void WczytajWspomnienie();
    void keyPressEvent(QKeyEvent* event) override;
    void PoprzedniWpis();
    void NastepnyWpis();

private slots:
    void on_pushButton_clicked();

    void on_pb_nastepny_clicked();

    void on_pb_poprzedni_clicked();

    void on_zapis_clicked();

    void on_wczytaj_clicked();

    void on_usun_clicked();

private:
    Ui::MainWindow *ui;
    QList<Pamietniczek> wpisy;
    int indeksWpisu;
};
#endif // MAINWINDOW_H
