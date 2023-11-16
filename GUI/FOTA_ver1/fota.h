#ifndef FOTA_H
#define FOTA_H

#include <QMainWindow>
#include <QFile>
#include <QDir>
#include <QString>
#include <QDebug>
#include <QTextStream>
#include <QMessageBox>
#include <QProcess>
#include "mainwindow.h"


namespace Ui {
class fota;
}

class fota : public QMainWindow
{
    Q_OBJECT

public:
    explicit fota(QWidget *parent = nullptr);
    ~fota();

private slots:
    void on_Server_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_LED_Button_clicked();

    void on_ShowFolderContent_clicked();

    void on_GetFeatures_button_clicked();

    void on_NULL_2_clicked();

    void on_FingerPrint_Button_clicked();

    void on_Access_Finger_button_clicked();

    void on_Connect_Button_clicked();

    void on_ConnectWin_Button_clicked();

private:
    Ui::fota *ui;
};

#endif // FOTA_H
