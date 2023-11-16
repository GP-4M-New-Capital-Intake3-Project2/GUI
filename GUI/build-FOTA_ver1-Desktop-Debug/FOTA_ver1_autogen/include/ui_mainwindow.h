/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QGroupBox *groupBox;
    QLineEdit *SSID_lineEdit;
    QLabel *SSID_label;
    QLineEdit *Password_lineEdit;
    QLabel *Password_label;
    QPushButton *Connect_Button;
    QPushButton *Close_Button;
    QLabel *FOTAApp_label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(573, 400);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"rgb(0, 255, 255)\n"
"background:blue;\n"
"\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 90, 481, 221));
        SSID_lineEdit = new QLineEdit(groupBox);
        SSID_lineEdit->setObjectName(QString::fromUtf8("SSID_lineEdit"));
        SSID_lineEdit->setGeometry(QRect(180, 40, 281, 30));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        SSID_lineEdit->setFont(font);
        SSID_lineEdit->setEchoMode(QLineEdit::Normal);
        SSID_label = new QLabel(groupBox);
        SSID_label->setObjectName(QString::fromUtf8("SSID_label"));
        SSID_label->setGeometry(QRect(40, 40, 131, 31));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        font1.setWeight(75);
        SSID_label->setFont(font1);
        Password_lineEdit = new QLineEdit(groupBox);
        Password_lineEdit->setObjectName(QString::fromUtf8("Password_lineEdit"));
        Password_lineEdit->setGeometry(QRect(180, 80, 281, 30));
        QFont font2;
        font2.setPointSize(15);
        Password_lineEdit->setFont(font2);
        Password_lineEdit->setEchoMode(QLineEdit::Password);
        Password_label = new QLabel(groupBox);
        Password_label->setObjectName(QString::fromUtf8("Password_label"));
        Password_label->setGeometry(QRect(40, 70, 131, 51));
        Password_label->setFont(font1);
        Connect_Button = new QPushButton(groupBox);
        Connect_Button->setObjectName(QString::fromUtf8("Connect_Button"));
        Connect_Button->setGeometry(QRect(190, 150, 91, 51));
        Connect_Button->setFont(font);
        Connect_Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:rgb(0, 80, 0)\n"
"\n"
"\n"
"}"));
        Close_Button = new QPushButton(groupBox);
        Close_Button->setObjectName(QString::fromUtf8("Close_Button"));
        Close_Button->setGeometry(QRect(300, 150, 171, 51));
        Close_Button->setFont(font);
        Close_Button->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:rgb(255, 0, 0)\n"
"\n"
"\n"
"}"));
        FOTAApp_label = new QLabel(centralwidget);
        FOTAApp_label->setObjectName(QString::fromUtf8("FOTAApp_label"));
        FOTAApp_label->setGeometry(QRect(120, 20, 311, 51));
        QFont font3;
        font3.setPointSize(30);
        font3.setBold(true);
        font3.setWeight(75);
        FOTAApp_label->setFont(font3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 573, 27));
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
        groupBox->setTitle(QString());
        SSID_label->setText(QCoreApplication::translate("MainWindow", "SSID", nullptr));
        Password_label->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        Connect_Button->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        Close_Button->setText(QCoreApplication::translate("MainWindow", "Cancel Connection", nullptr));
        FOTAApp_label->setText(QCoreApplication::translate("MainWindow", "FOTA Application", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
