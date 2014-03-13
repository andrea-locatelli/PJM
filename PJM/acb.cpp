#include "acb.h"
#include "ui_acb.h"

ACB::ACB(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ACB)
{
    ui->setupUi(this);
}

ACB::~ACB()
{
    delete ui;
}
