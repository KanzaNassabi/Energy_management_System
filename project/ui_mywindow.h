/********************************************************************************
** Form generated from reading UI file 'mywindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWINDOW_H
#define UI_MYWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyWindow
{
public:
    QAction *actionquotidien;
    QAction *actionhebdomader;
    QAction *actionmonsuel;
    QAction *actionannuel;
    QWidget *centralWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QLabel *label;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QProgressBar *progressBar;
    QSlider *horizontalSlider;
    QMenuBar *menuBar;
    QMenu *menuMenu;
    QMenu *menuaccueil;
    QMenu *menuHistorique;
    QMenu *menuNiveau_de_batterie;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MyWindow)
    {
        if (MyWindow->objectName().isEmpty())
            MyWindow->setObjectName(QStringLiteral("MyWindow"));
        MyWindow->resize(475, 372);
        actionquotidien = new QAction(MyWindow);
        actionquotidien->setObjectName(QStringLiteral("actionquotidien"));
        actionhebdomader = new QAction(MyWindow);
        actionhebdomader->setObjectName(QStringLiteral("actionhebdomader"));
        actionmonsuel = new QAction(MyWindow);
        actionmonsuel->setObjectName(QStringLiteral("actionmonsuel"));
        actionannuel = new QAction(MyWindow);
        actionannuel->setObjectName(QStringLiteral("actionannuel"));
        centralWidget = new QWidget(MyWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 10, 261, 31));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        horizontalLayout->addWidget(pushButton);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(280, 270, 191, 31));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(widget1);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget1);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);

        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(50, 90, 171, 91));
        progressBar->setValue(50);
        progressBar->setTextVisible(true);
        progressBar->setOrientation(Qt::Horizontal);
        progressBar->setInvertedAppearance(false);
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(50, 220, 141, 21));
        horizontalSlider->setOrientation(Qt::Horizontal);
        MyWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MyWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 475, 21));
        menuMenu = new QMenu(menuBar);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        menuaccueil = new QMenu(menuBar);
        menuaccueil->setObjectName(QStringLiteral("menuaccueil"));
        menuHistorique = new QMenu(menuBar);
        menuHistorique->setObjectName(QStringLiteral("menuHistorique"));
        menuNiveau_de_batterie = new QMenu(menuBar);
        menuNiveau_de_batterie->setObjectName(QStringLiteral("menuNiveau_de_batterie"));
        MyWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MyWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MyWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MyWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MyWindow->setStatusBar(statusBar);

        menuBar->addAction(menuMenu->menuAction());
        menuBar->addAction(menuaccueil->menuAction());
        menuBar->addAction(menuHistorique->menuAction());
        menuBar->addAction(menuNiveau_de_batterie->menuAction());
        menuHistorique->addAction(actionquotidien);
        menuHistorique->addAction(actionhebdomader);
        menuHistorique->addAction(actionmonsuel);
        menuHistorique->addAction(actionannuel);

        retranslateUi(MyWindow);
        QObject::connect(horizontalSlider, SIGNAL(valueChanged(int)), progressBar, SLOT(setValue(int)));
        QObject::connect(pushButton_3, SIGNAL(clicked()), MyWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MyWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MyWindow)
    {
        MyWindow->setWindowTitle(QApplication::translate("MyWindow", "MyWindow", nullptr));
        actionquotidien->setText(QApplication::translate("MyWindow", "quotidien", nullptr));
        actionhebdomader->setText(QApplication::translate("MyWindow", "hebdomader", nullptr));
        actionmonsuel->setText(QApplication::translate("MyWindow", "monsuel", nullptr));
        actionannuel->setText(QApplication::translate("MyWindow", "annuel", nullptr));
        pushButton->setText(QApplication::translate("MyWindow", "Open", nullptr));
        label->setText(QApplication::translate("MyWindow", "push the button", nullptr));
        pushButton_2->setText(QApplication::translate("MyWindow", "PushButton", nullptr));
        pushButton_3->setText(QApplication::translate("MyWindow", "quiter", nullptr));
        menuMenu->setTitle(QApplication::translate("MyWindow", "Menu", nullptr));
        menuaccueil->setTitle(QApplication::translate("MyWindow", "Accueil", nullptr));
        menuHistorique->setTitle(QApplication::translate("MyWindow", "Historique", nullptr));
        menuNiveau_de_batterie->setTitle(QApplication::translate("MyWindow", "Niveau de batterie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyWindow: public Ui_MyWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWINDOW_H
