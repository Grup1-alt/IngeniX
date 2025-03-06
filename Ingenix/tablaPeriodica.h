#ifndef TABLAPERIODICA_H
#define TABLAPERIODICA_H

#include <QMainWindow>
#include <QVector>
#include <QStringList>
#include <QString>
#include <QPushButton>
#include <QCoreApplication>
#include <QFileInfo>

QT_BEGIN_NAMESPACE
namespace Ui { class tablaPeriodica; }
QT_END_NAMESPACE

class tablaPeriodica : public QMainWindow {
    Q_OBJECT

public:
    tablaPeriodica(QWidget *parent = nullptr);
    ~tablaPeriodica();

private slots:
    void Mostrar_Info();

private:
    Ui::tablaPeriodica *ui;

    QString ruta_archivo_csv = QCoreApplication::applicationDirPath() + "/tabla_periodica.csv"; // Aca guardo la ruta del archivo en la carpeta
        // donde esta el ejecutable, asi que deberia
        // funcionar donde sea.

    void conectar_botones();

    QVector<QStringList> Lineas_csv;
    QVector<QStringList> Leer_archivo_csv(QString ruta);
};

#endif // TABLAPERIODICA_H
