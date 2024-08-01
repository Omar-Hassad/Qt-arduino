/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_lampe1;
    QPushButton *pushButton_ON;
    QPushButton *pushButton_OFF;
    QLabel *label_2;
    QLabel *label_state_lampe1;
    QPushButton *pushButton_Plus;
    QLabel *label_4;
    QPushButton *pushButton_Moins;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(575, 289);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_lampe1 = new QLabel(centralwidget);
        label_lampe1->setObjectName("label_lampe1");
        label_lampe1->setGeometry(QRect(50, 40, 101, 41));
        QFont font;
        font.setPointSize(18);
        label_lampe1->setFont(font);
        pushButton_ON = new QPushButton(centralwidget);
        pushButton_ON->setObjectName("pushButton_ON");
        pushButton_ON->setGeometry(QRect(180, 40, 101, 41));
        QFont font1;
        font1.setPointSize(14);
        pushButton_ON->setFont(font1);
        pushButton_OFF = new QPushButton(centralwidget);
        pushButton_OFF->setObjectName("pushButton_OFF");
        pushButton_OFF->setGeometry(QRect(360, 40, 101, 41));
        pushButton_OFF->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 110, 151, 41));
        label_2->setFont(font);
        label_state_lampe1 = new QLabel(centralwidget);
        label_state_lampe1->setObjectName("label_state_lampe1");
        label_state_lampe1->setGeometry(QRect(210, 120, 121, 21));
        label_state_lampe1->setFont(font);
        pushButton_Plus = new QPushButton(centralwidget);
        pushButton_Plus->setObjectName("pushButton_Plus");
        pushButton_Plus->setGeometry(QRect(200, 160, 61, 41));
        pushButton_Plus->setFont(font);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 160, 91, 31));
        label_4->setFont(font);
        pushButton_Moins = new QPushButton(centralwidget);
        pushButton_Moins->setObjectName("pushButton_Moins");
        pushButton_Moins->setGeometry(QRect(380, 160, 51, 41));
        pushButton_Moins->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 575, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_lampe1->setText(QCoreApplication::translate("MainWindow", "Lampe1", nullptr));
        pushButton_ON->setText(QCoreApplication::translate("MainWindow", "ON", nullptr));
        pushButton_OFF->setText(QCoreApplication::translate("MainWindow", "OFF", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Etat Lampe 1", nullptr));
        label_state_lampe1->setText(QCoreApplication::translate("MainWindow", "NA", nullptr));
        pushButton_Plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Lampe2", nullptr));
        pushButton_Moins->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
