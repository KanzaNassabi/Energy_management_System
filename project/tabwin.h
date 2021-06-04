#ifndef TABWIN_H
#define TABWIN_H

#include <QDialog>

namespace Ui {
class tabWin;
}

class tabWin : public QDialog
{
    Q_OBJECT

public:
    explicit tabWin(QWidget *parent = 0);
    ~tabWin();

private:
    Ui::tabWin *ui;
};

#endif // TABWIN_H
