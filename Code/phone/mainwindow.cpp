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


void MainWindow::on_one_clicked()
{
    ui->label_2->setText(ui->label_2->text() + "1");
}
void MainWindow::on_two_clicked()
{
ui->label_2->setText(ui->label_2->text() + "2");
}
void MainWindow::on_three_clicked()
{
ui->label_2->setText(ui->label_2->text() + "3");
}
void MainWindow::on_four_clicked()
{
    ui->label_2->setText(ui->label_2->text() + "4");
}
void MainWindow::on_five_clicked()
{
ui->label_2->setText(ui->label_2->text() + "5");
}
void MainWindow::on_six_clicked(){

    ui->label_2->setText(ui->label_2->text() + "6");
}
void MainWindow::on_seven_clicked()
{
    ui->label_2->setText(ui->label_2->text() + "7");
}
void MainWindow::on_eight_clicked()
{
ui->label_2->setText(ui->label_2->text() + "8");
}
void MainWindow::on_nine_clicked()
{
    ui->label_2->setText(ui->label_2->text() + "9");
}
void MainWindow::on_zero_clicked()
{
    ui->label_2->setText(ui->label_2->text() + "0");
}
