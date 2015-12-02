#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QSqlQuery>
#include<QSqlQueryModel>
#include <QSqlRecord>
#include <QHeaderView>
#include <QVariant>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Login connection;

    if(!connection.openDb()){
        //Database is not open, and displays error
        ui->Warning->setText("Error. Data will not be saved");
    }

    time = new QTime(); //intialize time for call
    time->setHMS(0,0,0,0);  //format time
    timer = new QTimer(this);   //create timer instance

    connect(timer, SIGNAL(timeout()), this, SLOT(on_call_clicked()));   //set up signal to start timer

    timer2 = new QTimer(this);
    connect(timer2, SIGNAL(timeout()), this, SLOT(update()));
    timer3 = new QTimer(this);
    connect(timer3, SIGNAL(timeout()), this, SLOT(empty()));


    //set sliders at value
    ui->vol_slider->setValue(50);
    ui->mic_slider->setValue(50);
    ui->radio_slider->setValue(0);

    //start GUI at Drive tab
    ui->Controller->setCurrentIndex(0);

    ui->radio_amlist->hide();   //hide am timer so that fm_list is displayed upon startup

    //disable buttons
    ui->pushButton->setDisabled(true);
    ui->accel->setDisabled(true);
    ui->decel->setDisabled(true);

    //set label on launch
    ui->nav_label->setText("Lets go somewhere:");

    setFuel();
    setFixedSize(size());   //restricts resize
}

MainWindow::~MainWindow()
{
    delete ui;
}

/*
 * Passes username into MainWindow
 */
void MainWindow::passUser(const QString &name){
    user_id = name;
    ui->Warning->setText("Hello " + name);
}

/*
 * Updates fuel
 */
void MainWindow::update(){
    if (fuel == 0){
        timer3->start(100);
        empty();
        ui->setspeed_label->setText(QString::number(speed));
    }
    else{
        fuel--; //decrease fuel
        ui->setfuel_label->setText(QString::number(fuel));  //set fuel label
        user.pFuel++;   //increase users used fuel
    }
}

/*
 * Decrease speed if fuel is 0
 */
void MainWindow::empty(){
    if (speed != 0){
        speed--;
        ui->setspeed_label->setText(QString::number(speed));
    }
    else{
        timer3->stop();
    }
}

/*
 * Populates stations for fm and am frequencies
 */
void MainWindow::Drive::populateRadioStation(Drive user, Phone listener){
    for (int i = 0; i < 13; i++){
        listener.fmStations.push_back(user.stat.fwStations[i]); //populate fm stations
    }
    for (int i = 0; i < 8; i++){
        listener.amStations.push_back(user.stat.awStations[i]); //populate fm stations
    }
}


/*
 * Populates driver saved contact list
 */
void MainWindow::populate(){
    Login connection;
    connection.openDb();

    QSqlQuery qry;
    qry.prepare("SELECT phone_number FROM ContactList WHERE user_id ='"+user_id+"'");   //execute sql
    qry.exec();
    while(qry.next()){
        //add number into contact list
        QString number = qry.value(0).toString();
        ui->contactList->addItem(number);
    }
    connection.dbClose();   //close db
}

/*
 * Populates saved fm stations
 */
void MainWindow::popFm(){
    Login connection;
    connection.openDb();

    QSqlQuery qry;
    qry.prepare("SELECT station_name FROM StationFMList WHERE user_id ='" +user_id+"'");
    qry.exec();
    while(qry.next()){
        //add station into list
        QString station = qry.value(0).toString();
        ui->radio_fmlist->addItem(station);
    }
    connection.dbClose();
}

/*
 * Populates saved am stations
 */
void MainWindow::popAm(){
    Login connection;
    connection.openDb();

    QSqlQuery qry;
    qry.prepare("SELECT station_name FROM StationAMList WHERE user_id ='" + user_id +"'");
    qry.exec();
    while(qry.next()){
        //add station into list
        QString station = qry.value(0).toString();
        ui->radio_amlist->addItem(station);
    }
    connection.dbClose();
}

/*
 * Sets fuel based on last driver
 */
void MainWindow::setFuel(){
    Login connection;
    connection.openDb();

    QSqlQuery qry;
    qry.prepare("SELECT fuel_left FROM Stats");
    qry.exec();
    while(qry.next()){
        //set fuel
        fuel = qry.value(0).toInt();
        ui->setfuel_label->setText(QString::number(fuel));
    }
    connection.dbClose();
}

/*
 * Calculates average speed of trip
 */
void MainWindow::calcAverage(){
    int temp = 0;

    for(int i = 0; i < user.allSpeed.size(); i++){
        //add all speeds together
        temp += user.allSpeed[i];
    }

    all.trip.avgSpeed = temp/user.allSpeed.size();  //average speed
}

/*
 * Calculates max speed of trip
 */
void MainWindow::calcMax(){
    int max = 0;

    for(int i = 0; i < user.allSpeed.size(); i++){
        //search vector for max speed
        if (max < user.allSpeed[i]){
            max = user.allSpeed[i];
        }
    }
    all.trip.maxSpeed = max;
}

/*
 * Starts car
 */
void MainWindow::on_pushButton_clicked()
{
    if(ui->pushButton->text() == "START"){
        //fill saved info of driver
        populate();
        popFm();
        popAm();

        ui->setfuel_label->setText(QString::number(fuel));  //set fuel
        ui->pushButton->setText("STOP");    //toggle button label

        //start timer and update fuel
        timer2->start(10000);
        update();
    }
    else{
        //car is stopped, close application and save data
        if (speed == 0){
            //save data at speed 0
            Login connection;
            QString end = QTime::currentTime().toString();  //get time
            QString date = QDate::currentDate().toString(); //get date

            calcAverage();
            calcMax();

            connection.openDb();
            QSqlQuery qry;

            //insert values into database
            qry.prepare("INSERT INTO Stats (average, max, fuel_used, fuel_left, num_calls, user_id, session_start, session_end, session_date)"
                        "VALUES (:average, :max, :fuel_used, :fuel_left, :num_calls, :user_id, :session_start, :session_end, :session_date)");
            qry.bindValue(":average", all.trip.avgSpeed);
            qry.bindValue(":max", all.trip.maxSpeed);
            qry.bindValue(":fuel_used", user.pFuel);
            qry.bindValue(":fuel_left", fuel);
            qry.bindValue(":num_calls", caller.pCalls);
            qry.bindValue(":user_id", user_id);
            qry.bindValue(":session_start", start);
            qry.bindValue(":session_end", end);
            qry.bindValue(":session_date", date);

            if (qry.exec()){
                //stats saved successfully
                qDebug() << "Saved";
                connection.dbClose();
                close();
            }
            else {
                //stats not saved
                qDebug() << "Error";
                connection.dbClose();
                close();
            }
        }
    }
}

/*
 * Increases speed from 0 to 180 mph
 */
void MainWindow::on_accel_pressed()
{
    int temp = speed;
    ui->accel->setAutoRepeatInterval(100); //while button is held down increase speed

    if(ui->pushButton->text() == "STOP" && speed != 180){
            //car is started
            temp += 1;
            ui->setspeed_label->setText(QString::number(temp));
            ui->accel->setAutoRepeat(true); //button is held
    }
    speed = temp;   //set speed to temp
    user.allSpeed.push_back(speed); //add speed into vector
}

/*
 * Decreases speed from 180 to 0 mph
 */
void MainWindow::on_decel_pressed()
{
    int temp = speed;
    ui->decel->setAutoRepeatInterval(100);  //while button is held down decrease speed
    if(ui->pushButton->text() == "STOP" && speed != 0){
        //car is started
        temp -= 1;
        ui->setspeed_label->setText(QString::number(temp));
        ui->decel->setAutoRepeat(true); //button is held
    }
    speed = temp;
}

/*
 * Refills fuel in car
 */
void MainWindow::on_refillButton_clicked()
{
    if (speed == 0){
        //car is not moving
        fuel = 100; //refill
        ui->setfuel_label->setText(QString::number(fuel));  //update label
    }
}

/*
 * Add 1 to phone number
 */
void MainWindow::on_one_clicked()
{
    if (count != 10){
        //phone number is not 10 digits
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "1");
        ui->call_label->setText("");
        ui->call_time->setText("");
        ui->contactError->setText("");
    }
}

/*
 * Add 2 to phone number
 */
void MainWindow::on_two_clicked()
{
    if (count != 10){
        //phone number is not 10 digits
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "2");
        ui->call_label->setText("");
        ui->call_time->setText("");
        ui->contactError->setText("");
    }
}

/*
 * Add 3 to phone number
 */
void MainWindow::on_three_clicked()
{
    if (count != 10){
        //phone number is not 10 digits
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "3");
        ui->call_label->setText("");
        ui->call_time->setText("");
        ui->contactError->setText("");
    }
}

/*
 * Add 4 to phone number
 */
void MainWindow::on_four_clicked()
{
    if (count != 10){
        //phone number is not 10 digits
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "4");
        ui->call_label->setText("");
        ui->call_time->setText("");
        ui->contactError->setText("");
    }
}

/*
 * Add 5 to phone number
 */
void MainWindow::on_five_clicked()
{
    if (count != 10){
        //phone number is not 10 digits
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "5");
        ui->call_label->setText("");
        ui->call_time->setText("");
        ui->contactError->setText("");
    }
}

/*
 * Add 6 to phone number
 */

void MainWindow::on_six_clicked()
{
    if (count != 10){
        //phone number is not 10 digits
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "6");
        ui->call_label->setText("");
        ui->call_time->setText("");
        ui->contactError->setText("");
    }
}

/*
 * Add 7 to phone number
 */
void MainWindow::on_seven_clicked()
{
    if (count != 10){
        //phone number is not 10 digits
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "7");
        ui->call_label->setText("");
        ui->call_time->setText("");
        ui->contactError->setText("");
    }
}

/*
 * Add 8 to phone number
 */
void MainWindow::on_eight_clicked()
{
    if (count != 10){
        //phone number is not 10 digits
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "8");
        ui->call_label->setText("");
        ui->call_time->setText("");
        ui->contactError->setText("");
    }
}

/*
 * Add 9 to phone number
 */
void MainWindow::on_nine_clicked()
{
    if (count != 10){
        //phone number is not 10 digits
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "9");
        ui->call_label->setText("");
        ui->call_time->setText("");
        ui->contactError->setText("");
    }
}

/*
 * Add 0 to phone number
 */
void MainWindow::on_zero_clicked()
{
    if (count != 10){
        //display not full
        count++;
        ui->dial_display->setText(ui->dial_display->text() + "0");
        ui->call_label->setText("");
        ui->call_time->setText("");
        ui->contactError->setText("");
    }
}

/*
 * Ends call
 */
void MainWindow::on_X_clicked()
{
    if (caller.phone){
        //driver is calling something
        Login connection;
        connection.openDb();
        QSqlQuery qry;
        qry.prepare("INSERT INTO NumbersDialed (user_id, phone_number, time, duration)"
                    "VALUES (:user_id, :phone_number, :time, :duration)");
        qry.bindValue(":user_id", user_id);
        qry.bindValue(":phone_number", ui->dial_display->text());
        qry.bindValue(":time", currentTime);
        qry.bindValue(":duration", ui->call_time->text());
        qry.exec();
        connection.dbClose();

        caller.pCalls++;    //increase phone calls made for user
        caller.phone = false;   //end call
    }

    t = 0;
    count = 0;
    ui->dial_display->setText("");  //clear display
    timer->stop();  //stop timer
    rToggle = false;    //allow radio to be toggled to on
}

/*
 * Make call
 */
void MainWindow::on_call_clicked()
{
    if (count == 10){
        //phone number is 10 digits
        currentTime = QTime::currentTime().toString();  //get time

        rToggle = true; //turn off radio
        caller.phone = true;    //user is in call

        ui->radio_toggle->setText("ON");
        ui->radio_slider->setValue(0);
        ui->call_label->setText("Call time: ");         //shows call time

        timer->start(1);    //start timer
        t = t + 1;
        QTime ct;
        ct = time->addMSecs(t);
            QString elapsedTime = ct.toString("hh:mm:ss");  //display time of call
            ui->call_time->setText(elapsedTime);
    }
}

/*
 * Change volume
 */
void MainWindow::on_vol_slider_actionTriggered(int action)
{
    ui->volume_db->setText(QString::number(ui->vol_slider->value()));
}

/*
 * Chane mic level
 */
void MainWindow::on_mic_slider_actionTriggered(int action)
{
    ui->mic_db->setText(QString::number(ui->mic_slider->value()));
}

/*
 * add number into contact list
 */
void MainWindow::on_add_clicked()
{
    bool found = false;

    QString newNumber = ui->dial_display->text();   //pull number from phone display

    //search list if number to add already exists
    for(int i = 0; i < ui->contactList->count(); i++){  //iterate through conatact list
        if (ui->contactList->item(i)->text() == newNumber){
            //phone number already exists
            found = true;
            ui->contactError->setText("Number already exists"); //display error
            break;
        }
    }
    if (!found){
        //phone number does not exists
        if (count == 10){
            //number is 10 digits, add into list and database
            ui->contactList->addItem(newNumber);
            ui->contactError->setText("");

            Login connection;
            connection.openDb();
            QSqlQuery qry;
            qry.prepare("INSERT INTO ContactList (user_id, phone_number)"
                        "VALUES (:user_id, :phone_number)");
            qry.bindValue(":user_id", user_id);
            qry.bindValue(":phone_number", ui->dial_display->text());
            qry.exec();
            connection.dbClose();
        }
    }
}

/*
 * Populate dial display from contact list
 */
void MainWindow::on_contactList_activated(const QModelIndex &index)
{
    QListWidgetItem *num = ui->contactList->currentItem();
    ui->dial_display->setText(num->text()); //add number from contact list to phone display
    count = 10;
}

/*
 * Remove phone number from list and database
 */
void MainWindow::on_remove_clicked()
{
    Login connection;
    connection.openDb();
    QSqlQuery qry;
    qry.prepare("DELETE FROM ContactList WHERE user_id='" + user_id +
                "' AND phone_number ='" + ui->contactList->currentItem()->text() + "'");
    qry.exec();
    connection.dbClose();

    ui->contactList->takeItem(ui->contactList->row(ui->contactList->currentItem()));
}

/*
 * Toggle fm stations
 */
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

/*
 * Toggle am stations
 */
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

/*
 * Change radio volume
 */
void MainWindow::on_radio_slider_actionTriggered(int action)
{
    ui->radio_db->setText(QString::number(ui->radio_slider->value()));
}

/*
 * Turn on or off radio
 */
void MainWindow::on_radio_toggle_clicked()
{
    while (rToggle == false){
        //not in phone classs
        if (ui->radio_toggle->text() == "ON"){
            //radio if off
            ui->radio_toggle->setText("OFF");
            ui->radio_slider->setValue(50);
            if (!listener.fmStations.empty()){
                //tune to first station
                ui->radio_label->setText(QString::number(listener.fmStations.front()));
            }
            break;
        }
        else {
            //radio is off
            ui->radio_toggle->setText("ON");
            ui->radio_label->setText("---");
            ui->radio_slider->setValue(0);
            break;
        }
    }
}

/*
 * Set route to work, populates stations
 */
void MainWindow::on_work_button_clicked()
{
    user.place.distance = 50;
    ui->pushButton->setDisabled(false);
    ui->accel->setDisabled(false);
    ui->decel->setDisabled(false);

    //populate stations
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

/*
 * Set route to school, populates stations
 */
void MainWindow::on_school_button_clicked()
{
    user.place.distance = 30;
    ui->pushButton->setDisabled(false);
    ui->accel->setDisabled(false);
    ui->decel->setDisabled(false);
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

/*
 * Set route to store, populates stations
 */
void MainWindow::on_store_button_clicked()
{
    user.place.distance = 35;
    ui->pushButton->setDisabled(false);
    ui->accel->setDisabled(false);
    ui->decel->setDisabled(false);
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

/*
 * Set route to cruise, populates stations
 */
void MainWindow::on_beach_button_clicked()
{
    ui->pushButton->setDisabled(false);
    ui->accel->setDisabled(false);
    ui->decel->setDisabled(false);
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
    ui->nav_label->setText("cruise mode");
}

/*
 * Tune to next station and add station to database
 */
void MainWindow::on_next_button_clicked()
{
    while(ui->radio_toggle->text() == "OFF" && !listener.fmStations.empty()){
       //stations exists and radio is on
       if (listener.fm){
           //listening to fm
           if (listener.fmcount == listener.fmStations.size()-1){
               listener.fmcount = -1;
           }
           listener.fmcount++;
           ui->radio_label->setText(QString::number(listener.fmStations[listener.fmcount]));
           currentTime = QTime::currentTime().toString();
       }
       else{
           //listening to am
           if (listener.amcount == listener.amStations.size()-1){
               listener.amcount = -1;
           }
           listener.amcount++;
           ui->radio_label->setText(QString::number(listener.amStations[listener.amcount]));
           currentTime = QTime::currentTime().toString();
       }
       Login connection;
       connection.openDb();
       //insert station to database
       QSqlQuery qry;
       qry.prepare("INSERT INTO StationsListenedTo (user_id, station_name, time)"
                   "VALUES (:user_id, :station_name, :time)");
       qry.bindValue(":user_id", user_id);
       qry.bindValue(":station_name", ui->radio_label->text());
       qry.bindValue(":time", currentTime);
       qry.exec();
       connection.dbClose();
       break;
    }
}

/*
 * Tune to previous station
 */
void MainWindow::on_back_button_clicked()
{
    while(ui->radio_toggle->text() == "OFF" && !listener.fmStations.empty()){
        //stations exists
       if (listener.fmcount == 0){
           //no more previous stations
           listener.fmcount = listener.fmStations.size();
       }

       if (listener.fm){
           //listening to fm
           listener.fmcount--;
           ui->radio_label->setText(QString::number(listener.fmStations[listener.fmcount]));
       }
       else{
           //listening to am
           if (listener.amcount == 0){
               listener.amcount = listener.amStations.size();
           }
           listener.amcount--;
           ui->radio_label->setText(QString::number(listener.amStations[listener.amcount]));
       }
       break;
    }
}

/*
 * Add station to station list
 */
void MainWindow::on_add_2_clicked()
{
    bool found = false;

    QString newNumber = ui->radio_label->text();   //pull number from radio display
    while (ui->radio_toggle->text() == "OFF"){
        //radio is on
        if(listener.fm){
            //listening to fm
            //search list if number to add already exists
            for(int i = 0; i < ui->radio_fmlist->count(); i++){
                if (ui->radio_fmlist->item(i)->text() == newNumber){
                    //station already exists
                    found = true;
                    break;
                }
            }
            if (!found){
                    //add newnumber
                    ui->radio_fmlist->addItem(newNumber);

                    Login connection;
                    connection.openDb();
                    QSqlQuery qry;
                    qry.prepare("INSERT INTO StationFMList (user_id, station_name)"
                                "VALUES (:user_id, :station_name)");
                    qry.bindValue(":user_id", user_id);
                    qry.bindValue(":station_name", newNumber);
                    qry.exec();
                    connection.dbClose();
            }
        }
        else{
            //listening to am
            for(int i = 0; i < ui->radio_amlist->count(); i++){
                if (ui->radio_amlist->item(i)->text() == newNumber){
                    //station already exists in lists
                    found = true;
                    break;
                }
            }
            if (!found){
                    //station exists
                    ui->radio_amlist->addItem(newNumber);

                    Login connection;
                    connection.openDb();
                    QSqlQuery qry;
                    qry.prepare("INSERT INTO StationAMList (user_id, station_name)"
                                "VALUES (:user_id, :station_name)");
                    qry.bindValue(":user_id", user_id);
                    qry.bindValue(":station_name", newNumber);
                    qry.exec();
                    connection.dbClose();
            }
        }
        break;
    }
}

/*
 * Remove station from list and database
 */
void MainWindow::on_remove_2_clicked()
{
    if(listener.fm){
        //listening to fm
        Login connection;
        connection.openDb();
        QSqlQuery qry;
        qry.prepare("DELETE FROM StationFMList WHERE user_id='" + user_id +
                    "' AND station_name ='" + ui->radio_fmlist->currentItem()->text() + "'");
        qry.exec();
        connection.dbClose();

        ui->radio_fmlist->takeItem(ui->radio_fmlist->row(ui->radio_fmlist->currentItem())); //remove station
    }
    else{
        //listening to am
        Login connection;
        connection.openDb();
        QSqlQuery qry;
        qry.prepare("DELETE FROM StationAMList WHERE user_id='" + user_id +
                    "' AND station_name ='" + ui->radio_amlist->currentItem()->text() + "'");
        qry.exec();
        connection.dbClose();

        ui->radio_amlist->takeItem(ui->radio_amlist->row(ui->radio_amlist->currentItem())); //remove station
    }
}

/*
 * Set station to station selection
 */
void MainWindow::on_radio_amlist_activated(const QModelIndex &index)
{
        QListWidgetItem *num = ui->radio_amlist->currentItem();
        ui->radio_label->setText(num->text()); //add number from radio am list to radio display
}

/*
 * Set station to station selection
 */
void MainWindow::on_radio_fmlist_activated(const QModelIndex &index)
{
        QListWidgetItem *num = ui->radio_fmlist->currentItem();
        ui->radio_label->setText(num->text()); //add number from fm list to radio display
}

/*
 * Set station to station selection
 */
void MainWindow::on_decel_released()
{
    if(user.place.distance != 0 && all.trip.Distance == user.place.distance){
        speed = 0;
        ui->accel->setDisabled(true);
        ui->decel->setDisabled(true);
        ui->setspeed_label->setText(QString::number(speed));
        ui->nav_label->setText("Destination reached.");
    }
}

/*
 * Populates table to see stats
 */
void MainWindow::on_Overall_clicked()
{
    Login connection;
    connection.openDb();
    QSqlQueryModel *table = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery(connection.db);
    qry->prepare("SELECT * FROM Stats");
    qry->exec();
    table->setQuery(*qry);
    ui->tableView->setModel(table);
    ui->tableView->horizontalHeader()->sectionResizeMode(QHeaderView::Stretch);
    connection.dbClose();
}

/*
 * Populates table to see stats pertaining to phone
 */
void MainWindow::on_Phone_clicked()
{
    Login connection;
    connection.openDb();
    QSqlQueryModel *table = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery(connection.db);
    qry->prepare("SELECT * FROM NumbersDialed");
    qry->exec();
    table->setQuery(*qry);
    ui->tableView->setModel(table);
    ui->tableView->horizontalHeader()->sectionResizeMode(QHeaderView::Stretch);
    connection.dbClose();
}

/*
 * Populates table to see stats pertaining to radio
 */
void MainWindow::on_Radio_clicked()
{
    Login connection;
    connection.openDb();
    QSqlQueryModel *table = new QSqlQueryModel();
    QSqlQuery *qry = new QSqlQuery(connection.db);
    qry->prepare("SELECT * FROM StationsListenedTo");
    qry->exec();
    table->setQuery(*qry);
    ui->tableView->setModel(table);
    ui->tableView->horizontalHeader()->sectionResizeMode(QHeaderView::Stretch);
    connection.dbClose();
}
