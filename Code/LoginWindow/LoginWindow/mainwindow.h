#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>

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

private slots:
    void on_pushButton_clicked();

    void on_accel_clicked();

    void on_decel_clicked();

    void on_refillButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
