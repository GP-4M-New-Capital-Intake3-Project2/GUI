#include "fota.h"
#include "ui_fota.h"
#include <QDesktopServices>
#include <QUrl>
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

}

fota::~fota()
{
    delete ui;
}

void fota::on_Server_pushButton_clicked()
{
    QString link="https://www.google.com";
    //QUrl url("http://www.google.com");
    //QString link="https://ide-38fcee10a9aa4a99958ad33bccd7abde-8080.cs50.ws/login";
    QDesktopServices::openUrl(QUrl(link + "--no-sandbox"));
}
