#ifndef PR_ACCUEIL_H
#define PR_ACCUEIL_H

#include <QWidget>

namespace Ui {
class Pr_accueil;
}

class Pr_accueil : public QWidget
{
    Q_OBJECT

public:
    explicit Pr_accueil(QWidget *parent = 0);
    ~Pr_accueil();

private:
    Ui::Pr_accueil *ui;
};

#endif // PR_ACCUEIL_H
