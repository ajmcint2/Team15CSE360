#include "login.h"
#include "ui_login.h"
#include <QtSql>
#include <QSqlDatabase>
#include <sqlite3.h>

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/Users/alexmcintosh/Team15CSE360/Code/Database/AIOCS.sqlite");
    if(db.open()){
        ui->status->setText("[+] Connected");
    }
    else{
        ui->status->setText("[+] Error establishing connection");
    }
}

Login::~Login()
{
    delete ui;
    db.close();
}

void Login::on_pushButton_clicked()
{
    QString username, password;
    username = ui->lineEdit->text();
    password = ui->lineEdit_2->text();

    if (!db.open()){
        qDebug()<<"Fail to open database";
        return;
    }

    QSqlQuery qry;
    if (qry.exec("SELECT * FROM users WHERE username ='" + username +
                 "' AND password ='" + password + "'")){
        int count= 0;
        while (qry.next()){
            count++;
        }
        if (count > 0){
            ui->status->setText("Correct Login");
        }
        else {
            ui->status->setText("Incorrect Login");
        }
    }
    else {
         ui->status->setText("[+] Error establishing connection");
    }
}
