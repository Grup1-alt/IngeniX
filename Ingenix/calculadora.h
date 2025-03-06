#ifndef CALCULADORA_H
#define CALCULADORA_H

#include <QDialog>

namespace Ui {
class Calculadora;
}

class Calculadora : public QDialog
{
    Q_OBJECT

public:
    explicit Calculadora(QWidget *parent = nullptr);
    ~Calculadora();

private:
    Ui::Calculadora *ui;
};

#endif // CALCULADORA_H
