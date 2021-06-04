/********************************************************************************
** Form generated from reading UI file 'tabwin.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABWIN_H
#define UI_TABWIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tabWin
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLCDNumber *lcdNumber_4;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLCDNumber *lcdNumber_5;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QLCDNumber *lcdNumber_6;
    QLabel *label_11;
    QWidget *tab_5;
    QProgressBar *progressBar;
    QWidget *tab_2;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QWidget *tab_4;
    QWidget *tab_6;
    QWidget *tab_7;
    QLabel *label;

    void setupUi(QDialog *tabWin)
    {
        if (tabWin->objectName().isEmpty())
            tabWin->setObjectName(QStringLiteral("tabWin"));
        tabWin->resize(538, 363);
        tabWidget = new QTabWidget(tabWin);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 541, 361));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(280, 70, 201, 121));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout->addWidget(label_5);

        lcdNumber_4 = new QLCDNumber(layoutWidget);
        lcdNumber_4->setObjectName(QStringLiteral("lcdNumber_4"));

        horizontalLayout->addWidget(lcdNumber_4);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout->addWidget(label_9);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_2->addWidget(label_6);

        lcdNumber_5 = new QLCDNumber(layoutWidget);
        lcdNumber_5->setObjectName(QStringLiteral("lcdNumber_5"));

        horizontalLayout_2->addWidget(lcdNumber_5);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_2->addWidget(label_10);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_3->addWidget(label_7);

        lcdNumber_6 = new QLCDNumber(layoutWidget);
        lcdNumber_6->setObjectName(QStringLiteral("lcdNumber_6"));

        horizontalLayout_3->addWidget(lcdNumber_6);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_3->addWidget(label_11);


        verticalLayout->addLayout(horizontalLayout_3);

        tabWidget->addTab(tab, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        progressBar = new QProgressBar(tab_5);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(80, 80, 251, 101));
        progressBar->setValue(24);
        tabWidget->addTab(tab_5, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget_2 = new QTabWidget(tab_2);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 30, 531, 311));
        tabWidget_2->setTabPosition(QTabWidget::West);
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget_2->addTab(tab_4, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        tabWidget_2->addTab(tab_6, QString());
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        tabWidget_2->addTab(tab_7, QString());
        label = new QLabel(tab_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 231, 21));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(tabWin);

        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(tabWin);
    } // setupUi

    void retranslateUi(QDialog *tabWin)
    {
        tabWin->setWindowTitle(QApplication::translate("tabWin", "Dialog", nullptr));
        label_5->setText(QApplication::translate("tabWin", "Puissance des PV", nullptr));
        label_9->setText(QApplication::translate("tabWin", "W", nullptr));
        label_6->setText(QApplication::translate("tabWin", "Puissance des Batteries", nullptr));
        label_10->setText(QApplication::translate("tabWin", "W", nullptr));
        label_7->setText(QApplication::translate("tabWin", "Puissance du secteur", nullptr));
        label_11->setText(QApplication::translate("tabWin", "W", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("tabWin", "Accueil", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("tabWin", "Niveaux de batteries", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("tabWin", "Quotidienne", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("tabWin", "Hebdomadaire", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_6), QApplication::translate("tabWin", "Mensuelle", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("tabWin", "Annuelle", nullptr));
        label->setText(QApplication::translate("tabWin", "L'historique de la consomation", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("tabWin", "L'historique ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tabWin: public Ui_tabWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABWIN_H
