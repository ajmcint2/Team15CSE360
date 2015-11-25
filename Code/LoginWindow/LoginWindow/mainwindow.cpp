#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    time = new QTime(); //intialize timer for call
    time->setHMS(0,0,0,0);
    timer = new QTimer(this);

    connect(timer, SIGNAL(timeout()), this, SLOT(on_call_clicked()));   //set up signal to start timer

    ui->vol_slider->setValue(50);   //set sliders at value
    ui->mic_slider->setValue(50);
    ui->radio_slider->setValue(0);
    ui->Controller->setCurrentIndex(0); //start GUI at Drive tab

    ui->radio_amlist->hide();   //hide am timer so that fm_list is displayed upon startup

    setFixedSize(size());   //restricts resize
}

MainWindow::~MainWindow()
{
    delete ui;
}

//starts engine or turns off car
void MainWindow::on_pushButton_clicked()
{
    //change text after starting car to stop
    if(ui->pushButton->text() == "START"){
        ui->setfuel_label->setText(QString::number(fuel));
        ui->pushButton->setText("STOP");
    }
    else{   //if the car is stopped, close application and save data
        if (speed == 0){
            close();    //close application after stopping car
        }
    }
}

//increases speeed from 0 mph to max 180 mph while button is pressed
void MainWindow::on_accel_pressed()
{
    int temp = speed;
    ui->accel->setAutoRepeatInterval(100);
    if(ui->pushButton->text() == "STOP" && speed != 180){
            temp += 1;  //increase speed while button is pressed
            ui->setspeed_label->setText(QString::number(temp));
            ui->accel->setAutoRepeat(true); //checks of button is held
    }
    speed = temp;   //set speed to temp
}

//decreases speed while button is held to min speed of 0
void MainWindow::on_decel_pressed()
{
    int temp = speed;
    ui->decel->setAutoRepeatInterval(100);
    if(ui->pushButton->text() == "STOP" && speed != 0){
        temp -= 1;
        ui->setspeed_label->setText(QString::number(temp));
        ui->decel->setAutoRepeat(true);
    }
    speed = temp;
}

//refills fuel when car is stopped
void MainWindow::on_refillButton_clicked()
{
    if (speed == 0){
        fuel = 100;
        ui->setfuel_label->setText(QString::number(fuel));
    }
}

//adds 1 to number to call phone display
void MainWindow::on_one_clicked()
{
    if (count != 10){   //if display is not full add to display
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "1");
        ui->call_label->setText("");
        ui->call_time->setText("");
        ui->contactError->setText("");
    }
}
//adds 2 to number to call phone display
void MainWindow::on_two_clicked()
{
    if (count != 10){   //if display is not full add to display
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "2");
        ui->call_label->setText("");
        ui->call_time->setText("");
        ui->contactError->setText("");
    }
}
//adds 3 to number to call phone display
void MainWindow::on_three_clicked()
{
    if (count != 10){   //if display is not full add to display
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "3");
        ui->call_label->setText("");
        ui->call_time->setText("");
        ui->contactError->setText("");
    }
}
//adds 4 to number to call phone display
void MainWindow::on_four_clicked()
{
    if (count != 10){   //if display is not full add to display
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "4");
        ui->call_label->setText("");
        ui->call_time->setText("");
        ui->contactError->setText("");
    }
}
//adds 5 to number to call phone display
void MainWindow::on_five_clicked()
{
    if (count != 10){   //if display is not full add to display
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "5");
        ui->call_label->setText("");
        ui->call_time->setText("");
        ui->contactError->setText("");
    }
}
//adds 6 to number to call phone display
void MainWindow::on_six_clicked()
{
    if (count != 10){   //if display is not full add to display
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "6");
        ui->call_label->setText("");
        ui->call_time->setText("");
        ui->contactError->setText("");
    }
}
//adds 7 to number to call phone display
void MainWindow::on_seven_clicked()
{
    if (count != 10){   //if display is not full add to display
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "7");
        ui->call_label->setText("");
        ui->call_time->setText("");
        ui->contactError->setText("");
    }
}
//adds 8 to number to call phone display
void MainWindow::on_eight_clicked()
{
    if (count != 10){   //if display is not full add to display
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "8");
        ui->call_label->setText("");
        ui->call_time->setText("");
        ui->contactError->setText("");
    }
}
//adds 9 to number to call phone display
void MainWindow::on_nine_clicked()
{
    if (count != 10){   //if display is not full add to display
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "9");
        ui->call_label->setText("");
        ui->call_time->setText("");
        ui->contactError->setText("");
    }
}
//adds 0 to number to call phone display
void MainWindow::on_zero_clicked()
{
    if (count != 10){   //if display is not full add to display
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "0");
        ui->call_label->setText("");
        ui->call_time->setText("");
        ui->contactError->setText("");
    }
}

//end phone call
void MainWindow::on_X_clicked()
{
    t = 0;
    count = 0;
    ui->dial_display->setText("");  //clear display
    timer->stop();  //stop timer
    rToggle = false;    //allow radio to be toggled to on
}

//starts phone call
void MainWindow::on_call_clicked()
{
    if (count == 10){   //check if there are enough numbers inorder to call
        //stops radio from playing during phone call
        rToggle = true;
        ui->radio_toggle->setText("ON");
        ui->radio_slider->setValue(0);

        //shows call time
        ui->call_label->setText("Call time: ");

        //starts timer
        timer->start(1);
        t = t + 1;
        QTime ct;
        ct = time->addMSecs(t);
            QString elapsedTime = ct.toString("hh:mm:ss");  //display time of call
            ui->call_time->setText(elapsedTime);
    }
}

//set new volume slider value
void MainWindow::on_vol_slider_actionTriggered(int action)
{
    ui->volume_db->setText(QString::number(ui->vol_slider->value()));
}

//set new radio slider value
void MainWindow::on_mic_slider_actionTriggered(int action)
{
    ui->mic_db->setText(QString::number(ui->mic_slider->value()));
}

//add new number to contact list
void MainWindow::on_add_clicked()
{
    bool found = false;

    QString newNumber = ui->dial_display->text();   //pull number from phone display

    //search list if number to add already exists, if not add, else display error
    for(int i = 0; i < ui->contactList->count(); i++){  //iterate through conatact list
        if (ui->contactList->item(i)->text() == newNumber){
            found = true;
            ui->contactError->setText("Number already exists"); //display error
            break;
        }
    }
    if (!found){    //add newnumber if it doesnt exist in list
        if (count == 10){
            ui->contactList->addItem(newNumber);
            ui->contactError->setText("");
        }
    }
}

//display contact list
void MainWindow::on_contactList_activated(const QModelIndex &index)
{
    QListWidgetItem *num = ui->contactList->currentItem();
    ui->dial_display->setText(num->text()); //add number from contact list to phone display
    count = 10;
}

//remove number from contact list
void MainWindow::on_remove_clicked()
{
    ui->contactList->takeItem(ui->contactList->row(ui->contactList->currentItem()));
}

//toggle fm station list
void MainWindow::on_fm_button_clicked()
{
    listener.fm = true; //user is listening to fm
    listener.am = false;

    ui->radio_amlist->hide();   //hide am station list
    ui->radio_fmlist->show();   //display fm station list

    if(!listener.fmStations.empty()){
        ui->radio_label->setText(QString::number(listener.fmStations[listener.fmcount]));
    }
}

//toggle am station
void MainWindow::on_am_button_clicked()
{
    listener.fm = false; //user is listening to am
    listener.am = true;

    ui->radio_amlist->show();   //display am list
    ui->radio_fmlist->hide();   //hide fm list

    if(!listener.amStations.empty()){
        ui->radio_label->setText(QString::number(listener.amStations[listener.amcount]));
    }
}

//set radio slider value
void MainWindow::on_radio_slider_actionTriggered(int action)
{
    ui->radio_db->setText(QString::number(ui->radio_slider->value()));
}

//turns on or off radio
void MainWindow::on_radio_toggle_clicked()
{
    while (rToggle == false){   //if not in phone call
        if (ui->radio_toggle->text() == "ON"){
            ui->radio_toggle->setText("OFF");
            ui->radio_slider->setValue(50);
            if (!listener.fmStations.empty()){
                ui->radio_label->setText(QString::number(listener.fmStations.front()));
            }
            break;
        }
        else {
            ui->radio_toggle->setText("ON");
            ui->radio_label->setText("---");
            ui->radio_slider->setValue(0);
            break;
        }
    }
}

void MainWindow::on_work_button_clicked()
{
    for (int i = 0; i < 13; i++){
        listener.fmStations.push_back(user.stat.fwStations[i]); //populate fm stations
    }
    for (int i = 0; i < 8; i++){
        listener.amStations.push_back(user.stat.awStations[i]); //populate fm stations
    }
    if (ui->radio_toggle->text() == "OFF"){
        ui->radio_label->setText(QString::number(listener.fmStations[listener.fmcount]));
    }
    ui->work_button->setEnabled(false);
    ui->school_button->setEnabled(false);
    ui->beach_button->setEnabled(false);
    ui->store_button->setEnabled(false);
    ui->nav_label->setText("heading to: " + ui->work_button->text());
}

void MainWindow::on_school_button_clicked()
{
    for (int i = 0; i < 9; i++){
        listener.fmStations.push_back(user.stat.fsStations[i]); //populate fm stations
    }
    for (int i = 0; i < 4; i++){
        listener.amStations.push_back(user.stat.asStations[i]); //populate fm stations
    }
    if (ui->radio_toggle->text() == "OFF"){
        ui->radio_label->setText(QString::number(listener.fmStations[listener.fmcount]));
    }
    ui->work_button->setEnabled(false);
    ui->school_button->setEnabled(false);
    ui->beach_button->setEnabled(false);
    ui->store_button->setEnabled(false);
    ui->nav_label->setText("heading to: " + ui->school_button->text());
}

void MainWindow::on_store_button_clicked()
{
    for (int i = 0; i < 8; i++){
        listener.fmStations.push_back(user.stat.frStations[i]); //populate fm stations
    }
    for (int i = 0; i < 8; i++){
        listener.amStations.push_back(user.stat.arStations[i]); //populate fm stations
    }
    if (ui->radio_toggle->text() == "OFF"){
        ui->radio_label->setText(QString::number(listener.fmStations[listener.fmcount]));
    }
    ui->work_button->setEnabled(false);
    ui->school_button->setEnabled(false);
    ui->beach_button->setEnabled(false);
    ui->store_button->setEnabled(false);
    ui->nav_label->setText("heading to: " + ui->store_button->text());
}

void MainWindow::on_beach_button_clicked()
{
    for (int i = 0; i < 14; i++){
        listener.fmStations.push_back(user.stat.fbStations[i]); //populate fm stations
    }
    for (int i = 0; i < 11; i++){
        listener.amStations.push_back(user.stat.abStations[i]); //populate fm stations
    }
    if (ui->radio_toggle->text() == "OFF"){
        ui->radio_label->setText(QString::number(listener.fmStations[listener.fmcount]));
    }
    ui->work_button->setEnabled(false);
    ui->school_button->setEnabled(false);
    ui->beach_button->setEnabled(false);
    ui->store_button->setEnabled(false);
    ui->nav_label->setText("heading to: " + ui->beach_button->text());
}

void MainWindow::on_next_button_clicked()
{
    while(ui->radio_toggle->text() == "OFF" && !listener.fmStations.empty()){
        //check if reached end of vector
       //if listening to fm or am tune to next station
       if (listener.fm){
           if (listener.fmcount == listener.fmStations.size()-1){
               listener.fmcount = -1;
           }
           listener.fmcount++;
           ui->radio_label->setText(QString::number(listener.fmStations[listener.fmcount]));
       }
       else{
           if (listener.amcount == listener.amStations.size()-1){
               listener.amcount = -1;
           }
           listener.amcount++;
           ui->radio_label->setText(QString::number(listener.amStations[listener.amcount]));
       }
       break;
    }
}

void MainWindow::on_back_button_clicked()
{
    while(ui->radio_toggle->text() == "OFF" && !listener.fmStations.empty()){
        //check if reached end of vector
       if (listener.fmcount == 0){
           listener.fmcount = listener.fmStations.size();
       }

       //if listening to fm or am tune to next station
       if (listener.fm){
           listener.fmcount--;
           ui->radio_label->setText(QString::number(listener.fmStations[listener.fmcount]));
       }
       else{
           if (listener.amcount == 0){
               listener.amcount = listener.amStations.size();
           }
           listener.amcount--;
           ui->radio_label->setText(QString::number(listener.amStations[listener.amcount]));
       }
       break;
    }
}

void MainWindow::on_add_2_clicked()
{
    bool found = false;

    QString newNumber = ui->radio_label->text();   //pull number from radio display
    while (ui->radio_toggle->text() == "OFF"){
        if(listener.fm){
            //search list if number to add already exists
            for(int i = 0; i < ui->radio_fmlist->count(); i++){  //iterate through conatact list
                if (ui->radio_fmlist->item(i)->text() == newNumber){
                    found = true;
                    break;
                }
            }
            if (!found){    //add newnumber if it doesnt exist in list
                    ui->radio_fmlist->addItem(newNumber);
            }
        }
        else{
            for(int i = 0; i < ui->radio_amlist->count(); i++){  //iterate through conatact list
                if (ui->radio_amlist->item(i)->text() == newNumber){
                    found = true;
                    break;
                }
            }
            if (!found){    //add newnumber if it doesnt exist in list
                    ui->radio_amlist->addItem(newNumber);
            }
        }
        break;
    }
}

void MainWindow::on_remove_2_clicked()
{
    if(listener.fm){
        ui->radio_fmlist->takeItem(ui->radio_fmlist->row(ui->radio_fmlist->currentItem()));
    }
    else{
         ui->radio_amlist->takeItem(ui->radio_amlist->row(ui->radio_amlist->currentItem()));
    }
}

void MainWindow::on_radio_amlist_activated(const QModelIndex &index)
{
        QListWidgetItem *num = ui->radio_amlist->currentItem();
        ui->radio_label->setText(num->text()); //add number from radio am list to radio display
}

void MainWindow::on_radio_fmlist_activated(const QModelIndex &index)
{
        QListWidgetItem *num = ui->radio_fmlist->currentItem();
        ui->radio_label->setText(num->text()); //add number from fm list to radio display
}
