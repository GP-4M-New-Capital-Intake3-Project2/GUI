#ifndef VERIFYREGISTER_H
#define VERIFYREGISTER_H

#include <QWidget>
#include <QDesktopServices>
#include <QUrl>
#include <QProcess>
#include <QDir>
#include <QDebug>
#include <QThread>
#include <QMessageBox>

namespace Ui {
class VerifyRegister;
}

class VerifyRegister : public QWidget
{
    Q_OBJECT

public:
    explicit VerifyRegister(QWidget *parent = nullptr);
    ~VerifyRegister();

private slots:
    void on_pushButton_clicked();

private:
    Ui::VerifyRegister *ui;
};

#endif // VERIFYREGISTER_H
