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
    explicit Login(QWidget *parent = 0);
    ~Login();

private slots:
    void on_pushButton_clicked();

public slots:
      void openMainWindow();

private:
    Ui::Login *ui;
    QSqlDatabase db;
    MainWindow *newMainWindow;
};

#endif // LOGIN_H
