#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDesktopServices>
#include <QUrl>
#include <QProcess>
#include <QDir>
#include <QDebug>
#include <QThread>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;

}


void MainWindow::on_Connect_Button_clicked()
{
    QString SSID = ui->SSID_lineEdit->text();
    QString Pass = ui->Password_lineEdit->text();
    QFile File("WifiInformation.txt");
    // QIODevice::Append if you need the old information stored.
    // QIODevice::Truncate if you need clearing the file each time write.
    if(File.open(QIODevice::Truncate | QIODevice::ReadWrite))
    {
        QTextStream stream(&File);
        stream << SSID << "\n";
        stream << Pass << "\n";

    }
    QProcess::execute("/bin/bash", {"/home/islam_pi/GUI/ExecutionFiles/connect.sh"});
    /*
        Excute is stuck the process till finishing it.
    */
    //QProcess::startDetached("/bin/bash", {"/home/islam_pi/GUI/FOTA_ver1/connect.sh"});
    QFile file("/home/islam_pi/GUI/build-FOTA_ver1-Desktop-Debug/connectionCheck.txt");
    if(!file.open((QIODevice::ReadOnly| QIODevice::Text ))){
        QMessageBox::warning(0,"Warning",file.errorString());
    }
    else{
        //file.seek(0);
        QTextStream in(&file);
        QString WifiConnected;
        while(!in.atEnd()) {
            WifiConnected.append( in.readLine());
            qDebug() << WifiConnected<<Qt::endl;
        }
        //qDebug()<<WifiConnected;
        if (WifiConnected[0] == '1'){

            //if(((SSID == "shock 1") && (Pass == "k01149149126")) || ((SSID == "ITI") && (Pass == "ITI123@iti"))){
            QMessageBox::information(this,"Connect","Connected Successfully!");
            this->hide();
            fota *fotaPage = new fota();
            fotaPage->show();

        }
        else if(WifiConnected[0] == '0'){
            QMessageBox::warning(this,"Connect","Invalid SSID or Password!");
            ui->SSID_lineEdit->setText("");
            ui->Password_lineEdit->setText("");
        }
        file.close();
    }

}

void MainWindow::on_Close_Button_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"Cancel","Are you sure to close App?",QMessageBox :: Yes | QMessageBox :: No);
    if(reply == QMessageBox :: Yes){
        QApplication::quit();
    }
}
