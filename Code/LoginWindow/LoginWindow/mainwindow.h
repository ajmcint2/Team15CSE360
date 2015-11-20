#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>
#include <QDebug>

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
    int t = 0;

    QTimer *timer;

    QTime *time;


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

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
