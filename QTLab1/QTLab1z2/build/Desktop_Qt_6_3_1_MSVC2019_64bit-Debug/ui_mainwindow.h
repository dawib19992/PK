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
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pb_lewy;
    QPushButton *pb_prawy;
    QDateEdit *dateEdit;
    QCalendarWidget *calendarWidget;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QSlider *sliderR;
    QSlider *sliderG;
    QSlider *sliderB;
    QSpinBox *spinBox_R;
    QSpinBox *spinBox_G;
    QSpinBox *spinBox_B;
    QLabel *Kolor;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(798, 395);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pb_lewy = new QPushButton(centralwidget);
        pb_lewy->setObjectName(QString::fromUtf8("pb_lewy"));
        pb_lewy->setGeometry(QRect(10, 60, 80, 24));
        pb_prawy = new QPushButton(centralwidget);
        pb_prawy->setObjectName(QString::fromUtf8("pb_prawy"));
        pb_prawy->setGeometry(QRect(100, 60, 80, 24));
        dateEdit = new QDateEdit(centralwidget);
        dateEdit->setObjectName(QString::fromUtf8("dateEdit"));
        dateEdit->setGeometry(QRect(640, 10, 110, 25));
        calendarWidget = new QCalendarWidget(centralwidget);
        calendarWidget->setObjectName(QString::fromUtf8("calendarWidget"));
        calendarWidget->setGeometry(QRect(320, 10, 304, 163));
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(220, 30, 91, 22));
        radioButton_2 = new QRadioButton(centralwidget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(220, 60, 91, 22));
        radioButton_3 = new QRadioButton(centralwidget);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(220, 90, 91, 22));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 111, 27));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        doubleSpinBox = new QDoubleSpinBox(layoutWidget);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));

        horizontalLayout->addWidget(doubleSpinBox);

        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(18, 220, 61, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(18, 260, 61, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(18, 300, 61, 20));
        sliderR = new QSlider(centralwidget);
        sliderR->setObjectName(QString::fromUtf8("sliderR"));
        sliderR->setGeometry(QRect(90, 220, 160, 16));
        sliderR->setOrientation(Qt::Horizontal);
        sliderG = new QSlider(centralwidget);
        sliderG->setObjectName(QString::fromUtf8("sliderG"));
        sliderG->setGeometry(QRect(90, 260, 160, 16));
        sliderG->setOrientation(Qt::Horizontal);
        sliderB = new QSlider(centralwidget);
        sliderB->setObjectName(QString::fromUtf8("sliderB"));
        sliderB->setGeometry(QRect(90, 300, 160, 16));
        sliderB->setOrientation(Qt::Horizontal);
        spinBox_R = new QSpinBox(centralwidget);
        spinBox_R->setObjectName(QString::fromUtf8("spinBox_R"));
        spinBox_R->setGeometry(QRect(260, 210, 42, 25));
        spinBox_G = new QSpinBox(centralwidget);
        spinBox_G->setObjectName(QString::fromUtf8("spinBox_G"));
        spinBox_G->setGeometry(QRect(260, 250, 42, 25));
        spinBox_B = new QSpinBox(centralwidget);
        spinBox_B->setObjectName(QString::fromUtf8("spinBox_B"));
        spinBox_B->setGeometry(QRect(260, 290, 42, 25));
        Kolor = new QLabel(centralwidget);
        Kolor->setObjectName(QString::fromUtf8("Kolor"));
        Kolor->setGeometry(QRect(330, 210, 161, 101));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 798, 21));
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
        pb_lewy->setText(QCoreApplication::translate("MainWindow", "Lewy", nullptr));
        pb_prawy->setText(QCoreApplication::translate("MainWindow", "Prawy", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "Pierwszy", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "Drugi", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "Trzeci", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Czerwony:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Zielony:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Niebieski", nullptr));
        Kolor->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
