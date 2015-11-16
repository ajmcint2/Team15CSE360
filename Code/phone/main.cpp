#include "mainwindow.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

   //QListWidgetItem contactlist = new QListWidgetItem();
    w.show();
    return a.exec();
}







