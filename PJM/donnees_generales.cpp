#include "donnees_generales.h"
#include "ui_donnees_generales.h"

Donnees_generales::Donnees_generales(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Donnees_generales)
{
    ui->setupUi(this);
}

Donnees_generales::~Donnees_generales()
{
    delete ui;
}
