#include "pr_accueil.h"
#include "ui_pr_accueil.h"

Pr_accueil::Pr_accueil(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Pr_accueil)
{
    ui->setupUi(this);
}

Pr_accueil::~Pr_accueil()
{
    delete ui;
}
