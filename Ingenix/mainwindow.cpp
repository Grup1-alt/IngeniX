#include "mainwindow.h"
#include <QMessageBox>
#include <QCloseEvent>
#include "ui_mainwindow.h"
#include "segundaventana.h"
#include "calculadora.h"
#include "ui_calculadora.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow){
    ui->setupUi(this);
    }

MainWindow::~MainWindow(){
    delete ui;
}


void MainWindow::on_pushButton_clicked(){
    SegundaVentana* ventana2 = new SegundaVentana(this);
    ventana2 -> show();
}




