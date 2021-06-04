/********************************************************************************
** Form generated from reading UI file 'nwdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NWDIALOG_H
#define UI_NWDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NwDialog
{
public:
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QPushButton *pushButton_2_Login;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_username;
    QLineEdit *lineEdit_username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2_password;
    QLineEdit *lineEdit_2_password;
    QLabel *label;

    void setupUi(QDialog *NwDialog)
    {
        if (NwDialog->objectName().isEmpty())
            NwDialog->setObjectName(QStringLiteral("NwDialog"));
        NwDialog->resize(400, 300);
        pushButton = new QPushButton(NwDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(310, 260, 75, 23));
        groupBox = new QGroupBox(NwDialog);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(160, 60, 231, 161));
        pushButton_2_Login = new QPushButton(groupBox);
        pushButton_2_Login->setObjectName(QStringLiteral("pushButton_2_Login"));
        pushButton_2_Login->setGeometry(QRect(140, 130, 75, 23));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 20, 211, 91));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_username = new QLabel(widget);
        label_username->setObjectName(QStringLiteral("label_username"));

        horizontalLayout->addWidget(label_username);

        lineEdit_username = new QLineEdit(widget);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));

        horizontalLayout->addWidget(lineEdit_username);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2_password = new QLabel(widget);
        label_2_password->setObjectName(QStringLiteral("label_2_password"));

        horizontalLayout_2->addWidget(label_2_password);

        lineEdit_2_password = new QLineEdit(widget);
        lineEdit_2_password->setObjectName(QStringLiteral("lineEdit_2_password"));
        lineEdit_2_password->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(lineEdit_2_password);


        verticalLayout->addLayout(horizontalLayout_2);

        label = new QLabel(NwDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 70, 131, 141));

        retranslateUi(NwDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), NwDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(NwDialog);
    } // setupUi

    void retranslateUi(QDialog *NwDialog)
    {
        NwDialog->setWindowTitle(QApplication::translate("NwDialog", "Dialog", nullptr));
        pushButton->setText(QApplication::translate("NwDialog", "Close", nullptr));
        groupBox->setTitle(QApplication::translate("NwDialog", "SignIn", nullptr));
        pushButton_2_Login->setText(QApplication::translate("NwDialog", "LogIn", nullptr));
        label_username->setText(QApplication::translate("NwDialog", "UserName", nullptr));
        label_2_password->setText(QApplication::translate("NwDialog", "PassWord", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NwDialog: public Ui_NwDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NWDIALOG_H
