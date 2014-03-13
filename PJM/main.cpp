#include "acb.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ACB w;
    w.show();
//commentaire
    return a.exec();
}
