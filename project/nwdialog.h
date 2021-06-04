#ifndef NWDIALOG_H
#define NWDIALOG_H

#include <QDialog>
#include "loginwin.h"

namespace Ui {
class NwDialog;
}

class NwDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NwDialog(QWidget *parent = 0);
    ~NwDialog();

private slots:
    void on_pushButton_2_Login_clicked();

private:
    Ui::NwDialog *ui;
    LoginWin *loginWin;
};

#endif // NWDIALOG_H
