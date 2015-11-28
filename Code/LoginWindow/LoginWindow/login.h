#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QtDebug>
#include <QFileInfo>
#include <QSql>
#include "mainwindow.h"

namespace Ui {
class Login;
}

class Login : public QMainWindow
{
    Q_OBJECT

public:
    QSqlDatabase db;
    QString username;

    bool openDb(){
        db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("/Users/alexmcintosh/Team15CSE360/Code/Database/AIOCS.sqlite");
        if(db.open()){
            qDebug() << ("Please enter key");
            return true;
        }
        else{
            qDebug() << ("Failed to open database");
            return false;
        }
    }
    void dbClose(){
        db.close();
        db.removeDatabase(QSqlDatabase::defaultConnection);
    }

public:
    explicit Login(QWidget *parent = 0);
    ~Login();

private slots:
    void on_pushButton_clicked();

public slots:
      void openMainWindow();

private:
    Ui::Login *ui;
    //QMainWindow *newMainWindow;
};

#endif // LOGIN_H
