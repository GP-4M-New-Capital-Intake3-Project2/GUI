/*************************************************************
 * Author           :Islam Shaaban Hussein
 * File description :Main component of FOTA GUI
 * Date             :20/10/2023
 * Version          :v0.1
 **************************************************************/
#include "mainwindow.h"
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QDesktopServices>
#include <QUrl>
#include <QProcess>
#include <QDir>
#include <QDebug>
#include <QThread>
///
/// \brief MainWindow::MainWindow
///         Constrctor of the mainwindow class,
///         which will start to setup the userinterface main window.
///
/// \param parent: pointer refers to the main window.
///
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow){
    ui->setupUi(this);
}

///
/// \brief MainWindow::~MainWindow
///         Destructor.
///
MainWindow::~MainWindow(){
    delete ui;
}

///
/// \brief MainWindow::on_Connect_Button_clicked
///         a slot of the signal of Connect-Button,
///         which is the action when the button is clicked:
///         When the user press Connect, System will try to connect to WiFi network,
///         if the wrote SSID and Password is correct.
///
/// \param void
/// \return void
void MainWindow::on_Connect_Button_clicked()
{
    QString SSID = ui->SSID_lineEdit->text();
    QString Pass = ui->Password_lineEdit->text();

    /* Writing the SSID&Password which wrote in the LineEdit components,
     * in the WifiInformation File
    */
    QFile File("WifiInformation.txt");
    if(File.open(QIODevice::Truncate | QIODevice::ReadWrite)){
        QTextStream stream(&File);
        stream << SSID << "\n";
        stream << Pass << "\n";
    }

    // The Bash Script which try to connect the WiFi network.
    QProcess::execute("/bin/bash", {"/home/islam_pi/GUI/ExecutionFiles/connect.sh"});

    /* Read the result of the connection from connectionCheck file,
         * if   1     >> Connection is succussful and open new Window >> The FOTA window.
         * else 0     >> Connection is failed. >> Write the SSID&Password again.
    */
    QFile file("/home/islam_pi/GUI/build-FOTA_ver1-Desktop-Debug/connectionCheck.txt");
    if(!file.open((QIODevice::ReadOnly| QIODevice::Text ))){
        QMessageBox::warning(0,"Warning",file.errorString());
    }
    else{
        QTextStream in(&file);
        QString WifiConnected;
        while(!in.atEnd()) {
            WifiConnected.append( in.readLine());
            qDebug() << WifiConnected<<Qt::endl;
        }
        if (WifiConnected[0] == '1'){
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

///
/// \brief MainWindow::on_Close_Button_clicked
///         a slot of the signal of Close-Button, which is the action when the button is clicked:
///         When the user clicked on the button, a QMessageBox will appear to ensure that
///         if you want to close the application.
///         if yes >> the window will be quit.
///
/// \param void
/// \return void
void MainWindow::on_Close_Button_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this,"Cancel","Are you sure to close App?",QMessageBox :: Yes | QMessageBox :: No);
    if(reply == QMessageBox :: Yes){
        QApplication::quit();
    }
}
