#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    time = new QTime();
    time->setHMS(0,0,0,0);
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(on_call_clicked()));
    ui->vol_slider->setValue(50);
    ui->mic_slider->setValue(50);
    ui->Controller->setCurrentIndex(0);
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
        close();
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

void MainWindow::on_refillButton_clicked()
{
    fuel = 100;
    ui->setfuel_label->setText(QString::number(fuel));
}

void MainWindow::on_one_clicked()
{
    if (count != 10){
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "1");
    }
}
void MainWindow::on_two_clicked()
{
    if (count != 10){
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "2");
    }
}
void MainWindow::on_three_clicked()
{
    if (count != 10){
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "3");
    }
}
void MainWindow::on_four_clicked()
{
    if (count != 10){
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "4");
    }
}
void MainWindow::on_five_clicked()
{
    if (count != 10){
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "5");
    }
}
void MainWindow::on_six_clicked()
{
    if (count != 10){
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "6");
    }
}
void MainWindow::on_seven_clicked()
{
    if (count != 10){
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "7");
    }
}
void MainWindow::on_eight_clicked()
{
    if (count != 10){
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "8");
    }
}
void MainWindow::on_nine_clicked()
{
    if (count != 10){
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "9");
    }
}
void MainWindow::on_zero_clicked()
{
    if (count != 10){
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "0");
    }
}

void MainWindow::on_X_clicked()
{
    ui->dial_display->setText("");
    timer->stop();
    count = 0;
    t = 0;
}

void MainWindow::on_call_clicked()
{
    if (count == 10){
        ui->call_label->setText("Call time: ");
        timer->start(1);
        t = t+1;
        QTime et;
        et = time->addMSecs(t);
            QString elapsedTime = et.toString("hh:mm:ss");
            ui->call_time->setText(elapsedTime);
    }
}

void MainWindow::on_vol_slider_actionTriggered(int action)
{
    ui->volume_db->setText(QString::number(ui->vol_slider->value()));
}

void MainWindow::on_mic_slider_actionTriggered(int action)
{
    ui->mic_db->setText(QString::number(ui->mic_slider->value()));
}
