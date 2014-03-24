#include "menu_main.h"
#include "ui_menu_main.h"

Menu_main::Menu_main(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Menu_main)
{
    ui->setupUi(this);
}

Menu_main::~Menu_main()
{
    delete ui;
}
