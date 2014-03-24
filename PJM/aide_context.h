#ifndef AIDE_CONTEXT_H
#define AIDE_CONTEXT_H

#include <QWidget>

namespace Ui {
class Aide_context;
}

class Aide_context : public QWidget
{
    Q_OBJECT

public:
    explicit Aide_context(QWidget *parent = 0);
    ~Aide_context();

private:
    Ui::Aide_context *ui;
};

#endif // AIDE_CONTEXT_H
