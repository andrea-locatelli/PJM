#ifndef ACB_H
#define ACB_H

#include <QMainWindow>

namespace Ui {
class ACB;
}

class ACB : public QMainWindow
{
    Q_OBJECT

public:
    explicit ACB(QWidget *parent = 0);
    ~ACB();

private:
    Ui::ACB *ui;
};

#endif // ACB_H
