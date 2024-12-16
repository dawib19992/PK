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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *le_komentarz;
    QLabel *lbl_zdjecie;
    QPushButton *pb_reset;
    QSpinBox *sb_timer;
    QPushButton *pb_poprzedni;
    QPushButton *pb_nastepny;
    QPushButton *pb_pokaz;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(497, 349);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        le_komentarz = new QLineEdit(centralwidget);
        le_komentarz->setObjectName(QString::fromUtf8("le_komentarz"));
        le_komentarz->setGeometry(QRect(10, 210, 471, 51));
        lbl_zdjecie = new QLabel(centralwidget);
        lbl_zdjecie->setObjectName(QString::fromUtf8("lbl_zdjecie"));
        lbl_zdjecie->setGeometry(QRect(10, 10, 471, 191));
        lbl_zdjecie->setFrameShape(QFrame::Box);
        pb_reset = new QPushButton(centralwidget);
        pb_reset->setObjectName(QString::fromUtf8("pb_reset"));
        pb_reset->setGeometry(QRect(10, 270, 80, 24));
        sb_timer = new QSpinBox(centralwidget);
        sb_timer->setObjectName(QString::fromUtf8("sb_timer"));
        sb_timer->setGeometry(QRect(200, 270, 42, 25));
        pb_poprzedni = new QPushButton(centralwidget);
        pb_poprzedni->setObjectName(QString::fromUtf8("pb_poprzedni"));
        pb_poprzedni->setGeometry(QRect(260, 270, 80, 24));
        pb_nastepny = new QPushButton(centralwidget);
        pb_nastepny->setObjectName(QString::fromUtf8("pb_nastepny"));
        pb_nastepny->setGeometry(QRect(350, 270, 80, 24));
        pb_pokaz = new QPushButton(centralwidget);
        pb_pokaz->setObjectName(QString::fromUtf8("pb_pokaz"));
        pb_pokaz->setGeometry(QRect(100, 270, 91, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 497, 21));
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
        lbl_zdjecie->setText(QString());
        pb_reset->setText(QCoreApplication::translate("MainWindow", "Reset", nullptr));
        pb_poprzedni->setText(QCoreApplication::translate("MainWindow", "Poprzedni", nullptr));
        pb_nastepny->setText(QCoreApplication::translate("MainWindow", "Nastepny", nullptr));
        pb_pokaz->setText(QCoreApplication::translate("MainWindow", "Pokaz slajd\303\263w", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
