#ifndef TESTMS_H
#define TESTMS_H

#include <QDialog>

namespace Ui {
class testms;
}

class testms : public QDialog
{
    Q_OBJECT

public:
    explicit testms(QWidget *parent = nullptr);
    ~testms();

private slots:
    void on_pushButton_clicked();

private:
    Ui::testms *ui;
};

#endif // TESTMS_H
