/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *Controller;
    QWidget *tab;
    QPushButton *pushButton;
    QPushButton *accel;
    QPushButton *decel;
    QPushButton *refillButton;
    QPushButton *work_button;
    QPushButton *school_button;
    QPushButton *store_button;
    QPushButton *beach_button;
    QLabel *nav_label;
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
    QPushButton *add;
    QPushButton *remove;
    QListWidget *contactList;
    QLabel *contactError;
    QWidget *tab_3;
    QListWidget *radio_fmlist;
    QSlider *radio_slider;
    QPushButton *fm_button;
    QPushButton *am_button;
    QPushButton *add_2;
    QPushButton *remove_2;
    QListWidget *radio_amlist;
    QLabel *radio_db;
    QTextBrowser *micBlock_3;
    QLabel *radio_volumelabel;
    QLabel *radio_label;
    QPushButton *back_button;
    QPushButton *next_button;
    QPushButton *radio_toggle;
    QWidget *tab_4;
    QTableView *tableView;
    QPushButton *Overall;
    QPushButton *Phone;
    QPushButton *Radio;
    QLabel *setspeed_label;
    QTextBrowser *Speedometer;
    QLabel *speed_label;
    QLabel *setfuel_label;
    QTextBrowser *FuelGauge;
    QLabel *fuel_label;
    QLabel *empty;
    QLabel *empty_2;
    QLabel *Warning;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(724, 522);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setStyleSheet(QStringLiteral("background: rgb(37, 37, 37);"));
        Controller = new QTabWidget(centralwidget);
        Controller->setObjectName(QStringLiteral("Controller"));
        Controller->setGeometry(QRect(0, 120, 721, 361));
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
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(360, 40, 321, 71));
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
        accel->setGeometry(QRect(360, 130, 151, 171));
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
        decel->setGeometry(QRect(530, 130, 151, 171));
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
        refillButton->setGeometry(QRect(320, 40, 31, 71));
        refillButton->setStyleSheet(QLatin1String("#refillButton{\n"
"background-color: red;\n"
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
        work_button = new QPushButton(tab);
        work_button->setObjectName(QStringLiteral("work_button"));
        work_button->setGeometry(QRect(40, 40, 231, 51));
        work_button->setStyleSheet(QLatin1String("#work_button{\n"
"background-color: rgb(37, 37, 37);\n"
"color: white;\n"
"font: 25 36pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#work_button:pressed{\n"
"background-color: rgb(27, 27, 27);\n"
"color: white;\n"
"font: 25 36pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}"));
        school_button = new QPushButton(tab);
        school_button->setObjectName(QStringLiteral("school_button"));
        school_button->setGeometry(QRect(40, 110, 231, 51));
        school_button->setStyleSheet(QLatin1String("#school_button{\n"
"background-color: rgb(37, 37, 37);\n"
"color: white;\n"
"font: 25 36pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#school_button:pressed{\n"
"background-color: rgb(27, 27, 27);\n"
"color: white;\n"
"font: 25 36pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}"));
        store_button = new QPushButton(tab);
        store_button->setObjectName(QStringLiteral("store_button"));
        store_button->setGeometry(QRect(40, 180, 231, 51));
        store_button->setStyleSheet(QLatin1String("#store_button{\n"
"background-color: rgb(37, 37, 37);\n"
"color: white;\n"
"font: 25 36pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#store_button:pressed{\n"
"background-color: rgb(27, 27, 27);\n"
"color: white;\n"
"font: 25 36pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}"));
        beach_button = new QPushButton(tab);
        beach_button->setObjectName(QStringLiteral("beach_button"));
        beach_button->setGeometry(QRect(40, 250, 231, 51));
        beach_button->setStyleSheet(QLatin1String("#beach_button{\n"
"background-color: rgb(37, 37, 37);\n"
"color: white;\n"
"font: 25 36pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#beach_button:pressed{\n"
"background-color: rgb(27, 27, 27);\n"
"color: white;\n"
"font: 25 36pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}"));
        nav_label = new QLabel(tab);
        nav_label->setObjectName(QStringLiteral("nav_label"));
        nav_label->setGeometry(QRect(40, 0, 231, 41));
        nav_label->setStyleSheet(QLatin1String("background-color: transparent;\n"
"color: white;\n"
"font: 25 20pt \"Avenir\";"));
        nav_label->setAlignment(Qt::AlignCenter);
        Controller->addTab(tab, QString());
        nav_label->raise();
        pushButton->raise();
        accel->raise();
        decel->raise();
        refillButton->raise();
        work_button->raise();
        school_button->raise();
        store_button->raise();
        beach_button->raise();
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
        dialblock->setGeometry(QRect(40, 30, 201, 51));
        dialblock->setStyleSheet(QLatin1String("border-radius: 15px;\n"
""));
        dial_display = new QLabel(tab_2);
        dial_display->setObjectName(QStringLiteral("dial_display"));
        dial_display->setGeometry(QRect(50, 40, 181, 41));
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
        call_label->setGeometry(QRect(70, 10, 71, 16));
        call_label->setStyleSheet(QLatin1String("color:white;\n"
"background-color: transparent;\n"
"font: 25 15pt \"Avenir\";"));
        call_time = new QLabel(tab_2);
        call_time->setObjectName(QStringLiteral("call_time"));
        call_time->setGeometry(QRect(150, 10, 71, 16));
        call_time->setStyleSheet(QLatin1String("color:white;\n"
"background-color: transparent;\n"
"font: 25 15pt \"Avenir\";"));
        add = new QPushButton(tab_2);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(300, 270, 101, 31));
        add->setStyleSheet(QLatin1String("#add{\n"
"background-color: rgb(37, 37, 37);\n"
"color: white;\n"
"font: 25 20pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#add:pressed{\n"
"background-color: rgb(27, 27, 27);\n"
"color: white;\n"
"font: 25 20pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}"));
        remove = new QPushButton(tab_2);
        remove->setObjectName(QStringLiteral("remove"));
        remove->setGeometry(QRect(410, 270, 101, 31));
        remove->setStyleSheet(QLatin1String("#remove{\n"
"background-color: rgb(37, 37, 37);\n"
"color: white;\n"
"font: 25 20pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#remove:pressed{\n"
"background-color: rgb(27, 27, 27);\n"
"color: white;\n"
"font: 25 20pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}"));
        contactList = new QListWidget(tab_2);
        contactList->setObjectName(QStringLiteral("contactList"));
        contactList->setGeometry(QRect(295, 20, 221, 241));
        contactList->setStyleSheet(QLatin1String("font: 25 38pt \"Avenir\";\n"
"color:white;"));
        contactError = new QLabel(tab_2);
        contactError->setObjectName(QStringLiteral("contactError"));
        contactError->setGeometry(QRect(300, 310, 211, 16));
        contactError->setStyleSheet(QLatin1String("color:white;\n"
"background-color: transparent;\n"
"font: 25 15pt \"Avenir\";"));
        contactError->setAlignment(Qt::AlignCenter);
        Controller->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tab_3->setStyleSheet(QLatin1String("#tab_3{\n"
"background-color: rgb(25, 25, 25);\n"
"}"));
        radio_fmlist = new QListWidget(tab_3);
        radio_fmlist->setObjectName(QStringLiteral("radio_fmlist"));
        radio_fmlist->setGeometry(QRect(330, 20, 191, 261));
        radio_fmlist->setStyleSheet(QLatin1String("font: 25 38pt \"Avenir\";\n"
"color:white;"));
        radio_fmlist->setTabKeyNavigation(false);
        radio_fmlist->setTextElideMode(Qt::ElideRight);
        radio_fmlist->setViewMode(QListView::ListMode);
        radio_slider = new QSlider(tab_3);
        radio_slider->setObjectName(QStringLiteral("radio_slider"));
        radio_slider->setGeometry(QRect(660, 10, 22, 261));
        radio_slider->setOrientation(Qt::Vertical);
        fm_button = new QPushButton(tab_3);
        fm_button->setObjectName(QStringLiteral("fm_button"));
        fm_button->setGeometry(QRect(40, 20, 61, 31));
        fm_button->setStyleSheet(QLatin1String("#fm_button{\n"
"background-color: rgb(37, 37, 37);\n"
"color: white;\n"
"font: 25 17pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#fm_button:pressed{\n"
"background-color: rgb(27, 27, 27);\n"
"color: white;\n"
"font: 25 17pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}"));
        am_button = new QPushButton(tab_3);
        am_button->setObjectName(QStringLiteral("am_button"));
        am_button->setGeometry(QRect(120, 20, 61, 31));
        am_button->setStyleSheet(QLatin1String("#am_button{\n"
"background-color: rgb(37, 37, 37);\n"
"color: white;\n"
"font: 25 17pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#am_button:pressed{\n"
"background-color: rgb(27, 27, 27);\n"
"color: white;\n"
"font: 25 17pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}"));
        add_2 = new QPushButton(tab_3);
        add_2->setObjectName(QStringLiteral("add_2"));
        add_2->setGeometry(QRect(340, 290, 81, 31));
        add_2->setStyleSheet(QLatin1String("#add_2{\n"
"background-color: rgb(37, 37, 37);\n"
"color: white;\n"
"font: 25 18pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#add_2:pressed{\n"
"background-color: rgb(27, 27, 27);\n"
"color: white;\n"
"font: 25 18pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}"));
        remove_2 = new QPushButton(tab_3);
        remove_2->setObjectName(QStringLiteral("remove_2"));
        remove_2->setGeometry(QRect(430, 290, 81, 31));
        remove_2->setStyleSheet(QLatin1String("#remove_2{\n"
"background-color: rgb(37, 37, 37);\n"
"color: white;\n"
"font: 25 18pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#remove_2:pressed{\n"
"background-color: rgb(27, 27, 27);\n"
"color: white;\n"
"font: 25 18pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}"));
        radio_amlist = new QListWidget(tab_3);
        radio_amlist->setObjectName(QStringLiteral("radio_amlist"));
        radio_amlist->setGeometry(QRect(330, 20, 191, 261));
        radio_amlist->setStyleSheet(QLatin1String("font: 25 38pt \"Avenir\";\n"
"color:white;"));
        radio_db = new QLabel(tab_3);
        radio_db->setObjectName(QStringLiteral("radio_db"));
        radio_db->setGeometry(QRect(650, 290, 41, 31));
        radio_db->setStyleSheet(QLatin1String("color: white;\n"
"background-color: transparent;\n"
"font: 25 20pt \"Avenir\";"));
        radio_db->setAlignment(Qt::AlignCenter);
        micBlock_3 = new QTextBrowser(tab_3);
        micBlock_3->setObjectName(QStringLiteral("micBlock_3"));
        micBlock_3->setGeometry(QRect(650, 290, 41, 31));
        micBlock_3->setStyleSheet(QLatin1String("border-radius: 10px;\n"
""));
        radio_volumelabel = new QLabel(tab_3);
        radio_volumelabel->setObjectName(QStringLiteral("radio_volumelabel"));
        radio_volumelabel->setGeometry(QRect(650, 270, 41, 16));
        radio_volumelabel->setStyleSheet(QLatin1String("color: white;\n"
"background-color: transparent;\n"
"font: 25 12pt \"Avenir\";"));
        radio_label = new QLabel(tab_3);
        radio_label->setObjectName(QStringLiteral("radio_label"));
        radio_label->setGeometry(QRect(40, 60, 221, 101));
        radio_label->setStyleSheet(QLatin1String("#radio_label{\n"
"background-color: rgb(37, 37, 37);\n"
"color: white;\n"
"font: 25 36pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}\n"
""));
        radio_label->setAlignment(Qt::AlignCenter);
        back_button = new QPushButton(tab_3);
        back_button->setObjectName(QStringLiteral("back_button"));
        back_button->setGeometry(QRect(50, 170, 91, 31));
        back_button->setStyleSheet(QLatin1String("#back_button{\n"
"background-color: rgb(37, 37, 37);\n"
"color: white;\n"
"font: 25 18pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#back_button:pressed{\n"
"background-color: rgb(27, 27, 27);\n"
"color: white;\n"
"font: 25 18pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}"));
        next_button = new QPushButton(tab_3);
        next_button->setObjectName(QStringLiteral("next_button"));
        next_button->setGeometry(QRect(160, 170, 91, 31));
        next_button->setStyleSheet(QLatin1String("#next_button{\n"
"background-color: rgb(37, 37, 37);\n"
"color: white;\n"
"font: 25 18pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#next_button:pressed{\n"
"background-color: rgb(27, 27, 27);\n"
"color: white;\n"
"font: 25 18pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}"));
        radio_toggle = new QPushButton(tab_3);
        radio_toggle->setObjectName(QStringLiteral("radio_toggle"));
        radio_toggle->setGeometry(QRect(200, 20, 61, 31));
        radio_toggle->setStyleSheet(QLatin1String("#radio_toggle{\n"
"background-color: rgb(0, 70, 122);\n"
"color: white;\n"
"font: 25 17pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#radio_toggle:pressed{\n"
"background-color: rgb(0, 58, 104);\n"
"color: white;\n"
"font: 25 17pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}"));
        Controller->addTab(tab_3, QString());
        radio_amlist->raise();
        radio_fmlist->raise();
        micBlock_3->raise();
        remove_2->raise();
        radio_slider->raise();
        fm_button->raise();
        am_button->raise();
        add_2->raise();
        radio_db->raise();
        radio_volumelabel->raise();
        radio_label->raise();
        back_button->raise();
        next_button->raise();
        radio_toggle->raise();
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tab_4->setStyleSheet(QLatin1String("#tab_4{\n"
"background-color: rgb(25, 25, 25);\n"
"}"));
        tableView = new QTableView(tab_4);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(80, 10, 561, 261));
        tableView->setStyleSheet(QLatin1String("color: rgb(0, 70, 122);\n"
"font-size: 12pt;"));
        Overall = new QPushButton(tab_4);
        Overall->setObjectName(QStringLiteral("Overall"));
        Overall->setGeometry(QRect(120, 280, 121, 32));
        Overall->setStyleSheet(QLatin1String("#Overall{\n"
"background-color: rgb(37, 37, 37);\n"
"color: white;\n"
"font: 25 20pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#Overall:pressed{\n"
"background-color: rgb(27, 27, 27);\n"
"color: white;\n"
"font: 25 20pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}"));
        Phone = new QPushButton(tab_4);
        Phone->setObjectName(QStringLiteral("Phone"));
        Phone->setGeometry(QRect(290, 280, 131, 32));
        Phone->setStyleSheet(QLatin1String("#Phone{\n"
"background-color: rgb(37, 37, 37);\n"
"color: white;\n"
"font: 25 20pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#Phone:pressed{\n"
"background-color: rgb(27, 27, 27);\n"
"color: white;\n"
"font: 25 20pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}"));
        Radio = new QPushButton(tab_4);
        Radio->setObjectName(QStringLiteral("Radio"));
        Radio->setGeometry(QRect(470, 280, 131, 32));
        Radio->setStyleSheet(QLatin1String("#Radio{\n"
"background-color: rgb(37, 37, 37);\n"
"color: white;\n"
"font: 25 20pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}\n"
"\n"
"#Radio:pressed{\n"
"background-color: rgb(27, 27, 27);\n"
"color: white;\n"
"font: 25 20pt \"Avenir\";\n"
"border-radius: 15px;\n"
"}"));
        Controller->addTab(tab_4, QString());
        setspeed_label = new QLabel(centralwidget);
        setspeed_label->setObjectName(QStringLiteral("setspeed_label"));
        setspeed_label->setGeometry(QRect(50, 40, 161, 91));
        setspeed_label->setStyleSheet(QLatin1String("color: white;\n"
"background-color: rgb(25, 25, 25);\n"
"font: 25 100pt \"Avenir\";;\n"
"font-style: italic;"));
        setspeed_label->setAlignment(Qt::AlignCenter);
        setspeed_label->setIndent(0);
        Speedometer = new QTextBrowser(centralwidget);
        Speedometer->setObjectName(QStringLiteral("Speedometer"));
        Speedometer->setGeometry(QRect(500, 30, 171, 101));
        Speedometer->setStyleSheet(QLatin1String("border-radius: 15px;\n"
"background-color: rgb(25, 25, 25);\n"
""));
        speed_label = new QLabel(centralwidget);
        speed_label->setObjectName(QStringLiteral("speed_label"));
        speed_label->setGeometry(QRect(120, 10, 51, 16));
        speed_label->setStyleSheet(QLatin1String("background-color: transparent;\n"
"color: rgb(255, 255, 255);\n"
"font: \"Avenir\";\n"
"\n"
""));
        setfuel_label = new QLabel(centralwidget);
        setfuel_label->setObjectName(QStringLiteral("setfuel_label"));
        setfuel_label->setGeometry(QRect(500, 40, 161, 91));
        setfuel_label->setStyleSheet(QLatin1String("color: white;\n"
"font: 25 100pt \"Avenir\";;\n"
"font-style: italic;\n"
"background-color: rgb(25, 25, 25);"));
        setfuel_label->setAlignment(Qt::AlignCenter);
        setfuel_label->setIndent(0);
        FuelGauge = new QTextBrowser(centralwidget);
        FuelGauge->setObjectName(QStringLiteral("FuelGauge"));
        FuelGauge->setGeometry(QRect(50, 30, 171, 101));
        FuelGauge->setStyleSheet(QLatin1String("border-radius: 15px;\n"
"background-color: rgb(25, 25, 25);\n"
""));
        fuel_label = new QLabel(centralwidget);
        fuel_label->setObjectName(QStringLiteral("fuel_label"));
        fuel_label->setGeometry(QRect(580, 10, 51, 16));
        fuel_label->setStyleSheet(QLatin1String("background-color: transparent;\n"
"color: rgb(255, 255, 255);\n"
"font: \"Avenir\";\n"
""));
        empty = new QLabel(centralwidget);
        empty->setObjectName(QStringLiteral("empty"));
        empty->setGeometry(QRect(160, 30, 61, 16));
        empty->setStyleSheet(QStringLiteral("background-color: rgb(25, 25, 25);"));
        empty_2 = new QLabel(centralwidget);
        empty_2->setObjectName(QStringLiteral("empty_2"));
        empty_2->setGeometry(QRect(610, 30, 61, 16));
        empty_2->setStyleSheet(QStringLiteral("background-color: rgb(25, 25, 25);"));
        Warning = new QLabel(centralwidget);
        Warning->setObjectName(QStringLiteral("Warning"));
        Warning->setGeometry(QRect(230, 50, 261, 51));
        Warning->setStyleSheet(QLatin1String("color: white;\n"
"background-color: transparent;\n"
"font: 25 25pt \"Avenir\""));
        Warning->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        empty_2->raise();
        FuelGauge->raise();
        Speedometer->raise();
        Controller->raise();
        setspeed_label->raise();
        speed_label->raise();
        setfuel_label->raise();
        fuel_label->raise();
        empty->raise();
        Warning->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 724, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        Controller->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "AIOCS", 0));
        pushButton->setText(QApplication::translate("MainWindow", "START", 0));
        accel->setText(QApplication::translate("MainWindow", "+", 0));
        decel->setText(QApplication::translate("MainWindow", "-", 0));
        refillButton->setText(QApplication::translate("MainWindow", "R", 0));
        work_button->setText(QApplication::translate("MainWindow", "work", 0));
        school_button->setText(QApplication::translate("MainWindow", "school", 0));
        store_button->setText(QApplication::translate("MainWindow", "store", 0));
        beach_button->setText(QApplication::translate("MainWindow", "cruise", 0));
        nav_label->setText(QString());
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
        volume_db->setText(QApplication::translate("MainWindow", "50", 0));
        mic_db->setText(QApplication::translate("MainWindow", "50", 0));
        call_label->setText(QString());
        call_time->setText(QString());
        add->setText(QApplication::translate("MainWindow", "add", 0));
        remove->setText(QApplication::translate("MainWindow", "remove", 0));
        contactError->setText(QString());
        Controller->setTabText(Controller->indexOf(tab_2), QApplication::translate("MainWindow", "Phone", 0));
        fm_button->setText(QApplication::translate("MainWindow", "FM", 0));
        am_button->setText(QApplication::translate("MainWindow", "AM", 0));
        add_2->setText(QApplication::translate("MainWindow", "add", 0));
        remove_2->setText(QApplication::translate("MainWindow", "remove", 0));
        radio_db->setText(QApplication::translate("MainWindow", "50", 0));
        radio_volumelabel->setText(QApplication::translate("MainWindow", "volume", 0));
        radio_label->setText(QApplication::translate("MainWindow", "---", 0));
        back_button->setText(QApplication::translate("MainWindow", "back", 0));
        next_button->setText(QApplication::translate("MainWindow", "next", 0));
        radio_toggle->setText(QApplication::translate("MainWindow", "ON", 0));
        Controller->setTabText(Controller->indexOf(tab_3), QApplication::translate("MainWindow", "Radio", 0));
        Overall->setText(QApplication::translate("MainWindow", "Overview", 0));
        Phone->setText(QApplication::translate("MainWindow", "Phone", 0));
        Radio->setText(QApplication::translate("MainWindow", "Radio", 0));
        Controller->setTabText(Controller->indexOf(tab_4), QApplication::translate("MainWindow", "Stats", 0));
        setspeed_label->setText(QApplication::translate("MainWindow", "0", 0));
        speed_label->setText(QApplication::translate("MainWindow", "SPEED", 0));
        setfuel_label->setText(QApplication::translate("MainWindow", "100", 0));
        fuel_label->setText(QApplication::translate("MainWindow", "FUEL", 0));
        empty->setText(QString());
        empty_2->setText(QString());
        Warning->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
