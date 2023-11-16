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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
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
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_3;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *Server_pushButton;
    QLabel *ShowSSID_label;
    QTextEdit *ShowSSID_textEdit;
    QLineEdit *Path_lineEdit;
    QPushButton *GetFeatures_button;
    QLabel *label_5;
    QPushButton *ConnectWin_Button;
    QWidget *tab_2;
    QPushButton *Access_Finger_button;
    QLabel *label_2;
    QPushButton *FingerPrint_Button;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *fota)
    {
        if (fota->objectName().isEmpty())
            fota->setObjectName(QString::fromUtf8("fota"));
        fota->resize(596, 520);
        fota->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"\n"
"background:rgb(248, 240, 227)\n"
"\n"
"}"));
        centralwidget = new QWidget(fota);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"\n"
"background:rgb(248, 240, 227)\n"
"\n"
"\n"
"}"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(100);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 0));
        label->setMaximumSize(QSize(200, 16777215));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMinimumSize(QSize(0, 0));
        label_3->setMaximumSize(QSize(578, 44));
        QFont font;
        font.setPointSize(25);
        font.setBold(true);
        font.setWeight(75);
        label_3->setFont(font);

        gridLayout->addWidget(label_3, 0, 0, 1, 1);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        tabWidget->setFont(font1);
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget{\n"
"background:rgb(105, 210, 255)\n"
"\n"
"}"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        Server_pushButton = new QPushButton(tab);
        Server_pushButton->setObjectName(QString::fromUtf8("Server_pushButton"));
        Server_pushButton->setGeometry(QRect(360, 60, 171, 41));
        Server_pushButton->setFont(font1);
        Server_pushButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"color:black\n"
"}"));
        ShowSSID_label = new QLabel(tab);
        ShowSSID_label->setObjectName(QString::fromUtf8("ShowSSID_label"));
        ShowSSID_label->setGeometry(QRect(40, 20, 81, 22));
        ShowSSID_label->setFont(font1);
        ShowSSID_textEdit = new QTextEdit(tab);
        ShowSSID_textEdit->setObjectName(QString::fromUtf8("ShowSSID_textEdit"));
        ShowSSID_textEdit->setGeometry(QRect(180, 20, 171, 41));
        ShowSSID_textEdit->setFont(font1);
        ShowSSID_textEdit->setStyleSheet(QString::fromUtf8("QTextEdit{\n"
"color: Black;\n"
"\n"
"}"));
        Path_lineEdit = new QLineEdit(tab);
        Path_lineEdit->setObjectName(QString::fromUtf8("Path_lineEdit"));
        Path_lineEdit->setGeometry(QRect(60, 110, 431, 30));
        GetFeatures_button = new QPushButton(tab);
        GetFeatures_button->setObjectName(QString::fromUtf8("GetFeatures_button"));
        GetFeatures_button->setGeometry(QRect(180, 70, 171, 30));
        GetFeatures_button->setFont(font1);
        GetFeatures_button->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"\n"
"}"));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 160, 551, 191));
        label_5->setBaseSize(QSize(500, 200));
        ConnectWin_Button = new QPushButton(tab);
        ConnectWin_Button->setObjectName(QString::fromUtf8("ConnectWin_Button"));
        ConnectWin_Button->setGeometry(QRect(360, 19, 171, 31));
        ConnectWin_Button->setFont(font1);
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        Access_Finger_button = new QPushButton(tab_2);
        Access_Finger_button->setObjectName(QString::fromUtf8("Access_Finger_button"));
        Access_Finger_button->setGeometry(QRect(100, 100, 351, 51));
        QFont font2;
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setWeight(75);
        Access_Finger_button->setFont(font2);
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, -10, 241, 61));
        QFont font3;
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setItalic(false);
        font3.setUnderline(true);
        font3.setWeight(75);
        label_2->setFont(font3);
        FingerPrint_Button = new QPushButton(tab_2);
        FingerPrint_Button->setObjectName(QString::fromUtf8("FingerPrint_Button"));
        FingerPrint_Button->setGeometry(QRect(100, 40, 351, 51));
        FingerPrint_Button->setMinimumSize(QSize(175, 30));
        FingerPrint_Button->setFont(font2);
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(9, 155, 551, 191));
        label_4->setBaseSize(QSize(500, 200));
        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 1, 0, 1, 1);

        fota->setCentralWidget(centralwidget);
        menubar = new QMenuBar(fota);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 596, 27));
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
        label->setText(QString());
        label_3->setText(QCoreApplication::translate("fota", "FOTA Application", nullptr));
        Server_pushButton->setText(QCoreApplication::translate("fota", "EASY Solutions Store", nullptr));
        ShowSSID_label->setText(QCoreApplication::translate("fota", "Your SSID", nullptr));
        ShowSSID_textEdit->setHtml(QCoreApplication::translate("fota", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'PibotoLt'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Disconnected</p></body></html>", nullptr));
        GetFeatures_button->setText(QCoreApplication::translate("fota", "Update/Get Features", nullptr));
        label_5->setText(QString());
        ConnectWin_Button->setText(QCoreApplication::translate("fota", "Connect to WiFi", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("fota", "Server", nullptr));
        Access_Finger_button->setText(QCoreApplication::translate("fota", "Acess with Finger Print", nullptr));
        label_2->setText(QCoreApplication::translate("fota", "FingerPrint Options", nullptr));
        FingerPrint_Button->setText(QCoreApplication::translate("fota", "Finger Print Register ", nullptr));
        label_4->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("fota", "Features", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fota: public Ui_fota {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOTA_H
