#include "tabwin.h"
#include "ui_tabwin.h"

tabWin::tabWin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tabWin)
{
    ui->setupUi(this);
}

tabWin::~tabWin()
{
    delete ui;
}
