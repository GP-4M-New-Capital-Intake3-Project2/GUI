#include "verifyregister.h"
#include "ui_verifyregister.h"

VerifyRegister::VerifyRegister(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::VerifyRegister)
{
    ui->setupUi(this);
}

VerifyRegister::~VerifyRegister()
{
    delete ui;
}

void VerifyRegister::on_pushButton_clicked()
{
    QString Password_Verify = ui->lineEdit->text();
    if(Password_Verify == "12345"){
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
        QMessageBox::information(this,"Register","Finger is Registered Successfully!" );

        this->hide();
    }
    else{
        QMessageBox::warning(this,"Register","Password wronge!\nPlease try again." );
        ui->lineEdit->setText("");
    }
}
