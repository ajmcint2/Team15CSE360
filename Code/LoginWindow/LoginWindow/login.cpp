#include "login.h"
#include "ui_login.h"
#include "mainwindow.h"
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);

    if(openDb()){
        ui->status->setText("Please enter key");
    }
}

Login::~Login()
{
    delete ui;
}


void Login::openMainWindow()
{
    MainWindow *newMainWindow = new MainWindow();
    //MainWindow n = new MainWindow();
    newMainWindow->passUser(username);
    newMainWindow->show();
}


void Login::on_pushButton_clicked()
{
    QString password;
    username = ui->lineEdit->text();
    password = ui->lineEdit_2->text();

    openDb();
    QSqlQuery qry;
    qry.prepare("SELECT * FROM Drivers WHERE username ='" + username +
                "' AND password ='" + password + "'");
    if (qry.exec()){
        int count= 0;
        while (qry.next()){
            count++;
        }
        if (count > 0){
            ui->status->setText("Correct Login");
            dbClose();
            this->hide();
            openMainWindow();
        }
        else {
            ui->status->setText("Incorrect Login");
        }
    }
    else {
         ui->status->setText("Error connecting to database");
    }
}
