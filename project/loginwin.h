#ifndef LOGINWIN_H
#define LOGINWIN_H

#include <QDialog>

namespace Ui {
class LoginWin;
}

class LoginWin : public QDialog
{
    Q_OBJECT

public:
    explicit LoginWin(QWidget *parent = 0);
    ~LoginWin();

private slots:
    void on_pushButton_clicked();

    void on_checkBox_stateChanged(int arg1);

    void on_pushButton_2_clicked();

private:
    Ui::LoginWin *ui;
};

#endif // LOGINWIN_H
