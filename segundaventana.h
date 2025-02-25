#ifndef SEGUNDAVENTANA_H
#define SEGUNDAVENTANA_H

#include <QDialog>

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
    void on_pushButton_clicked();

    void on_CalculadoraButton_clicked();

    void on_AlfabetoButton_clicked();

    void on_comboBox_activated(int index);

    void on_PageWidget_currentChanged(int index);

    void on_tabWidgetPage1_customContextMenuRequested(const QPoint &pos);

private:
    Ui::SegundaVentana *ui;
    void getAlfabetoList();
    QStringList AlfabetoList;
    void AlfabetoBox();
};

#endif // SEGUNDAVENTANA_H
