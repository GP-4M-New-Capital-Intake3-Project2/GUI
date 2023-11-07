/********************************************************************************
** Form generated from reading UI file 'fota.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FOTA_H
#define UI_FOTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fota
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *Server_pushButton;
    QPushButton *NULL_2;
    QLabel *ShowSSID_label;
    QTextEdit *ShowSSID_textEdit;
    QLineEdit *Path_lineEdit;
    QListWidget *listWidget;
    QPushButton *GetFeatures_button;
    QWidget *tab_2;
    QPushButton *LED_Button;
    QPushButton *FingerPrint_Button;
    QLabel *label;
    QLabel *label_2;
    QPushButton *Led_Off_button;
    QPushButton *Access_Finger_button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *fota)
    {
        if (fota->objectName().isEmpty())
            fota->setObjectName(QString::fromUtf8("fota"));
        fota->resize(695, 600);
        centralwidget = new QWidget(fota);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 641, 541));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        Server_pushButton = new QPushButton(tab);
        Server_pushButton->setObjectName(QString::fromUtf8("Server_pushButton"));
        Server_pushButton->setGeometry(QRect(180, 70, 151, 30));
        NULL_2 = new QPushButton(tab);
        NULL_2->setObjectName(QString::fromUtf8("NULL_2"));
        NULL_2->setEnabled(false);
        NULL_2->setGeometry(QRect(150, 100, 221, 30));
        NULL_2->setFlat(false);
        ShowSSID_label = new QLabel(tab);
        ShowSSID_label->setObjectName(QString::fromUtf8("ShowSSID_label"));
        ShowSSID_label->setGeometry(QRect(40, 20, 81, 22));
        ShowSSID_textEdit = new QTextEdit(tab);
        ShowSSID_textEdit->setObjectName(QString::fromUtf8("ShowSSID_textEdit"));
        ShowSSID_textEdit->setGeometry(QRect(170, 20, 171, 41));
        Path_lineEdit = new QLineEdit(tab);
        Path_lineEdit->setObjectName(QString::fromUtf8("Path_lineEdit"));
        Path_lineEdit->setGeometry(QRect(60, 210, 431, 30));
        listWidget = new QListWidget(tab);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(160, 260, 256, 192));
        GetFeatures_button = new QPushButton(tab);
        GetFeatures_button->setObjectName(QString::fromUtf8("GetFeatures_button"));
        GetFeatures_button->setGeometry(QRect(180, 160, 171, 30));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        LED_Button = new QPushButton(tab_2);
        LED_Button->setObjectName(QString::fromUtf8("LED_Button"));
        LED_Button->setEnabled(true);
        LED_Button->setGeometry(QRect(10, 40, 91, 30));
        FingerPrint_Button = new QPushButton(tab_2);
        FingerPrint_Button->setObjectName(QString::fromUtf8("FingerPrint_Button"));
        FingerPrint_Button->setGeometry(QRect(170, 40, 201, 30));
        label = new QLabel(tab_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 101, 22));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 10, 141, 22));
        Led_Off_button = new QPushButton(tab_2);
        Led_Off_button->setObjectName(QString::fromUtf8("Led_Off_button"));
        Led_Off_button->setGeometry(QRect(10, 80, 91, 30));
        Access_Finger_button = new QPushButton(tab_2);
        Access_Finger_button->setObjectName(QString::fromUtf8("Access_Finger_button"));
        Access_Finger_button->setGeometry(QRect(180, 80, 191, 30));
        tabWidget->addTab(tab_2, QString());
        FingerPrint_Button->raise();
        LED_Button->raise();
        label->raise();
        label_2->raise();
        Led_Off_button->raise();
        Access_Finger_button->raise();
        fota->setCentralWidget(centralwidget);
        menubar = new QMenuBar(fota);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 695, 27));
        fota->setMenuBar(menubar);
        statusbar = new QStatusBar(fota);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        fota->setStatusBar(statusbar);

        retranslateUi(fota);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(fota);
    } // setupUi

    void retranslateUi(QMainWindow *fota)
    {
        fota->setWindowTitle(QCoreApplication::translate("fota", "MainWindow", nullptr));
        Server_pushButton->setText(QCoreApplication::translate("fota", "Server Website", nullptr));
        NULL_2->setText(QCoreApplication::translate("fota", "NULL", nullptr));
        ShowSSID_label->setText(QCoreApplication::translate("fota", "Your SSID", nullptr));
        GetFeatures_button->setText(QCoreApplication::translate("fota", "Get Features", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("fota", "Server", nullptr));
        LED_Button->setText(QCoreApplication::translate("fota", "Led On", nullptr));
        FingerPrint_Button->setText(QCoreApplication::translate("fota", "Finger Print Register ", nullptr));
        label->setText(QCoreApplication::translate("fota", "Led Options", nullptr));
        label_2->setText(QCoreApplication::translate("fota", "FingerPrint Options", nullptr));
        Led_Off_button->setText(QCoreApplication::translate("fota", "Led Off", nullptr));
        Access_Finger_button->setText(QCoreApplication::translate("fota", "Acess with Finger Print", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("fota", "Features", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fota: public Ui_fota {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOTA_H
