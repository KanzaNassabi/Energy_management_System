#include "mywindow.h"
#include "ui_mywindow.h"
#include<QMessageBox>
#include<QDebug>
#include<tabwin.h>

MyWindow::MyWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MyWindow)
{
    ui->setupUi(this);
    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),ui->progressBar,SLOT(setValue(int)));
}

MyWindow::~MyWindow()
{
    delete ui;
}

void MyWindow::on_pushButton_clicked()
{
    ui->label->setText("Welcome to our energy paltform");
}

void MyWindow::on_pushButton_2_clicked()
{
    // void about
    // void aboutQT
    //StandardButton critical
    //StandardButton warning
    //StandardButton question
    //StandardButton information
//    QMessageBox::StandardButton reply = QMessageBox::question(this,"Window of App","this is your apps",QMessageBox::Yes | QMessageBox:: No );
//    if(reply == QMessageBox::Yes)
//    {
//        QApplication::quit();
//    }
//    else
//    {
//        QMessageBox::information(this,"W_No","Welcome to our energy paltform");
//    }
    tabWin tab;
    tab.setModal(true);
    tab.exec();
}
