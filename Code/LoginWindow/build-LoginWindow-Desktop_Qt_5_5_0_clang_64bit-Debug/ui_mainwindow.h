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
#include <QtWidgets/QSlider>
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
    QPushButton *pushButton;
    QPushButton *accel;
    QPushButton *decel;
    QPushButton *refillButton;
    QLabel *empty;
    QLabel *empty_2;
    QWidget *tab_2;
    QPushButton *one;
    QPushButton *two;
    QPushButton *three;
    QPushButton *four;
    QPushButton *five;
    QPushButton *six;
    QPushButton *seven;
    QPushButton *eight;
    QPushButton *nine;
    QPushButton *zero;
    QPushButton *call;
    QPushButton *X;
    QTextBrowser *dialblock;
    QLabel *dial_display;
    QSlider *vol_slider;
    QSlider *mic_slider;
    QLabel *volume_label;
    QLabel *mic_label;
    QTextBrowser *volBlock;
    QTextBrowser *micBlock;
    QLabel *volume_db;
    QLabel *mic_db;
    QLabel *call_label;
    QLabel *call_time;
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
        Controller->setGeometry(QRect(-1, 9, 721, 361));
        Controller->setAutoFillBackground(false);
        Controller->setStyleSheet(QLatin1String("#Controller{\n"
"color: rgb(25, 25, 25);\n"
"}"));
        Controller->setTabPosition(QTabWidget::North);
        Controller->setTabShape(QTabWidget::Triangular);
        Controller->setElideMode(Qt::ElideRight);
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
        speed_label->setStyleSheet(QLatin1String("background-color: transparent;\n"
"color: rgb(255, 255, 255);\n"
"font: \"Avenir\";\n"
""));
        fuel_label = new QLabel(tab);
        fuel_label->setObjectName(QStringLiteral("fuel_label"));
        fuel_label->setGeometry(QRect(30, 280, 59, 16));
        fuel_label->setStyleSheet(QLatin1String("background-color: transparent;\n"
"color: rgb(255, 255, 255);\n"
"font: \"Avenir\";\n"
""));
        setspeed_label = new QLabel(tab);
        setspeed_label->setObjectName(QStringLiteral("setspeed_label"));
        setspeed_label->setGeometry(QRect(30, 40, 181, 91));
        setspeed_label->setStyleSheet(QLatin1String("color: white;\n"
"font: 25 110pt \"Avenir\";;\n"
"font-style: italic;"));
        setspeed_label->setAlignment(Qt::AlignCenter);
        setfuel_label = new QLabel(tab);
        setfuel_label->setObjectName(QStringLiteral("setfuel_label"));
        setfuel_label->setGeometry(QRect(30, 190, 181, 91));
        setfuel_label->setStyleSheet(QLatin1String("color: white;\n"
"font: 25 110pt \"Avenir\";;\n"
"font-style: italic;"));
        setfuel_label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(310, 40, 321, 71));
        pushButton->setStyleSheet(QLatin1String("#pushButton{\n"
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
        accel = new QPushButton(tab);
        accel->setObjectName(QStringLiteral("accel"));
        accel->setGeometry(QRect(340, 130, 121, 171));
        accel->setStyleSheet(QLatin1String("#accel{\n"
"background-color: rgb(37, 37, 37);\n"
"color: white;\n"
"font: 25 36pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#accel:pressed{\n"
"background-color: rgb(27, 27, 27);\n"
"color: white;\n"
"font: 25 36pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}"));
        decel = new QPushButton(tab);
        decel->setObjectName(QStringLiteral("decel"));
        decel->setGeometry(QRect(480, 130, 121, 171));
        decel->setStyleSheet(QLatin1String("#decel{\n"
"background-color: rgb(37, 37, 37);\n"
"color: white;\n"
"font: 25 36pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#decel:pressed{\n"
"background-color: rgb(27, 27, 27);\n"
"color: white;\n"
"font: 25 36pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}"));
        refillButton = new QPushButton(tab);
        refillButton->setObjectName(QStringLiteral("refillButton"));
        refillButton->setGeometry(QRect(230, 170, 31, 31));
        refillButton->setStyleSheet(QLatin1String("#refillButton{\n"
"background-color: rgb(37, 37, 37);\n"
"color: white;\n"
"font: 25 15pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#refillButton:pressed{\n"
"background-color: rgb(27, 27, 27);\n"
"color: white;\n"
"font: 25 15pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}"));
        empty = new QLabel(tab);
        empty->setObjectName(QStringLiteral("empty"));
        empty->setGeometry(QRect(160, 20, 61, 16));
        empty_2 = new QLabel(tab);
        empty_2->setObjectName(QStringLiteral("empty_2"));
        empty_2->setGeometry(QRect(160, 170, 61, 16));
        Controller->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tab_2->setStyleSheet(QLatin1String("#tab_2{\n"
"background-color: rgb(25, 25, 25);\n"
"}\n"
""));
        one = new QPushButton(tab_2);
        one->setObjectName(QStringLiteral("one"));
        one->setGeometry(QRect(40, 90, 61, 51));
        one->setStyleSheet(QLatin1String("#one{\n"
"background-color: rgb(37, 37, 37);\n"
"color: white;\n"
"font: 25 30pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#one:pressed{\n"
"background-color: rgb(27, 27, 27);\n"
"color: white;\n"
"font: 25 30pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}"));
        two = new QPushButton(tab_2);
        two->setObjectName(QStringLiteral("two"));
        two->setGeometry(QRect(110, 90, 61, 51));
        two->setStyleSheet(QLatin1String("#two{\n"
"background-color: rgb(37, 37, 37);\n"
"color: white;\n"
"font: 25 30pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#two:pressed{\n"
"background-color: rgb(27, 27, 27);\n"
"color: white;\n"
"font: 25 30pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}"));
        three = new QPushButton(tab_2);
        three->setObjectName(QStringLiteral("three"));
        three->setGeometry(QRect(180, 90, 61, 51));
        three->setStyleSheet(QLatin1String("#three{\n"
"background-color: rgb(37, 37, 37);\n"
"color: white;\n"
"font: 25 30pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#three:pressed{\n"
"background-color: rgb(27, 27, 27);\n"
"color: white;\n"
"font: 25 30pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}"));
        four = new QPushButton(tab_2);
        four->setObjectName(QStringLiteral("four"));
        four->setGeometry(QRect(40, 150, 61, 51));
        four->setStyleSheet(QLatin1String("#four{\n"
"background-color: rgb(37, 37, 37);\n"
"color: white;\n"
"font: 25 30pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#four:pressed{\n"
"background-color: rgb(27, 27, 27);\n"
"color: white;\n"
"font: 25 30pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}"));
        five = new QPushButton(tab_2);
        five->setObjectName(QStringLiteral("five"));
        five->setGeometry(QRect(110, 150, 61, 51));
        five->setStyleSheet(QLatin1String("#five{\n"
"background-color: rgb(37, 37, 37);\n"
"color: white;\n"
"font: 25 30pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#five:pressed{\n"
"background-color: rgb(27, 27, 27);\n"
"color: white;\n"
"font: 25 30pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}"));
        six = new QPushButton(tab_2);
        six->setObjectName(QStringLiteral("six"));
        six->setGeometry(QRect(180, 150, 61, 51));
        six->setStyleSheet(QLatin1String("#six{\n"
"background-color: rgb(37, 37, 37);\n"
"color: white;\n"
"font: 25 30pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#six:pressed{\n"
"background-color: rgb(27, 27, 27);\n"
"color: white;\n"
"font: 25 30pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}"));
        seven = new QPushButton(tab_2);
        seven->setObjectName(QStringLiteral("seven"));
        seven->setGeometry(QRect(40, 210, 61, 51));
        seven->setStyleSheet(QLatin1String("#seven{\n"
"background-color: rgb(37, 37, 37);\n"
"color: white;\n"
"font: 25 30pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#seven:pressed{\n"
"background-color: rgb(27, 27, 27);\n"
"color: white;\n"
"font: 25 30pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}"));
        eight = new QPushButton(tab_2);
        eight->setObjectName(QStringLiteral("eight"));
        eight->setGeometry(QRect(110, 210, 61, 51));
        eight->setStyleSheet(QLatin1String("#eight{\n"
"background-color: rgb(37, 37, 37);\n"
"color: white;\n"
"font: 25 30pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#eight:pressed{\n"
"background-color: rgb(27, 27, 27);\n"
"color: white;\n"
"font: 25 30pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}"));
        nine = new QPushButton(tab_2);
        nine->setObjectName(QStringLiteral("nine"));
        nine->setGeometry(QRect(180, 210, 61, 51));
        nine->setStyleSheet(QLatin1String("#nine{\n"
"background-color: rgb(37, 37, 37);\n"
"color: white;\n"
"font: 25 30pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#nine:pressed{\n"
"background-color: rgb(27, 27, 27);\n"
"color: white;\n"
"font: 25 30pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}"));
        zero = new QPushButton(tab_2);
        zero->setObjectName(QStringLiteral("zero"));
        zero->setGeometry(QRect(110, 270, 61, 51));
        zero->setStyleSheet(QLatin1String("#zero{\n"
"background-color: rgb(37, 37, 37);\n"
"color: white;\n"
"font: 25 30pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#zero:pressed{\n"
"background-color: rgb(27, 27, 27);\n"
"color: white;\n"
"font: 25 30pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}"));
        call = new QPushButton(tab_2);
        call->setObjectName(QStringLiteral("call"));
        call->setGeometry(QRect(40, 270, 61, 51));
        call->setStyleSheet(QLatin1String("#call{\n"
"background-color: rgb(0, 194, 52);\n"
"color: white;\n"
"font: 25 20pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#call:pressed{\n"
"background-color: rgb(0, 150, 27);\n"
"color: white;\n"
"font: 25 20pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}"));
        X = new QPushButton(tab_2);
        X->setObjectName(QStringLiteral("X"));
        X->setGeometry(QRect(180, 270, 61, 51));
        X->setStyleSheet(QLatin1String("#X{\n"
"background-color: rgb(255, 8, 0);\n"
"color: white;\n"
"font: 25 20pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#X:pressed{\n"
"background-color: rgb(192, 2, 0);\n"
"color: white;\n"
"font: 25 20pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}"));
        dialblock = new QTextBrowser(tab_2);
        dialblock->setObjectName(QStringLiteral("dialblock"));
        dialblock->setGeometry(QRect(40, 10, 201, 51));
        dialblock->setStyleSheet(QLatin1String("border-radius: 15px;\n"
""));
        dial_display = new QLabel(tab_2);
        dial_display->setObjectName(QStringLiteral("dial_display"));
        dial_display->setGeometry(QRect(50, 20, 181, 41));
        dial_display->setStyleSheet(QLatin1String("color: white;\n"
"background-color: transparent;\n"
"font: 25 32pt \"Avenir\";;\n"
"font-style: italic;"));
        dial_display->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        vol_slider = new QSlider(tab_2);
        vol_slider->setObjectName(QStringLiteral("vol_slider"));
        vol_slider->setGeometry(QRect(600, 10, 22, 261));
        vol_slider->setOrientation(Qt::Vertical);
        mic_slider = new QSlider(tab_2);
        mic_slider->setObjectName(QStringLiteral("mic_slider"));
        mic_slider->setGeometry(QRect(660, 10, 22, 261));
        mic_slider->setOrientation(Qt::Vertical);
        volume_label = new QLabel(tab_2);
        volume_label->setObjectName(QStringLiteral("volume_label"));
        volume_label->setGeometry(QRect(590, 270, 41, 16));
        volume_label->setStyleSheet(QLatin1String("color: white;\n"
"background-color: transparent;\n"
"font: 25 12pt \"Avenir\";"));
        mic_label = new QLabel(tab_2);
        mic_label->setObjectName(QStringLiteral("mic_label"));
        mic_label->setGeometry(QRect(660, 270, 21, 16));
        mic_label->setStyleSheet(QLatin1String("color: white;\n"
"background-color: transparent;\n"
"font: 25 12pt \"Avenir\";"));
        volBlock = new QTextBrowser(tab_2);
        volBlock->setObjectName(QStringLiteral("volBlock"));
        volBlock->setGeometry(QRect(590, 290, 41, 31));
        volBlock->setStyleSheet(QLatin1String("border-radius: 10px;\n"
""));
        micBlock = new QTextBrowser(tab_2);
        micBlock->setObjectName(QStringLiteral("micBlock"));
        micBlock->setGeometry(QRect(650, 290, 41, 31));
        micBlock->setStyleSheet(QLatin1String("border-radius: 10px;\n"
""));
        volume_db = new QLabel(tab_2);
        volume_db->setObjectName(QStringLiteral("volume_db"));
        volume_db->setGeometry(QRect(590, 295, 41, 21));
        volume_db->setStyleSheet(QLatin1String("color: white;\n"
"background-color: transparent;\n"
"font: 25 20pt \"Avenir\";"));
        volume_db->setAlignment(Qt::AlignCenter);
        mic_db = new QLabel(tab_2);
        mic_db->setObjectName(QStringLiteral("mic_db"));
        mic_db->setGeometry(QRect(650, 290, 41, 31));
        mic_db->setStyleSheet(QLatin1String("color: white;\n"
"background-color: transparent;\n"
"font: 25 20pt \"Avenir\";"));
        mic_db->setAlignment(Qt::AlignCenter);
        call_label = new QLabel(tab_2);
        call_label->setObjectName(QStringLiteral("call_label"));
        call_label->setGeometry(QRect(70, 70, 71, 16));
        call_label->setStyleSheet(QLatin1String("color:white;\n"
"background-color: transparent;\n"
"font: 25 15pt \"Avenir\";"));
        call_time = new QLabel(tab_2);
        call_time->setObjectName(QStringLiteral("call_time"));
        call_time->setGeometry(QRect(150, 70, 71, 16));
        call_time->setStyleSheet(QLatin1String("color:white;\n"
"background-color: transparent;\n"
"font: 25 15pt \"Avenir\";"));
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

        Controller->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "AIOCS", 0));
        speed_label->setText(QApplication::translate("MainWindow", "SPEED", 0));
        fuel_label->setText(QApplication::translate("MainWindow", "FUEL", 0));
        setspeed_label->setText(QApplication::translate("MainWindow", "0", 0));
        setfuel_label->setText(QApplication::translate("MainWindow", "50", 0));
        pushButton->setText(QApplication::translate("MainWindow", "START", 0));
        accel->setText(QApplication::translate("MainWindow", "+", 0));
        decel->setText(QApplication::translate("MainWindow", "-", 0));
        refillButton->setText(QApplication::translate("MainWindow", "R", 0));
        empty->setText(QString());
        empty_2->setText(QString());
        Controller->setTabText(Controller->indexOf(tab), QApplication::translate("MainWindow", "Drive", 0));
        one->setText(QApplication::translate("MainWindow", "1", 0));
        two->setText(QApplication::translate("MainWindow", "2", 0));
        three->setText(QApplication::translate("MainWindow", "3", 0));
        four->setText(QApplication::translate("MainWindow", "4", 0));
        five->setText(QApplication::translate("MainWindow", "5", 0));
        six->setText(QApplication::translate("MainWindow", "6", 0));
        seven->setText(QApplication::translate("MainWindow", "7", 0));
        eight->setText(QApplication::translate("MainWindow", "8", 0));
        nine->setText(QApplication::translate("MainWindow", "9", 0));
        zero->setText(QApplication::translate("MainWindow", "0", 0));
        call->setText(QApplication::translate("MainWindow", "CALL", 0));
        X->setText(QApplication::translate("MainWindow", "X", 0));
        dial_display->setText(QString());
        volume_label->setText(QApplication::translate("MainWindow", "volume", 0));
        mic_label->setText(QApplication::translate("MainWindow", "mic", 0));
        volume_db->setText(QApplication::translate("MainWindow", "0", 0));
        mic_db->setText(QApplication::translate("MainWindow", "0", 0));
        call_label->setText(QString());
        call_time->setText(QString());
        Controller->setTabText(Controller->indexOf(tab_2), QApplication::translate("MainWindow", "Phone", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
