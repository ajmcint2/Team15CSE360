#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int contactlistsize = 0;
bool itemSelected = false;


void MainWindow::on_one_clicked()
{
    ui->phoneDisplay->setText(ui->phoneDisplay->text() + "1");

}
void MainWindow::on_two_clicked()
{
ui->phoneDisplay->setText(ui->phoneDisplay->text() + "2");
}
void MainWindow::on_three_clicked()
{
ui->phoneDisplay->setText(ui->phoneDisplay->text() + "3");
}
void MainWindow::on_four_clicked()
{
    ui->phoneDisplay->setText(ui->phoneDisplay->text() + "4");
}
void MainWindow::on_five_clicked()
{
ui->phoneDisplay->setText(ui->phoneDisplay->text() + "5");
}
void MainWindow::on_six_clicked()
{

    ui->phoneDisplay->setText(ui->phoneDisplay->text() + "6");
}
void MainWindow::on_seven_clicked()
{
    ui->phoneDisplay->setText(ui->phoneDisplay->text() + "7");
}
void MainWindow::on_eight_clicked()
{
ui->phoneDisplay->setText(ui->phoneDisplay->text() + "8");
}
void MainWindow::on_nine_clicked()
{
    ui->phoneDisplay->setText(ui->phoneDisplay->text() + "9");
}
void MainWindow::on_zero_clicked()
{
    ui->phoneDisplay->setText(ui->phoneDisplay->text() + "0");
}
void MainWindow::on_end_clicked()
{
    ui->phoneDisplay->setText("");
    //getendtime;
}

void MainWindow::on_Call_clicked()
{
    //getcalltime
}

void MainWindow::on_ContactList_itemClicked(QListWidgetItem *item)
{
    ui->phoneDisplay->setText(item->text());
}


void MainWindow::on_Remove_clicked()
{
    ui->ContactList->takeItem(ui->ContactList->row(ui->ContactList->currentItem()));
    contactlistsize--;
}

void MainWindow::on_add_clicked()
{
    QString number =  ui->phoneDisplay->text();
     //update display
    if(contactlistsize == 0)
    {

    ui->ContactList->addItem(number);
    contactlistsize++;
    }
    else                       //check if number is already in contact list
    {

        for(int i = 0; i < contactlistsize; i++)
        {

          QListWidgetItem *item = ui->ContactList->item(i);

            if( number.compare(item->text() , Qt::CaseInsensitive) == 0)     // number matches one in list
           {
                return;
           }
        }
        ui->ContactList->addItem(number);
        contactlistsize++;

    }

}
