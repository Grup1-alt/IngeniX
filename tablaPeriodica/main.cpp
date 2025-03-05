#include "tablaPeriodica.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    tablaPeriodica w;
    w.show();
    return a.exec();
}
