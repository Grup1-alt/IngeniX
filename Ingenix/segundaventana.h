#ifndef SEGUNDAVENTANA_H
#define SEGUNDAVENTANA_H
#include <QDialog>
#include <QMap>
#include <QCoreApplication>

namespace Ui {
class SegundaVentana;
}

class SegundaVentana : public QDialog
{
    Q_OBJECT

public:

    explicit SegundaVentana(QWidget *parent = nullptr);
    ~SegundaVentana();

private slots:

    void Mostrar_Info();

//Botones
    void on_pushButton_clicked();

    void on_CalculadoraButton_clicked();

    void on_AlfabetoButton_clicked();

    void on_BuscarButton_clicked();

    void on_ActualizarButton_2_clicked();
//Botone fin

//ComboBox
    void on_comboBox_activated(int index);

    void on_AlfabetoBox_activated(int index);

    void on_MagnitudesBox_activated(int index);

    void on_UnidadesBox_activated(int index);

    void on_Unidades_Box_activated(int index);
//ComboBox fin

    void on_PageWidget_currentChanged(int index);
private:
    Ui::SegundaVentana *ui;
    QMap<QString, QString> descripciones;

    QStringList AlfabetoList;
    QStringList MagnitudesList;
    QStringList UnidadesListLongitud;
    QStringList UnidadesListMasa;
    QStringList UnidadesListTemperatura;
    QStringList UnidadesListVolumen;
    QStringList UnidadesListArea;
    QStringList UnidadesListPresion;
    QStringList UnidadesListTiempo;
    QStringList UnidadesListVelocidad;
    QString ruta_archivo_csv = QCoreApplication::applicationDirPath() + "/tabla_periodica.csv"; // Aca guardo la ruta del archivo en la carpeta
        // donde esta el ejecutable, asi que deberia
        // funcionar donde sea.
    QVector<QStringList> Lineas_csv;
    QVector<QStringList> Leer_archivo_csv(QString ruta);

    void getAlfabetoList();
    void getMagnitudesList();
    void getUnidadesLongitudList();
    void getUnidadesMasaList();
    void getUnidadesTemperaturaList();
    void getUnidadesVolumenList();
    void getUnidadesAreaList();
    void getUnidadesPresionList();
    void getUnidadesTiempoList();
    void getUnidadesVelocidadList();
    void AlfabetoBox();
    void MagnitudesBox();
    void UnidadesBox();
    void Unidades_Box();
    void conectar_botones();
};

#endif // SEGUNDAVENTANA_H
