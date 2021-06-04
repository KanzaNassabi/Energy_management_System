#include "loginwin.h"
#include "ui_loginwin.h"
#include <QMessageBox>

LoginWin::LoginWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginWin)
{
    ui->setupUi(this);
    ui->comboBox->addItem("Daily");
    ui->comboBox->addItem("Weekly");
    ui->comboBox->addItem("Mounthly");
}

LoginWin::~LoginWin()
{
    delete ui;
}

void LoginWin::on_pushButton_clicked()
{
    if(ui->checkBox->isChecked())
    {
        QMessageBox::information(this,"Service","Cusmer like the service");
    }
    else
    {
        QMessageBox::warning(this,"Service","Cusmer did not like the service");
    }
}

void LoginWin::on_checkBox_stateChanged(int arg1)
{
    if(arg1)
    {
        QMessageBox::information(this,"Service","Cusmer like the service");
    }
    else
    {
        QMessageBox::warning(this,"Service","Cusmer did not like the service");
    }
}

