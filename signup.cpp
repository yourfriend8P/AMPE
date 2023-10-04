#include "signup.h"
#include "ui_signup.h"
#include "testms.h"
signup::signup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signup)
{
    ui->setupUi(this);
}

signup::~signup()
{
    delete ui;
}




void signup::on_pushButton_2_clicked()
{
    testms testt;
    testt.setModal(true); // modal approach meaning that mainwindow cannot be opened while second window is open
    testt.exec();
}

