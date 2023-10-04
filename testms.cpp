#include "testms.h"
#include "ui_testms.h"
#include "QMessageBox"
#include "testms.h"
testms::testms(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::testms)
{
    ui->setupUi(this);
}

testms::~testms()
{
    delete ui;
}

void testms::on_pushButton_clicked()
{
    QMessageBox::information(this,"Okay", "ok bye");
}

