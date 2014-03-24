#ifndef MENU_MAIN_H
#define MENU_MAIN_H

#include <QWidget>

namespace Ui {
class Menu_main;
}

class Menu_main : public QWidget
{
    Q_OBJECT

public:
    explicit Menu_main(QWidget *parent = 0);
    ~Menu_main();

private:
    Ui::Menu_main *ui;
};

#endif // MENU_MAIN_H
