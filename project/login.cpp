#include "login.h"
#include "ui_login.h"
#include<mainwindow.h>

LogIn::LogIn(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LogIn)
{
    ui->setupUi(this);
}

LogIn::~LogIn()
{
    delete ui;
}

void LogIn::on_pushButton_clicked()
{
    MainWindow accueil;
    accueil.setModal(true);
    accueil.excet;
}
