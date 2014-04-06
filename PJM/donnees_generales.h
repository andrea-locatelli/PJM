#ifndef DONNEES_GENERALES_H
#define DONNEES_GENERALES_H

#include <QWidget>

namespace Ui {
class Donnees_generales;
}

class Donnees_generales : public QWidget
{
    Q_OBJECT

public:
    explicit Donnees_generales(QWidget *parent = 0);
    ~Donnees_generales();

private:
    Ui::Donnees_generales *ui;
};

#endif // DONNEES_GENERALES_H
