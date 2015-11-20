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
    ui->radio_slider->setValue(50);

    ui->radio_amlist->hide();

    setFixedSize(size());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if(ui->pushButton->text() == "START"){
        ui->setfuel_label->setText(QString::number(fuel));
        ui->pushButton->setText("STOP");
    }
    else
        close();
}

void MainWindow::on_accel_pressed()
{
    int temp = speed;
    //ui->accel->setAutoRepeat(true);
    ui->accel->setAutoRepeatInterval(100);
    if(ui->pushButton->text() == "STOP" && speed != 180){
            temp += 1;
            ui->setspeed_label->setText(QString::number(temp));
            ui->accel->setAutoRepeat(true);
            //ui->accel->setAutoRepeatInterval(100);
    }
    speed = temp;
}

void MainWindow::on_decel_pressed()
{
    int temp = speed;
    //ui->decel->setAutoRepeat(true);
    ui->decel->setAutoRepeatInterval(100);
    if(ui->pushButton->text() == "STOP" && speed != 0){
        temp -= 1;
        ui->setspeed_label->setText(QString::number(temp));
        ui->decel->setAutoRepeat(true);
        //ui->decel->setAutoRepeatInterval(100);
    }
    speed = temp;
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
        ui->call_label->setText("");
        ui->call_time->setText("");
        ui->contactError->setText("");
    }
}
void MainWindow::on_two_clicked()
{
    if (count != 10){
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "2");
        ui->call_label->setText("");
        ui->call_time->setText("");
        ui->contactError->setText("");
    }
}
void MainWindow::on_three_clicked()
{
    if (count != 10){
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "3");
        ui->call_label->setText("");
        ui->call_time->setText("");
        ui->contactError->setText("");
    }
}
void MainWindow::on_four_clicked()
{
    if (count != 10){
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "4");
        ui->call_label->setText("");
        ui->call_time->setText("");
        ui->contactError->setText("");
    }
}
void MainWindow::on_five_clicked()
{
    if (count != 10){
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "5");
        ui->call_label->setText("");
        ui->call_time->setText("");
        ui->contactError->setText("");
    }
}
void MainWindow::on_six_clicked()
{
    if (count != 10){
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "6");
        ui->call_label->setText("");
        ui->call_time->setText("");
        ui->contactError->setText("");
    }
}
void MainWindow::on_seven_clicked()
{
    if (count != 10){
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "7");
        ui->call_label->setText("");
        ui->call_time->setText("");
        ui->contactError->setText("");
    }
}
void MainWindow::on_eight_clicked()
{
    if (count != 10){
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "8");
        ui->call_label->setText("");
        ui->call_time->setText("");
        ui->contactError->setText("");
    }
}
void MainWindow::on_nine_clicked()
{
    if (count != 10){
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "9");
        ui->call_label->setText("");
        ui->call_time->setText("");
        ui->contactError->setText("");
    }
}
void MainWindow::on_zero_clicked()
{
    if (count != 10){
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "0");
        ui->call_label->setText("");
        ui->call_time->setText("");
        ui->contactError->setText("");
    }
}

void MainWindow::on_X_clicked()
{
    t = 0;
    count = 0;
    ui->dial_display->setText("");
    timer->stop();
}

void MainWindow::on_call_clicked()
{
    if (count == 10){
        ui->call_label->setText("Call time: ");

        timer->start(1);
        t = t + 1;

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

void MainWindow::on_add_clicked()
{
    bool found = false;

    QString newNumber = ui->dial_display->text();

    for(int i = 0; i < ui->contactList->count(); i++){
        if (ui->contactList->item(i)->text() == newNumber){
            found = true;
            ui->contactError->setText("Number already exists");
            break;
        }
    }
    if (!found){
        if (count == 10){
            ui->contactList->addItem(newNumber);
            ui->contactError->setText("");
        }
    }
}

void MainWindow::on_contactList_activated(const QModelIndex &index)
{
    QListWidgetItem *num = ui->contactList->currentItem();
    ui->dial_display->setText(num->text());
    count = 10;
}

void MainWindow::on_remove_clicked()
{
    ui->contactList->takeItem(ui->contactList->row(ui->contactList->currentItem()));
}

void MainWindow::on_fm_button_clicked()
{
    ui->radio_amlist->hide();
    ui->radio_fmlist->show();
}

void MainWindow::on_am_button_clicked()
{
    ui->radio_amlist->show();
    ui->radio_fmlist->hide();
}

void MainWindow::on_radio_slider_actionTriggered(int action)
{
    ui->radio_db->setText(QString::number(ui->radio_slider->value()));
}
