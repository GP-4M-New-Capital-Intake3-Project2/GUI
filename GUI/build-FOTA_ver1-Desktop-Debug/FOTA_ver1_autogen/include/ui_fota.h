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
    QPushButton *pushButton_2;
    QLabel *ShowSSID_label;
    QTextEdit *ShowSSID_textEdit;
    QWidget *tab_2;
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
        tabWidget->setGeometry(QRect(40, 10, 641, 541));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        Server_pushButton = new QPushButton(tab);
        Server_pushButton->setObjectName(QString::fromUtf8("Server_pushButton"));
        Server_pushButton->setGeometry(QRect(180, 70, 151, 30));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(460, 450, 91, 30));
        ShowSSID_label = new QLabel(tab);
        ShowSSID_label->setObjectName(QString::fromUtf8("ShowSSID_label"));
        ShowSSID_label->setGeometry(QRect(40, 20, 81, 22));
        ShowSSID_textEdit = new QTextEdit(tab);
        ShowSSID_textEdit->setObjectName(QString::fromUtf8("ShowSSID_textEdit"));
        ShowSSID_textEdit->setGeometry(QRect(170, 20, 171, 41));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
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
        pushButton_2->setText(QCoreApplication::translate("fota", "Disconnect", nullptr));
        ShowSSID_label->setText(QCoreApplication::translate("fota", "Your SSID", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("fota", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("fota", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fota: public Ui_fota {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FOTA_H
