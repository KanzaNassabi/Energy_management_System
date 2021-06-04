/********************************************************************************
** Form generated from reading UI file 'loginwin.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWIN_H
#define UI_LOGINWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWin
{
public:
    QCheckBox *checkBox;
    QComboBox *comboBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QProgressBar *progressBar;

    void setupUi(QDialog *LoginWin)
    {
        if (LoginWin->objectName().isEmpty())
            LoginWin->setObjectName(QStringLiteral("LoginWin"));
        LoginWin->resize(400, 300);
        checkBox = new QCheckBox(LoginWin);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(80, 210, 91, 21));
        comboBox = new QComboBox(LoginWin);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(80, 70, 151, 21));
        layoutWidget = new QWidget(LoginWin);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(210, 260, 158, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        progressBar = new QProgressBar(LoginWin);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(250, 70, 118, 151));
        progressBar->setValue(24);
        progressBar->setOrientation(Qt::Vertical);
        progressBar->setTextDirection(QProgressBar::BottomToTop);

        retranslateUi(LoginWin);
        QObject::connect(pushButton_2, SIGNAL(clicked()), LoginWin, SLOT(close()));

        QMetaObject::connectSlotsByName(LoginWin);
    } // setupUi

    void retranslateUi(QDialog *LoginWin)
    {
        LoginWin->setWindowTitle(QApplication::translate("LoginWin", "Dialog", nullptr));
        checkBox->setText(QApplication::translate("LoginWin", "Good service", nullptr));
        pushButton->setText(QApplication::translate("LoginWin", "check", nullptr));
        pushButton_2->setText(QApplication::translate("LoginWin", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWin: public Ui_LoginWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWIN_H
