#include "aide_context.h"
#include "ui_aide_context.h"

Aide_context::Aide_context(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Aide_context)
{
    ui->setupUi(this);
}

Aide_context::~Aide_context()
{
    delete ui;
}
