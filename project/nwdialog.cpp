#include "nwdialog.h"
#include "ui_nwdialog.h"
#include <QMessageBox>

NwDialog::NwDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NwDialog)
{
    ui->setupUi(this);
}

NwDialog::~NwDialog()
{
    delete ui;
}

void NwDialog::on_pushButton_2_Login_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_2_password->text();
    if (username == "kad" && password == "kad")
    {
       QMessageBox::information(this,"Login","The username and the password are correct");
      // hide();
        loginWin = new LoginWin(this);
        loginWin->show();

    }
    else
    {
        QMessageBox::warning(this,"Login","The username and the password are not correct");
    }

}
