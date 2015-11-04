#include "login.h"
#include <QApplication>
#include <QtCore/QCoreApplication>
#include <QtSql>
#include <QtDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login w;
    w.show();

    return a.exec();
}
