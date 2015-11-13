#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if(ui->pushButton->text() == "START")
        ui->pushButton->setText("STOP");
    else
        ui->pushButton->setText("START");
        speed = 0;
        ui->setspeed_label->setText(QString::number(speed));
}

void MainWindow::on_accel_clicked()
{
    if(ui->pushButton->text() == "STOP" && speed != 180)
    speed += 5;
    ui->setspeed_label->setText(QString::number(speed));
}

void MainWindow::on_decel_clicked()
{
    if(ui->pushButton->text() == "STOP" && speed != 0)
    speed -= 5;
    ui->setspeed_label->setText(QString::number(speed));
}
