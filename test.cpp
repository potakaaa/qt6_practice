#include "test.h"
#include "ui_test.h"
#include <QLabel>
#include <QTransform>


Test::Test(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Test)
{
    ui->setupUi(this);

    setWindowTitle("QT Practice 1");
    resize(500, 500);

    QTransform trans;

    QPixmap pm;

    ui->image->setPixmap(QPixmap(":/images/resources/Screenshot 2023-01-10 103529.png"));
    ui->image->setGeometry(250, 250, 100, 300);
    ui->label->setText("hahaha pati sched gikawat (2)");

}

Test::~Test()
{
    delete ui;
}
