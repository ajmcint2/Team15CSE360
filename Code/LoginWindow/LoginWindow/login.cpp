#include "login.h"
//#include "mainwindow.h"
#include "ui_login.h"
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    //connect(ui->pushButton, SIGNAL(click()), this, SLOT(openMainWindow()));
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("/Users/alexmcintosh/Team15CSE360/Code/Database/AIOCS.sqlite");
    if(db.open()){
        ui->status->setText("Please enter key");
    }
}

Login::~Login()
{
    delete ui;
}


void Login::openMainWindow()
{
    newMainWindow = new MainWindow();

    newMainWindow->show();
}


void Login::on_pushButton_clicked()
{
    QString username, password;
    username = ui->lineEdit->text();
    password = ui->lineEdit_2->text();

    QSqlQuery qry;
    if (qry.exec("SELECT * FROM users WHERE username ='" + username +
                 "' AND password ='" + password + "'")){
        int count= 0;
        while (qry.next()){
            count++;
        }
        if (count > 0){
            ui->status->setText("Correct Login");
            this->hide();
            openMainWindow();
        }
        else {
            ui->status->setText("Incorrect Login");
        }
    }
    else {
         ui->status->setText("Uh oh, error connecting to database");
    }
}
