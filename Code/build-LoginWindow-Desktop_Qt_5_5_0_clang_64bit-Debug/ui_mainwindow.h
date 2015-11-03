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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *Login;
    QLineEdit *lineEdit_username;
    QLineEdit *lineEdit2_password;
    QLabel *label;
    QLabel *label_2;
    QFrame *frame;
    QMenuBar *menuBar;
    QMenu *menuAIOCS;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral("color: rgb(15, 36, 77);"));
        Login = new QPushButton(centralWidget);
        Login->setObjectName(QStringLiteral("Login"));
        Login->setGeometry(QRect(140, 170, 113, 32));
        Login->setStyleSheet(QLatin1String("font: 25 13pt \"Avenir\";\n"
"background: blue;"));
        lineEdit_username = new QLineEdit(centralWidget);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));
        lineEdit_username->setGeometry(QRect(130, 80, 141, 21));
        lineEdit2_password = new QLineEdit(centralWidget);
        lineEdit2_password->setObjectName(QStringLiteral("lineEdit2_password"));
        lineEdit2_password->setGeometry(QRect(130, 120, 141, 21));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 100, 71, 16));
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255)"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 140, 59, 16));
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255)"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 421, 261));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(27, 37, 51)"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        MainWindow->setCentralWidget(centralWidget);
        frame->raise();
        Login->raise();
        lineEdit_username->raise();
        lineEdit2_password->raise();
        label->raise();
        label_2->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        menuAIOCS = new QMenu(menuBar);
        menuAIOCS->setObjectName(QStringLiteral("menuAIOCS"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuAIOCS->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "AIOCS", 0));
        Login->setText(QApplication::translate("MainWindow", "Login", 0));
        label->setText(QApplication::translate("MainWindow", "Username", 0));
        label_2->setText(QApplication::translate("MainWindow", "Password", 0));
        menuAIOCS->setTitle(QApplication::translate("MainWindow", "AIOCS", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
