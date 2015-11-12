/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *Controller;
    QWidget *tab;
    QTextBrowser *Speedometer;
    QTextBrowser *FuelGauge;
    QLabel *speed_label;
    QLabel *fuel_label;
    QLabel *setspeed_label;
    QLabel *setfuel_label;
    QPushButton *powerButton;
    QLabel *power_label;
    QWidget *tab_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(724, 403);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setStyleSheet(QStringLiteral("background: rgb(37, 37, 37);"));
        Controller = new QTabWidget(centralwidget);
        Controller->setObjectName(QStringLiteral("Controller"));
        Controller->setGeometry(QRect(9, 9, 711, 361));
        Controller->setStyleSheet(QLatin1String("#Controller{\n"
"color: rgb(25, 25, 25);\n"
"}"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tab->setStyleSheet(QLatin1String("#tab{\n"
"background-color: rgb(25, 25, 25);\n"
"}\n"
""));
        Speedometer = new QTextBrowser(tab);
        Speedometer->setObjectName(QStringLiteral("Speedometer"));
        Speedometer->setGeometry(QRect(30, 20, 191, 111));
        Speedometer->setStyleSheet(QLatin1String("border-radius: 15px;\n"
""));
        FuelGauge = new QTextBrowser(tab);
        FuelGauge->setObjectName(QStringLiteral("FuelGauge"));
        FuelGauge->setGeometry(QRect(30, 170, 191, 111));
        FuelGauge->setStyleSheet(QLatin1String("border-radius: 15px;\n"
""));
        speed_label = new QLabel(tab);
        speed_label->setObjectName(QStringLiteral("speed_label"));
        speed_label->setGeometry(QRect(30, 130, 59, 16));
        speed_label->setStyleSheet(QLatin1String("background-color: rgb(25, 25, 25);\n"
"color: rgb(255, 255, 255);\n"
"font: \"Avenir\";\n"
""));
        fuel_label = new QLabel(tab);
        fuel_label->setObjectName(QStringLiteral("fuel_label"));
        fuel_label->setGeometry(QRect(30, 280, 59, 16));
        fuel_label->setStyleSheet(QLatin1String("background-color: rgb(25, 25, 25);\n"
"color: rgb(255, 255, 255);\n"
"font: \"Avenir\";\n"
""));
        setspeed_label = new QLabel(tab);
        setspeed_label->setObjectName(QStringLiteral("setspeed_label"));
        setspeed_label->setGeometry(QRect(30, 40, 181, 91));
        setspeed_label->setStyleSheet(QLatin1String("color: white;\n"
"font: 25 110pt \"Avenir\";;\n"
"font-style: italic;"));
        setfuel_label = new QLabel(tab);
        setfuel_label->setObjectName(QStringLiteral("setfuel_label"));
        setfuel_label->setGeometry(QRect(30, 190, 181, 91));
        setfuel_label->setStyleSheet(QLatin1String("color: white;\n"
"font: 25 110pt \"Avenir\";;\n"
"font-style: italic;"));
        powerButton = new QPushButton(tab);
        powerButton->setObjectName(QStringLiteral("powerButton"));
        powerButton->setGeometry(QRect(300, 30, 331, 101));
        powerButton->setStyleSheet(QLatin1String("#pushButton{\n"
"background-color: rgb(0, 70, 122);\n"
"color: white;\n"
"font: 25 36pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#pushButton:pressed{\n"
"background-color: rgb(0, 58, 104);\n"
"color: white;\n"
"font: 25 36pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}"));
        power_label = new QLabel(tab);
        power_label->setObjectName(QStringLiteral("power_label"));
        power_label->setGeometry(QRect(420, 60, 101, 41));
        power_label->setStyleSheet(QLatin1String("background-color: rgb(0, 70, 122);\n"
"color: white;\n"
"font: 25 36pt \"Avenir\";\n"
"border-radius: 15px;\n"
"\n"
""));
        Controller->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tab_2->setStyleSheet(QLatin1String("#tab_2{\n"
"background-color: rgb(25, 25, 25);\n"
"}\n"
""));
        Controller->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 724, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        Controller->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "AIOCS", 0));
        speed_label->setText(QApplication::translate("MainWindow", "SPEED", 0));
        fuel_label->setText(QApplication::translate("MainWindow", "FUEL", 0));
        setspeed_label->setText(QApplication::translate("MainWindow", "100", 0));
        setfuel_label->setText(QApplication::translate("MainWindow", "100", 0));
        powerButton->setText(QString());
        power_label->setText(QApplication::translate("MainWindow", "START", 0));
        Controller->setTabText(Controller->indexOf(tab), QApplication::translate("MainWindow", "Tab 1", 0));
        Controller->setTabText(Controller->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
