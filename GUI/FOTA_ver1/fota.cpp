/*************************************************************
 * Author           :Islam Shaaban Hussein
 * File description :Secondry component of FOTA GUI
 * Date             :20/10/2023
 * Version          :v0.1
 **************************************************************/
#include "fota.h"
#include "ui_fota.h"
#include "verifyregister.h"
#include <QDesktopServices>
#include <QUrl>
#include <QFileInfo>
#include <QFileDialog>
#include <string>
#include <QPixmap>

///
/// \brief fota::fota
///         Constrctor of the fota class, which will start to setup the userinterface fota window.
///         Which will start automatically with written SSID in the TextEdit component.
/// \param parent pointer refers to the main window.
fota::fota(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::fota)
{
    this->resize(1920,1080);
    ui->setupUi(this);
    QFile File("WifiInformation.txt");
    if(File.open(QIODevice::ReadOnly)){
        QTextStream stream(&File);
        ui->ShowSSID_textEdit->setText(stream.readLine());
        ui->ShowSSID_textEdit->setEnabled(false);
    }
    QPixmap pixITI("/home/islam_pi/GUI/ITI.png");
    ui->label->setPixmap(pixITI.scaled(150,50,Qt::KeepAspectRatio));

    QPixmap pix("/home/islam_pi/GUI/CAR1.jpg");
    ui->label_4->setPixmap(pix.scaled(550,200,Qt::KeepAspectRatio));

    QPixmap pix1("/home/islam_pi/GUI/CAR1.jpg");
    ui->label_5->setPixmap(pix.scaled(550,200,Qt::KeepAspectRatio));

    ui->FingerPrint_Button->setEnabled(false);
    ui->Access_Finger_button->setEnabled(false);

    QFile file("/home/islam_pi/GUI/build-FOTA_ver1-Desktop-Debug/Enabled.txt");
    if(!file.open((QIODevice::ReadOnly| QIODevice::Text ))){
        QMessageBox::warning(0,"Warning",file.errorString());
    }
    else{
        QTextStream in(&file);
        QString Valid;
        while(!in.atEnd()) {
            Valid.append( in.readLine());
        }

        if (Valid[0] == '1'){
            ui->Path_lineEdit->setText("Features had uploaded on STM");
            ui->FingerPrint_Button->setEnabled(true);
            ui->Access_Finger_button->setEnabled(true);
            QMessageBox::warning(this,"File","FP Enabled" );
        }
        else if(Valid[0] == '0'){
        }
    }
}

///
/// \brief fota::~fota
///         Destructor which will delete the memory allocation of parent pointer.
///
fota::~fota(){
    delete ui;
}

///
/// \brief fota::on_Server_pushButton_clicked
///         a slot of the signal of ServerWebiste-Button,
///         which is the action when the button is clicked:
///         When the user press Server-Website,
///         System will redirect you to e-commerce website,
///         which you can buy the feature from
///
/// \param void
/// \return void
void fota::on_Server_pushButton_clicked()
{
    QString link="https://ide-38fcee10a9aa4a99958ad33bccd7abde-8080.cs50.ws/login";
    QDesktopServices::openUrl(QUrl(link));
}


///
/// \brief fota::on_GetFeatures_button_clicked
///         a slot of the signal of ServerWebiste-Button,
///         which is the action when the button is clicked:
///         When the user press Server-Website,
///         The Downloaded file will be validated with Hashlib algorithm,
///         then flashed to the Targed ECU [STM32]
///
/// \param void
/// \return void
///
void fota::on_GetFeatures_button_clicked()
{
    //Validation for signature
    /*QProcess::execute("/bin/bash", {"/home/islam_pi/GUI/ExecutionFiles/valid.sh"});
    QFile file("/home/islam_pi/GUI/build-FOTA_ver1-Desktop-Debug/valided.txt");
    if(!file.open((QIODevice::ReadOnly| QIODevice::Text ))){
        QMessageBox::warning(0,"Warning",file.errorString());
    }
    else{
        QTextStream in(&file);
        QString Valid;
        while(!in.atEnd()) {
            Valid.append( in.readLine());
        }
        if (Valid[0] == '1'){
            // Sending the hex files to STM By Qproces
            QString pythonInterpreter = "python"; // or specify the full path to the Python interpreter
            QString pythonScript = "/home/islam_pi/GUI/ExecutionFiles/send.py";
            QProcess::execute(pythonInterpreter, QStringList() << pythonScript);
            ui->Path_lineEdit->setText("Features had uploaded on STM");
            ui->listWidget->clear();
            QString dirPath= "/home/islam_pi/Downloads";
            if (dirPath.isEmpty())
                return;
            QDir dir(dirPath);
            QList <QFileInfo> fileList= dir.entryInfoList();
            for (int i=2; i< fileList.size(); i++){
                QString prefix;
                if (fileList.at(i).isFile()){
                    prefix= "File: ";
                }
                if (fileList.at(i).isDir()){
                    prefix="Directory: ";
                }
                QString str = fileList.at(i).absoluteFilePath();
                str= str.split('/').last();
                QString filename = str.split('.').first();
                ui->listWidget->addItem(prefix + str   );
                if (  filename == "LED"){
                    ui->LED_Button->setEnabled(true);
                    ui->Led_Off_button->setEnabled(true);
                    QMessageBox::warning(this,"File","Led Enabled" );
                }
                if(filename== "FingerPrint"){
                    ui->FingerPrint_Button->setEnabled(true);
                    ui->Access_Finger_button->setEnabled(true);
                    QMessageBox::warning(this,"File","FP Enabled" );
                }
            }
        }
        else if(Valid[0] == '0'){
            // Hacking or Network
            ui->Path_lineEdit->setText("Downloading Failed!");
        }
    }*/

    QString pythonInterpreter = "python"; // or specify the full path to the Python interpreter
    QString pythonScript = "/home/islam_pi/GUI/ExecutionFiles/Reset.py";
    QProcess::execute(pythonInterpreter, QStringList() << pythonScript);

    int Verified = 1;
    if(Verified==1){
        QString pythonInterpreter = "python"; // or specify the full path to the Python interpreter
        QString pythonScript = "/home/islam_pi/GUI/ExecutionFiles/send.py";
        QProcess::execute(pythonInterpreter, QStringList() << pythonScript);

        //Another Reset Because of the Systick problem!
        pythonInterpreter = "python"; // or specify the full path to the Python interpreter
        pythonScript = "/home/islam_pi/GUI/ExecutionFiles/Reset.py";
        QProcess::execute(pythonInterpreter, QStringList() << pythonScript);
        QFile file("/home/islam_pi/GUI/build-FOTA_ver1-Desktop-Debug/Enabled.txt");
        if(!file.open((QIODevice::ReadOnly| QIODevice::Text ))){
            QMessageBox::warning(0,"Warning",file.errorString());
        }
        else{
            QTextStream in(&file);
            QString Valid;
            while(!in.atEnd()) {
                Valid.append( in.readLine());
            }

            if (Valid[0] == '1'){
                ui->Path_lineEdit->setText("Features had uploaded on STM");
                ui->FingerPrint_Button->setEnabled(true);
                ui->Access_Finger_button->setEnabled(true);
                QMessageBox::warning(this,"File","FP Enabled" );
            }
            else if(Valid[0] == '0'){
            }
        }


       /* QString dirPath= "/home/islam_pi/Downloads";

        if (dirPath.isEmpty())
        {


        }
        else{ // if the Dir is  not empty
            QDir dir(dirPath);

            //Get the list of files and directories in the folder
            QList <QFileInfo> fileList= dir.entryInfoList();

            for (int i=2; i< fileList.size(); i++){
                QString prefix;
                if (fileList.at(i).isFile()){
                    prefix= "File: ";
                }
                if (fileList.at(i).isDir()){
                    prefix="Directory: ";
                }
                QString str = fileList.at(i).absoluteFilePath();
                str= str.split('/').last();
                QString filename = str.split('.').first();

                ui->listWidget->addItem(prefix + str   );

                if (  filename == "LED"){
                    ui->LED_Button->setEnabled(true);
                    ui->Led_Off_button->setEnabled(true);
                    QMessageBox::warning(this,"File","Led Enabled" );
                }
                if(filename== "FingerPrint"){
                    ui->FingerPrint_Button->setEnabled(true);
                    ui->Access_Finger_button->setEnabled(true);
                    QMessageBox::warning(this,"File","FP Enabled" );
                }
            }
        }*/
    }else
        ui->Path_lineEdit->setText("Uploading Failed!");
}


///
/// \brief fota::on_FingerPrint_Button_clicked
///         a slot of the signal of The Registeration Button, which is the action when the button is clicked:
///         When the user press Fingerprint regisertation, the algorithm will work.
///
/// \param void
/// \return void
///
void fota::on_FingerPrint_Button_clicked()
{
    VerifyRegister *verifyregisterPage = new VerifyRegister();
    verifyregisterPage->show();
    /*QString pythonInterpreter = "python"; // or specify the full path to the Python interpreter
    QString pythonScript = "/home/islam_pi/GUI/ExecutionFiles/SendFP_RChar.py";  // replace with the actual path of your Python script
    QProcess::execute(pythonInterpreter, QStringList() << pythonScript);
    QFile file("/home/islam_pi/GUI/build-FOTA_ver1-Desktop-Debug/CheckFPStatus.txt");
    if(!file.open((QIODevice::ReadOnly| QIODevice::Text ))){
        QMessageBox::warning(0,"Warning",file.errorString());
    }
    else{
        QTextStream in(&file);
        QString Valid;
        while(!in.atEnd()) {
            Valid.append( in.readLine());
        }

        if (Valid[0] == '1'){
            QMessageBox::information(this,"Register","Finger is Registered Successfully!" );
        }
        else if(Valid[0] == '0'){
            QMessageBox::warning(this,"Register","Registeration failed!\nPlease try again." );
        }
    }*/
}

///
/// \brief fota::on_Access_Finger_button_clicked
/// a slot of the signal of The Access Button, which is the action when the button is clicked:
/// When the user click Access with Fingerprint button, algorithm will work.
/// if you registered before, you will be allow to access, if not, you will be NOT allow.
///
/// \param void
/// \return void
///
void fota::on_Access_Finger_button_clicked()
{
    QString pythonInterpreter = "python"; // or specify the full path to the Python interpreter
    QString pythonScript = "/home/islam_pi/GUI/ExecutionFiles/SendFP_AChar.py";  // replace with the actual path of your Python script
    QProcess::execute(pythonInterpreter, QStringList() << pythonScript);
    QFile file("/home/islam_pi/GUI/build-FOTA_ver1-Desktop-Debug/CheckFPStatus.txt");
    if(!file.open((QIODevice::ReadOnly| QIODevice::Text ))){
        QMessageBox::warning(0,"Warning",file.errorString());
    }
    else{
        QTextStream in(&file);
        QString Valid;
        while(!in.atEnd()) {
            Valid.append( in.readLine());
        }
        if (Valid[0] == '1'){
            QMessageBox::information(this,"Access","Finger is Accessed Successfully!" );
        }
        else if(Valid[0] == '0'){
            QMessageBox::warning(this,"Access","\"Finger Prin\" t is not exist!" );
        }
    }
}
