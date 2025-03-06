#include "mainwindow.h"
#include <QMessageBox>
#include <QCloseEvent>
#include "ui_mainwindow.h"
#include "segundaventana.h"
#include "ui_segundaventana.h"
#include "calculadora.h"
#include "ui_calculadora.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
