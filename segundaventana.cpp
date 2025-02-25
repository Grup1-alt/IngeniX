#include <QMessageBox>
#include <QCloseEvent>
#include <QPushButton>
#include <QLabel>
#include "mainwindow.h"
#include "segundaventana.h"
#include "calculadora.h"
#include "ui_segundaventana.h"
#include "ui_mainwindow.h"
#include "ui_calculadora.h"

//Funcion principal para activar las interacciones ejemplo(dar click a los botones)
SegundaVentana::SegundaVentana(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SegundaVentana){
        ui->setupUi(this);
        AlfabetoBox();
        connect(ui->AlfabetoButton, &QPushButton::clicked, this, &SegundaVentana::on_AlfabetoButton_clicked);
    }

//Destructor
SegundaVentana::~SegundaVentana(){
    delete ui;
}

//funcion del boton para mostrar calculadora
void SegundaVentana::on_CalculadoraButton_clicked(){
    Calculadora* calculadora = new Calculadora(this);
    calculadora -> show();
}

//funcion menu para mostrar el alfabet griego
void SegundaVentana::AlfabetoBox(){
    getAlfabetoList();
    ui->AlfabetoBox->addItems(AlfabetoList);
}

//Funcion que almacena el alfabeto
void SegundaVentana::getAlfabetoList(){
    AlfabetoList = {
        "Α	α	Alfa",
        "Β	β	Beta",
        "Γ	γ	Gamma",
        "Δ	δ	Delta",
        "Ε	ε	Épsilon",
        "Ζ	ζ	Dseta",
        "Η	η	Eta",
        "Θ	θ,ϑ	Theta",
        "Ι	ι	Iota",
        "Κ	κ	Kappa",
        "Λ	λ	Lambda",
        "Μ	μ	Mu",
        "Ν	ν	Nu",
        "Ξ	ξ	Xi",
        "Ο	ο	Ómicron",
        "Π	π	Pi",
        "Ρ	ρ,ϱ	Rho",
        "Σ	σ,ς	Sigma",
        "Τ	τ	Tau",
        "Υ	υ	Ípsilon",
        "Φ	φ,ϕ	Fi",
        "Χ	χ	Ji",
        "Ψ	ψ	Psi",
        "Ω	ω	Omega"
    };
}

