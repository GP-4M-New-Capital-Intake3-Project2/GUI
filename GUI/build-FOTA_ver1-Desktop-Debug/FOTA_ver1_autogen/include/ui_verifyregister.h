/********************************************************************************
** Form generated from reading UI file 'verifyregister.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERIFYREGISTER_H
#define UI_VERIFYREGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VerifyRegister
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QWidget *VerifyRegister)
    {
        if (VerifyRegister->objectName().isEmpty())
            VerifyRegister->setObjectName(QString::fromUtf8("VerifyRegister"));
        VerifyRegister->resize(400, 300);
        pushButton = new QPushButton(VerifyRegister);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 150, 101, 41));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setWeight(75);
        pushButton->setFont(font);
        label = new QLabel(VerifyRegister);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 80, 161, 22));
        label->setFont(font);
        lineEdit = new QLineEdit(VerifyRegister);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(92, 110, 171, 31));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        lineEdit->setFont(font1);

        retranslateUi(VerifyRegister);

        QMetaObject::connectSlotsByName(VerifyRegister);
    } // setupUi

    void retranslateUi(QWidget *VerifyRegister)
    {
        VerifyRegister->setWindowTitle(QCoreApplication::translate("VerifyRegister", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("VerifyRegister", "Enter", nullptr));
        label->setText(QCoreApplication::translate("VerifyRegister", "Owner Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VerifyRegister: public Ui_VerifyRegister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERIFYREGISTER_H
