/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QWidget *centralWidget;
    QLabel *label_username;
    QLabel *label_password;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLabel *welcome_label;
    QLabel *status;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QStringLiteral("Login"));
        Login->resize(400, 288);
        centralWidget = new QWidget(Login);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral("background: rgb(25, 25, 25);"));
        label_username = new QLabel(centralWidget);
        label_username->setObjectName(QStringLiteral("label_username"));
        label_username->setGeometry(QRect(100, 80, 81, 25));
        label_username->setStyleSheet(QLatin1String("color: white;\n"
"font: 25 18pt \"Avenir\";"));
        label_password = new QLabel(centralWidget);
        label_password->setObjectName(QStringLiteral("label_password"));
        label_password->setGeometry(QRect(100, 110, 74, 25));
        label_password->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 25 18pt \"Avenir\";"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(190, 80, 122, 21));
        lineEdit->setStyleSheet(QLatin1String("background: white;\n"
"border-radius: 20px;\n"
""));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(190, 110, 121, 21));
        lineEdit_2->setStyleSheet(QLatin1String("background: white;\n"
"border-radius: 20px;\n"
""));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 160, 361, 71));
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
        welcome_label = new QLabel(centralWidget);
        welcome_label->setObjectName(QStringLiteral("welcome_label"));
        welcome_label->setGeometry(QRect(150, 20, 111, 21));
        welcome_label->setStyleSheet(QLatin1String("color: white;\n"
"font: 25 25pt \"Avenir\";"));
        status = new QLabel(centralWidget);
        status->setObjectName(QStringLiteral("status"));
        status->setGeometry(QRect(90, 40, 221, 20));
        status->setStyleSheet(QLatin1String("color: white;\n"
"background-color: transparent;\n"
"font: 25 12pt \"Avenir\";"));
        status->setAlignment(Qt::AlignCenter);
        Login->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Login);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        Login->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Login);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Login->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Login);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Login->setStatusBar(statusBar);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QMainWindow *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "AIOCS", 0));
        label_username->setText(QApplication::translate("Login", "Username", 0));
        label_password->setText(QApplication::translate("Login", "Password", 0));
        pushButton->setText(QApplication::translate("Login", "login", 0));
        welcome_label->setText(QApplication::translate("Login", "Welcome", 0));
        status->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
