#include "atomicstore.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AtomicStore w;
    w.show();
    return a.exec();
}
