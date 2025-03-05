#include "tablaPeriodica.h"
#include "ui_tablaPeriodica.h"
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QString>

tablaPeriodica::tablaPeriodica(QWidget *parent) : QMainWindow(parent), ui(new Ui::tablaPeriodica){

    ui->setupUi(this);

    Lineas_csv = Leer_archivo_csv(ruta_archivo_csv); // Aqui ponemos la variable que tendra la ruta del archivo
    conectar_botones();

}

tablaPeriodica::~tablaPeriodica() {
    delete ui;
}



void tablaPeriodica::Mostrar_Info(){

    QString tipo_info[8] = {"Numero atomico: ",
                            "Simbolo: ",
                            "Elemento: ",
                            "Peso: ",
                            "Periodo: ",
                            "Categoria: ",
                            "Descubridor: ",
                            "Grupo: "};

    QPushButton *boton = qobject_cast<QPushButton*>(sender()); // Aca con "sender" como que llamamos a un puntero que identifica
                                                               // la señal y hace al puntero tipo QPushButtom para poder trabajar
                                                               // con el y los botones. Esta linea si vi la necesidad de explicarla.
    if (boton) {

        QString nombre_boton = boton->objectName();
        int i = 0;
        int numero_boton = nombre_boton.right(nombre_boton.length() - 6).toInt(); // "Cortamos" el nombre hasta obtener el numero que tienen al final,
                                                                                  // si ven los nombres de los botones sabran que quiero decir ;).
        if ((numero_boton >= 1) && (numero_boton <= Lineas_csv.size())){

            QStringList linea = Lineas_csv[numero_boton];
            ui->textoCSV->clear();

            for (const QString& columna : linea) {
                ui->textoCSV->append(tipo_info[i] + columna);
                i++;
            }

        } else {
            qDebug() << "Boton fuera del rango.";
        }
    }
}

QVector<QStringList> tablaPeriodica::Leer_archivo_csv(QString ruta){

    QVector<QStringList> lineas_info;
    QFile archivo(ruta);  // Como que cargamos el archivo

    if (archivo.open(QIODevice::ReadOnly | QIODevice::Text)){ // Abrimos el archivo

        QTextStream archivo_leido(&archivo); // Para leer y trabajar con el archivo

        while (!archivo_leido.atEnd()) { // leemos hasta el final del archivo

            QString linea = archivo_leido.readLine();
            lineas_info.append(linea.split(';'));

        }
        archivo.close(); // Cerramos el archivo

    } else {

        qDebug() << "Error al abrir el archivo CSV.";

    }

    return lineas_info;
}

void tablaPeriodica::conectar_botones(){

    QList<QPushButton *> lista_botones_de_tabla = this->findChildren<QPushButton *>();

    for (QPushButton *boton_actual : lista_botones_de_tabla) {

        connect(boton_actual, &QPushButton::clicked, this, &tablaPeriodica::Mostrar_Info);

    };

}
