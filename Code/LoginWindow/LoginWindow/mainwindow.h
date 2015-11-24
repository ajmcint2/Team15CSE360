#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QDebug>
#include <QVector>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int speed = 0;
    int fuel = 50;
    int count = 0;
    int tuner = 0;
    int t = 0;

    QTimer *timer;

    QTime *time;

    bool rToggle = false;


private slots:
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

private:
    Ui::MainWindow *ui;
    class Drive{
    public:
        int pFuel;
        int pSpeed;
        struct travel{
            double fwStations[13] = {89.1, 89.7, 90.4, 91.2, 91.4, 92.3, 92.8, 93.9, 94.5, 98.3, 98.1, 101.1, 104.5};
            double fsStations[9] =  {89.1, 89.7, 91.4, 91.2, 92.7, 94.3, 98.3, 101.2, 106.7};
            double frStations[8] = {89.1, 89.7, 90.1, 92.2, 93.5, 97.5, 103.7, 107.9};
            double fbStations[14] = {89.1, 89.7, 90.4, 91.9, 92.3, 92.5, 93.6, 94.3, 98.3, 98.9, 101.2, 103.7, 104.9, 107.9};
        };
    }; Drive user;
    class Phone: public Drive{
    public:
        int pCalls;
        QVector<int> numbers;
    };
    class Radio: public Drive{
    public:
        QVector<double> fmStations;
        QVector<double> amStations;
    };
    class Stats: public Drive{
    public:
        struct trip{
            int avgSpeed;
            int maxSpeed;
            int usedFuel;
            int numCalls;
            int Distance;
            QVector<double> lStations;
            QVector<int> numDialed;
        };
        QVector<trip> trips;
    };
};

#endif // MAINWINDOW_H
