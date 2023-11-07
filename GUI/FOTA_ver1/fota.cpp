#include "fota.h"
#include "ui_fota.h"
#include <QDesktopServices>
#include <QUrl>
#include <QFileInfo>
#include <QFileDialog>
#include <string>
fota::fota(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::fota)
{
    ui->setupUi(this);

    QFile File("WifiInformation.txt");
    if(File.open(QIODevice::ReadOnly)){

        QTextStream stream(&File);
        /*QString FileData;
         while(stream.atEnd() == false){
             FileData += stream.readLine() + "\n";
         }
         ui->ShowSSID_textEdit->setText(FileData);*/
        ui->ShowSSID_textEdit->setText(stream.readLine());
    }
    ui->LED_Button->setEnabled(false);
    ui->FingerPrint_Button->setEnabled(false);
    ui->Led_Off_button->setEnabled(false);
    ui->Access_Finger_button->setEnabled(false);
    ui->NULL_2->setVisible(false);

}

fota::~fota()
{
    delete ui;
}

void fota::on_Server_pushButton_clicked()
{
    QString link="https://ide-38fcee10a9aa4a99958ad33bccd7abde-8080.cs50.ws/login";
    //QUrl url("http://www.google.com");
    //QString link="https://ide-38fcee10a9aa4a99958ad33bccd7abde-8080.cs50.ws/login";
    QDesktopServices::openUrl(QUrl(link));
}
void fota::on_pushButton_2_clicked()
{

    /* //GetExistDirectory and write it in lineEdit
    QString filename= QFileDialog::getExistingDirectory(this,"Choose Folder");

    if (filename.isEmpty())
        return;
    ui->Path_lineEdit->setText(filename);
   */
    /* // Check if the directory is empty?
    if(QDir("/home/islam_pi/Downloads").entryInfoList(QDir::NoDotAndDotDot|QDir::AllEntries).count() == 0)
    {

        QMessageBox::information(this,"Directory is empty","Empty!!!");
        ui->LED_Button->setVisible(false);
    }
    else{

        QMessageBox::information(this,"Directory is empty","Not Empty!!!");
        ui->LED_Button->setVisible(true);

    }*/


    /*QFileInfo check_file("/home/islam_pi/Downloads/DAC.hex");
    // check if file exists and if yes: Is it really a file and no directory?
    if (check_file.exists() && check_file.isFile()) {
        QMessageBox::information(this,"File","Exist Successfully!");
    } else {
        QMessageBox::warning(this,"File","Invalid File!");
    }*/

}
// LedOn Feature
void fota::on_LED_Button_clicked()
{
    /*QFile f("/home/islam_pi/Downloads");
    QFileInfo fileInfo(f.fileName());
    QString filename(fileInfo.fileName());
    QMessageBox::warning(this,"File",fileInfo.fileName());
*/
    //QString str = f.fileName();
}

void fota::on_ShowFolderContent_clicked()
{

}

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


    int Verified = 1;
    if(Verified==1){
        QString pythonInterpreter = "python"; // or specify the full path to the Python interpreter
        QString pythonScript = "/home/islam_pi/GUI/ExecutionFiles/send.py";
        //QProcess::execute(pythonInterpreter, QStringList() << pythonScript);

        ui->Path_lineEdit->setText("Features had uploaded on STM");
        ui->listWidget->clear();

        //QString dirPath= ui->Path_lineEdit->text();
        QString dirPath= "/home/islam_pi/Downloads";

        if (dirPath.isEmpty())
            return;

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

            //if (  filename == ui->LED_Button->text() ){
            if (  filename == "LED"){
                ui->LED_Button->setEnabled(true);
                ui->Led_Off_button->setEnabled(true);

                QMessageBox::warning(this,"File","Led Enabled" );

            }
            //if(filename== ui->FingerPrint_Button->text()){
            if(filename== "FingerPrint"){
                ui->FingerPrint_Button->setEnabled(true);
                ui->Access_Finger_button->setEnabled(true);

                QMessageBox::warning(this,"File","FP Enabled" );

            }
            //ui->listWidget->addItem(fileList.at(i).absoluteFilePath());
        }


    }
    else
        ui->Path_lineEdit->setText("Uploading Failed!");


}

void fota::on_NULL_2_clicked()
{

}
// Registeration
void fota::on_FingerPrint_Button_clicked()
{
    QString pythonInterpreter = "python"; // or specify the full path to the Python interpreter
    QString pythonScript = "/home/islam_pi/GUI/ExecutionFiles/SendFP_RChar.py";  // replace with the actual path of your Python script
    /*QString Valid;
    do{
        QProcess::execute(pythonInterpreter, QStringList() << pythonScript);
        QFile file("/home/islam_pi/GUI/build-FOTA_ver1-Desktop-Debug/CheckFPStatus.txt");
        if(!file.open((QIODevice::ReadOnly| QIODevice::Text ))){
            QMessageBox::warning(0,"Warning",file.errorString());
        }
        else{
            QTextStream in(&file);
            while(!in.atEnd()) {
                Valid.append( in.readLine());
            }
            if(Valid[0] == '0'){
                QMessageBox::warning(this,"Register","Registeration failed!\nPlease try again." );
            }
        }
    }while(Valid[0] != '1');
    QMessageBox::information(this,"Register","Finger is Registered Successfully!" );
*/

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
     }
}
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
