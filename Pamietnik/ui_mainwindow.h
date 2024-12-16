/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *NowyWpisTE;
    QDateTimeEdit *dateTimeEdit;
    QPushButton *pushButton;
    QTextEdit *WpisyTE_nastepny;
    QPushButton *wczytaj;
    QPushButton *zapis;
    QPushButton *pb_nastepny;
    QPushButton *pb_poprzedni;
    QTextEdit *WpisyTE;
    QTextEdit *WpisyTE_poprzedni;
    QPushButton *usun;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 350);
        MainWindow->setMinimumSize(QSize(800, 350));
        MainWindow->setMaximumSize(QSize(800, 599));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        NowyWpisTE = new QTextEdit(centralwidget);
        NowyWpisTE->setObjectName(QString::fromUtf8("NowyWpisTE"));
        NowyWpisTE->setGeometry(QRect(10, 260, 501, 41));
        dateTimeEdit = new QDateTimeEdit(centralwidget);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(520, 260, 194, 41));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(720, 260, 71, 41));
        WpisyTE_nastepny = new QTextEdit(centralwidget);
        WpisyTE_nastepny->setObjectName(QString::fromUtf8("WpisyTE_nastepny"));
        WpisyTE_nastepny->setGeometry(QRect(10, 180, 701, 71));
        wczytaj = new QPushButton(centralwidget);
        wczytaj->setObjectName(QString::fromUtf8("wczytaj"));
        wczytaj->setGeometry(QRect(720, 170, 71, 41));
        zapis = new QPushButton(centralwidget);
        zapis->setObjectName(QString::fromUtf8("zapis"));
        zapis->setGeometry(QRect(720, 120, 71, 41));
        pb_nastepny = new QPushButton(centralwidget);
        pb_nastepny->setObjectName(QString::fromUtf8("pb_nastepny"));
        pb_nastepny->setGeometry(QRect(720, 70, 71, 41));
        pb_poprzedni = new QPushButton(centralwidget);
        pb_poprzedni->setObjectName(QString::fromUtf8("pb_poprzedni"));
        pb_poprzedni->setGeometry(QRect(720, 20, 71, 41));
        WpisyTE = new QTextEdit(centralwidget);
        WpisyTE->setObjectName(QString::fromUtf8("WpisyTE"));
        WpisyTE->setGeometry(QRect(10, 100, 701, 71));
        WpisyTE_poprzedni = new QTextEdit(centralwidget);
        WpisyTE_poprzedni->setObjectName(QString::fromUtf8("WpisyTE_poprzedni"));
        WpisyTE_poprzedni->setGeometry(QRect(10, 20, 701, 71));
        usun = new QPushButton(centralwidget);
        usun->setObjectName(QString::fromUtf8("usun"));
        usun->setGeometry(QRect(720, 220, 71, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Wy\305\233lij", nullptr));
        wczytaj->setText(QCoreApplication::translate("MainWindow", "Wczytaj", nullptr));
        zapis->setText(QCoreApplication::translate("MainWindow", "Zapisz", nullptr));
        pb_nastepny->setText(QCoreApplication::translate("MainWindow", "Nastepny", nullptr));
        pb_poprzedni->setText(QCoreApplication::translate("MainWindow", "Poprzedni", nullptr));
        usun->setText(QCoreApplication::translate("MainWindow", "Usu\305\204", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
