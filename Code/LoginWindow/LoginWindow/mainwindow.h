#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QDebug>
#include <QVector>
#include "login.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public:
    int speed = 0;
    int fuel = 100;
    int count = 0;
    int t = 0;
    bool rToggle = false;

    QTimer *timer;
    QTimer *timer2;
    QTime *time;

    QString currentTime;
    QString start = QTime::currentTime().toString();
    QString user_id;
    void passUser(const QString& name);


private slots:
    void update();
    void populate();
    void popFm();
    void popAm();
    void setFuel();
    void calcAverage();
    void calcMax();
    void on_pushButton_clicked();
    void on_accel_pressed();
    void on_decel_pressed();
    void on_refillButton_clicked();
    void on_one_clicked();
    void on_two_clicked();
    void on_three_clicked();
    void on_four_clicked();
    void on_five_clicked();
    void on_six_clicked();
    void on_seven_clicked();
    void on_eight_clicked();
    void on_nine_clicked();
    void on_zero_clicked();
    void on_X_clicked();
    void on_call_clicked();
    void on_vol_slider_actionTriggered(int action);
    void on_mic_slider_actionTriggered(int action);
    void on_add_clicked();
    void on_contactList_activated(const QModelIndex &index);
    void on_remove_clicked();
    void on_fm_button_clicked();
    void on_am_button_clicked();
    void on_radio_slider_actionTriggered(int action);
    void on_radio_toggle_clicked();
    void on_work_button_clicked();
    void on_next_button_clicked();
    void on_add_2_clicked();
    void on_remove_2_clicked();
    void on_radio_amlist_activated(const QModelIndex &index);
    void on_radio_fmlist_activated(const QModelIndex &index);
    void on_back_button_clicked();
    void on_school_button_clicked();
    void on_store_button_clicked();
    void on_beach_button_clicked();
    void on_decel_released();
    void on_Overall_clicked();
    void on_Phone_clicked();
    void on_Radio_clicked();

private:
    Ui::MainWindow *ui;
    class Stats{
    public:
        struct stat{
            int avgSpeed;
            int maxSpeed;
            int usedFuel;
            int numCalls;
            int Distance;
            QVector<double> lStations;
            QVector<int> numDialed;
        };
        stat trip;
        QVector<stat> trips;
    }; Stats all;
    class Drive: public Stats{
    public:
        int pFuel = 0;
        int pSpeed = 0;
        struct travel{
            int awStations[8] = {600, 750, 1002, 1023, 1134, 1204, 1230, 1450};
            int asStations[4] = {750, 1030, 1230, 1267};
            int arStations[8] = {600, 1023, 1223, 1400, 1325, 1441, 1533, 1776};
            int abStations[11] = {650, 1002, 1040, 1240, 1270, 1380, 1505, 1600, 1660, 1776, 1800};
            double fwStations[13] = {89.1, 89.7, 90.4, 91.2, 91.4, 92.3, 92.8, 93.9, 94.5, 98.1, 98.3, 101.1, 104.5};
            double fsStations[9] =  {89.1, 89.7, 91.2, 91.4, 92.7, 94.3, 98.3, 101.2, 106.7};
            double frStations[8] = {89.1, 89.7, 90.1, 92.2, 93.5, 97.5, 103.7, 107.9};
            double fbStations[14] = {89.1, 89.7, 90.4, 91.9, 92.3, 92.5, 93.6, 94.3, 98.3, 98.9, 101.2, 103.7, 104.9, 107.9};
        };
        struct location{
            int distance = 0;
        };
        location place;
        travel stat;
        QVector<int> allSpeed;
    }; Drive user;
    class Phone: public Drive{
    public:
        int pCalls = 0;
        QVector<int> numbers;
    }; Phone caller;
    class Radio: public Drive{
    public:
        int fmcount = 0;
        int amcount = 0;
        bool fm = true;
        bool am = false;
        QVector<double> fmStations;
        QVector<int> amStations;
    }; Radio listener;
};

#endif // MAINWINDOW_H
