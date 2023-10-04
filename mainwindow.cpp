#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include "signup.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString email = ui->linedit_email->text();// to get the get the text input from the user and store it to email variable created
    QString password = ui->lineEdit_password->text();// to get the get the text input from the user and store it to password variable created
 // test to to see if above code is working
    if(email == "test@gmail.com" && password == "test")
    {
        QMessageBox::information(this,"Login", "Username and password is correct");
    }
    else
    {
        QMessageBox::warning(this,"Login","Username and password is incorrect");
    }

}




void MainWindow::on_pushButton_2_clicked()
{
    signup signupp;
    signupp.setModal(true); // modal approach meaning that mainwindow cannot be opened while second window is open
    signupp.exec();
}

