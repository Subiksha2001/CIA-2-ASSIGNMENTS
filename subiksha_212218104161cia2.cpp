#include "subiksha_212218104161cia2.h"
#include "ui_subiksha_212218104161cia2.h"
#include<QMessageBox>
#include<QtCore>
#include<QtGui>
#include<QDebug>
subiksha_212218104161cia2::subiksha_212218104161cia2(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::subiksha_212218104161cia2)
{
    ui->setupUi(this);
    ui->pushButton->setIcon(QIcon("C:/Users/swetaa/OneDrive/Documents/Cia2swetaa/on.jpeg"));
        ui->pushButton->setCheckable(true);
        QAction *a1=new QAction;
            QAction *a2=new QAction;
            QAction *a3=new QAction;
            a1->setText("First");
            a2->setText("Second");
            a3->setText("Third");
            QMenu *menu=new QMenu;
            menu->addAction(a1);
            menu->addAction(a2);
            menu->addAction(a3);
            ui->pushButton_2->setMenu(menu);
}

subiksha_212218104161cia2::~subiksha_212218104161cia2()
{
    delete ui;
}


void subiksha_212218104161cia2::on_pushButton_toggled(bool checked)
{
    if(checked)
        {
            ui->pushButton->setIcon(QIcon("C:/Users/swetaa/OneDrive/Documents/Cia2swetaa/on.jpeg"));

            qDebug() <<"Button Checked --ON--";
        }
        else
        {
            ui->pushButton->setIcon(QIcon("C:/Users/swetaa/OneDrive/Documents/Cia2swetaa/off1.jpeg"));

            qDebug() <<"Button Checked --OFF--";
        }
}

void subiksha_212218104161cia2::on_pushButton_3_clicked()
{
     QMessageBox::information(this,"Subiksha_2122180104161","THIS IS INFORMATION BOX");
}

void subiksha_212218104161cia2::on_pushButton_4_clicked()
{
    QMessageBox::StandardButton reply;
       reply=QMessageBox::question(this,"Subiksha_2122180104161","Do you like apples?",QMessageBox::Yes| QMessageBox::No);
        if(reply==QMessageBox::Yes)
        {
             QMessageBox::information(this,"Subiksha_2122180104161","Yes");
        }
        else
        {
             QMessageBox::information(this,"Subiksha_2122180104161","No");
        }

}

void subiksha_212218104161cia2::on_pushButton_5_clicked()
{
    QMessageBox::StandardButton reply;
       reply=QMessageBox::question(this,"Subiksha_2122180104161","This is a custom message",QMessageBox::YesAll|QMessageBox::Yes|QMessageBox::NoToAll|QMessageBox::No);
       if(reply==QMessageBox::No)
       {

           qDebug() <<"Nothing is displayed";

       }


       else
       {
           QMessageBox::warning(this,"Subiksha_2122180104161","Dont display the message with warning as YesToAll");
       }

}

void subiksha_212218104161cia2::on_pushButton_6_clicked()
{
    QMessageBox:: warning(this,"Subiksha_2122180104161","This is a warning message");

}
