#include <QMessageBox>
#include <QCloseEvent>
#include <QPushButton>
#include <QLabel>
#include <QFont>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QString>
#include "mainwindow.h"
#include "segundaventana.h"
#include "calculadora.h"
//#include "tablaPeriodica.h"
#include "ui_segundaventana.h"
#include "ui_mainwindow.h"
#include "ui_calculadora.h"
#include <QCoreApplication>

//Funcion principal para activar las interacciones ejemplo(dar click a los botones)
SegundaVentana::SegundaVentana(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SegundaVentana){

        ui->setupUi(this);
        AlfabetoBox();
        MagnitudesBox();
        UnidadesBox();
        Unidades_Box();

        // Crear un objeto QFont
        QFont fuentePersonalizada;
        fuentePersonalizada.setFamily("Arial"); // Tipo de letra
        fuentePersonalizada.setPointSize(12);    // Tamaño
        fuentePersonalizada.setWeight(QFont::Bold); // Grosor (Bold, Normal, etc.)
        fuentePersonalizada.setItalic(true);     // Itálica
        ui->labelDescripcion->setWordWrap(true);
        ui->labelDescripcion->setAlignment(Qt::AlignLeft);

        // Aplicar al QLabel
        ui->labelDescripcion->setFont(fuentePersonalizada);
        descripciones["Alfa"] ="La primera letra del alfabeto griego es el alfa, que se escribe en mayúscula Α y en minúscula α.\n" "En griego antiguo se escribía ἄλφα (álpha) y en griego moderno άλφα (álfa).\n" "La combinación de alfa y omega (Α-Ω) se utiliza para indicar el principio y el fin.\n" "En el libro del Apocalipsis se usa para referirse a Jesucristo y a Dios.\n" "El alfabeto griego se utiliza en matemáticas, ciencias e ingeniería.";
        descripciones["Beta"] ="La beta es la segunda letra del alfabeto griego y se representa con la letra minúscula β y la mayúscula Β.\n" "En griego antiguo, representaba la consonante oclusiva bilabial sonora /b/.\n" "En griego medieval y moderno, representa la consonante fricativa labio-dental sonora /v/.\n" "En matemáticas y ciencias, las letras griegas como beta se usan para representar variables, ángulos o partículas.\n" "Por ejemplo, en física, alfa puede referirse a un ángulo, mientras que en matemáticas se usa para constantes";
        descripciones["Gamma"]="Es la tercera letra del alfabeto griego y corresponde a la letra (g) del alfabeto latino.\n" "En física, es una unidad de medida que equivale a una millonésima parte de un gramo.\n" "Se usa para medir cantidades muy pequeñas de un componente de una muestra.\n" "En matemáticas, ciencias e ingeniería, representa el peso específico de las sustancias, la función gamma inferior incompleta, o el tercer ángulo de un triángulo.";
        descripciones["Delta"]="Es la cuarta letra del alfabeto griego y corresponde a la (d) del alfabeto latino.\n" "Proviene de la letra fenicia (daleth) o (delt), que significa (puerta).\n" "En matemáticas, el delta es el símbolo que representa la diferencia entre dos valores de una magnitud.\n " "En física, el delta se utiliza para representar una diferencia en la medición. ";
        descripciones["Épsilon"]="Es la quinta letra del alfabeto griego y corresponde al sonido (e).\n" "En el sistema de numeración griego, épsilon tiene el valor cinco. \n" "En matemáticas y ciencias se utiliza para representar cantidades pequeñas o que tienden a cero.\n" "En física, se usa para representar el valor de la constante dieléctrica.\n" "En química se utiliza para referirse al coeficiente de extinción de una disolución.\n" "En geometría, se utiliza para nombrar puntos o planos.";
        descripciones["Dseta"]="Es la sexta letra del alfabeto griego y corresponde a la letra z en español.\n" "En griego antiguo se le llamaba zêta (ζῆτα) y en griego moderno zíta (ζήτα). \n" "Es la sexta letra del alfabeto griego.\n" "En el sistema de numeración griega tiene un valor de 7 (Ζ΄).\n " "Los romanos la adoptaron para transliterar palabras griegas que la incluyeran, como Zephyrus, zeugma o zeta. \n" "En español, corresponde a la z en algunas voces griegas, como zona o zeugma. ";
        descripciones["Eta"]="La letra Eta (η) es la séptima letra del alfabeto griego y representa el sonido de la vocal cerrada [i]. En mayúscula se escribe Η.\n " "En los primeros escritos griegos, la Eta representaba el sonido de la (h). \n" "En el griego clásico, representaba el sonido de la (e) larga. \n" "En física, la viscosidad dinámica η (η= «Eta») es una medida de la tenacidad o resistencia a la fluencia de un fluido. \n" "En mecánica estadística, η representa la función Eta del teorema H de Ludwig Boltzmann (teorema (Eta)). ";
        descripciones["Theta"]= "La letra theta (θ) es la octava letra del alfabeto griego. Se usa con frecuencia en matemáticas y física para representar ángulos.\n " "En trigonometría, se usa para indicar un ángulo desconocido en triángulos rectángulos.\n " "En matemáticas financieras, representa la sensibilidad al paso del tiempo.\n" "En modelos económicos, hace referencia al coeficiente de reservas de los bancos.";
        descripciones["Iota"]="La iota es la novena letra del alfabeto griego y se representa con las letras Ι (mayúscula) y ι (minúscula). Su sonido es [i] y corresponde a la letra (i) del alfabeto latino.\n " "En el sistema de numeración griega, la iota tiene un valor de 10 (Ι). \n" "La iota suscrita es un signo diacrítico que se escribe debajo de una vocal larga para representar una iota que desapareció en la pronunciación. ";
        descripciones["Kappa"]="Es la décima letra del alfabeto griego y corresponde a la k del alfabeto latino.\n" "En griego antiguo y moderno, la kappa representa el sonido [k].\n " "En matemáticas, ciencias exactas, e ingeniería, el alfabeto griego se utiliza para representar constantes, funciones especiales y variables. \n" "En análisis numérico, la kappa representa el número de condición de una matriz. ";
        descripciones["Lambda"]= "La letra griega lambda (λ) es la undécima letra del alfabeto griego.\n" "Se usa como símbolo y concepto en matemáticas, física, informática y medicina.\n" "En matemáticas, se usa para representar funciones, valores propios y ángulos.\n " "En física, se usa para representar la longitud de onda.\n" "En informática, se usa en lenguajes funcionales como Python o Lisp para definir funciones anónimas. ";
        descripciones["Mu"]="La letra griega mu es μ en minúscula y Μ en mayúscula.\n" "Es la duodécima letra del alfabeto griego.\n " "En teoría de números, la letra mu se utiliza para referirse a la función de Möbius. En probabilidad y estadística, se utiliza para referirse a la media o valor esperado de una distribución.\n" "En teoría de la medida, se utiliza para referirse a una medición. ";
        descripciones["Nu"]="La letra griega nu es Ν en mayúscula y ν en minúscula.\n" "Se utiliza en muchos ámbitos académicos y como símbolo en física, química, mecánica, entre otros.\n " "En física y química, representa la frecuencia de una onda.\n " "En física de partículas, se usa para denotar a los neutrinos.";
        descripciones["Xi"]="La letra xi (Ξ, ξ) es la decimocuarta letra del alfabeto griego.\n" "En griego antiguo se escribía ξ(ε)ῖ (x(e)î /ksêː, ksîː/) y en griego moderno ξι (xi /ksi/).\n " "Representa el sonido (x) en griego antiguo y moderno. \n" "En el sistema de numeración griego tiene un valor de 60 (Ξʹ). \n" "En matemáticas y ciencias se utiliza para describir las coordenadas y el coeficiente de salida. ";
        descripciones["Ómicron"]="Ómicron (Ο, ο) es la decimoquinta letra del alfabeto griego y corresponde a la (o) breve del alfabeto latino.\n " "La palabra (ómicron) fue inventada en la Edad Media para distinguirla de la omega, que en griego antiguo se pronunciaba como una (o) larga de apertura media.\n " "Su nombre proviene de la expresión griega ó mikrón, que significa (o pequeña).\n" "En el sistema de numeración griega, el ómicron tiene un valor de 70 (Οʹ).";
        descripciones["Pi"]="La letra griega pi (π) tiene varios usos, entre ellos, representar el perímetro, una consonante, un número y una notación matemática. \n" "La letra pi (π) es la primera letra de la palabra griega περιµετ ρoν, que significa perímetro. \n" "El número pi (π) es la relación entre la longitud de una circunferencia y su diámetro.\n" "El número pi (π) es un número irracional con infinitos decimales que no siguen ningún patrón.\n" "En matemáticas, la notación pi (π) se utiliza para denotar el producto de varios elementos.";
        descripciones["Rho"]="La letra griega rho (ρ) es la decimoséptima letra del alfabeto griego.\n" "En el sistema de numeración griego, tiene un valor de 100.\n " "En matemáticas, la letra rho se usa para simbolizar el radio en el sistema de coordenadas polares.\n " "En mecánica de medios continuos, la letra rho se usa para simbolizar la densidad de un material. \n" "En física y matemáticas, la letra rho se usa para simbolizar la densidad en ecuaciones y fórmulas.";
        descripciones["Sigma"]="La letra griega sigma (Σ) es la decimoctava letra del alfabeto griego y equivale a la letra (S) del alfabeto latino.\n" "La sigma mayúscula (Σ) se usa para la notación de suma\n." "La sigma minúscula (σ) se usa para representar la desviación estándar.\n " "La sigma minúscula tiene dos formas: σ al inicio y en medio de palabra, y ς al final de palabra. \n" "En matemáticas, la sigma se usa para simplificar series complejas y calcular y analizar grandes conjuntos de datos. ";
        descripciones["Tau"]="La tau (Τ) es la decimonovena letra del alfabeto griego. En minúscula se escribe τ. \n" "En el sistema de numeración griego, la tau tiene un valor de 300 (Τʹ)\n" "Tau (2π) es una constante matemática que representa la relación entre la circunferencia de un círculo y su radio.\n" "Es aproximadamente igual a 6,283185.\n" "Simplifica muchas ecuaciones matemáticas.\n" "Algunos la consideran más intuitiva que Pi (π).";
        descripciones["Ípsilon"]="La letra griega épsilon (ε) es la quinta letra del alfabeto griego y corresponde al sonido (e).\n" "En el sistema de numeración griego, épsilon tiene el valor cinco. \n" "La mayúscula de épsilon es Ε\n" "La minúscula de épsilon es ε o ϵ\n" "En matemáticas y ciencias se utiliza para representar cantidades pequeñas o que tienden a cero.\n" "En física, se usa para representar el valor de la constante dieléctrica.\n" "En química se utiliza para referirse al coeficiente de extinción de una disolución.";
        descripciones["Fi"]="La letra griega phi (Φ, φ) es la vigésima primera letra del alfabeto griego.\n" "Es una letra que se asocia con la proporción áurea, la filosofía y el amor al conocimiento. \n" "En el sistema de numeración griego, phi tiene un valor de 500 (φʹ).\n " "En griego moderno se pronuncia como φέτα (feta queso). \n" "En latín, los romanos transliteraron esta letra como el dígrafo ph, que representaba el sonido de p aspirada que tenía en griego antiguo. \n" "Se asocia con la secuencia de Fibonacci, una serie numérica en la que cada nueva cifra es la suma de las dos últimas. ";
        descripciones["Ji"]="La letra ji (Χ, χ) es la vigesimosegunda letra del alfabeto griego y corresponde a la ji del alfabeto latino.\n ""En probabilidad y estadística, la distribución de Pearson o ji-cuadrado (χ²) \n" "En el sistema de numeración griego, tiene un valor de 600 (χʹ)\n ";
        descripciones["Psi"]="El psi (Ψ, ψ) es la vigesimotercera letra del alfabeto griego.\n Es un símbolo que se asocia con la psicología y la psiquiatría.\n " "En física, el psi es el símbolo de la función de onda en la mecánica cuántica.\n " "En matemáticas, el psi se usa para la segunda función de Chebyshev. \n" "En bioquímica, el psi designa a la pseudouridina, un nucleósido poco común. \n" "En virología, el sitio psi es una señal de empaquetamiento viral. ";
        descripciones["Omega"]="La omega (Ω, ω) es la vigesimocuarta y última letra del alfabeto griego. Su nombre proviene del griego ô méga (ω μεγα), que significa (o grande).\n " "En química, se dice de un ácido graso que es insaturado y con posibles efectos beneficiosos para la salud. \n" "El ohmio (Ω), unidad derivada de resistencia eléctrica en el Sistema Internacional de Unidades, también lleva el nombre de omega.\n " "En griego antiguo se pronunciaba como una (o) larga de apertura media.\n ""En griego moderno sigue representando la (o), pero ya no hay diferencia entre vocales largas y cortas. ";

        connect(ui->BuscarButton, &QPushButton::clicked, this, &SegundaVentana::on_BuscarButton_clicked);
        connect(ui->ActualizarButton_2, &QPushButton::clicked, this, &SegundaVentana::on_ActualizarButton_2_clicked);

        Lineas_csv = Leer_archivo_csv(ruta_archivo_csv); // Aqui ponemos la variable que tendra la ruta del archivo
        conectar_botones();
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

//funcion menu para mostrar el alfabeto griego
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

//Funcion para activar el uso de botones
void SegundaVentana::on_BuscarButton_clicked(){
    QString seleccion = ui->AlfabetoBox->currentText();

    // Extraer el nombre de la letra (ej: "Alfa" de "Α    α    Alfa")
    QString clave = seleccion.split("\t").last().trimmed();

    // Buscar la descripción
    QString descripcion = descripciones.value(clave, "Descripción no disponible.");

    //Mostrar en el QLabel dentro del GroupBox (asegúrate de que se llama "labelDescripcion");
    ui->labelDescripcion->setText(descripcion);
}

/*void SegundaVentana::MostrarAlafabeto(){
    ui->TablaTab->setCurrentIndex(1);
}*/

//Funcion boton alfabeto griego
void SegundaVentana::on_AlfabetoButton_clicked(){
    connect(ui->AlfabetoButton, &QPushButton::clicked, this, &SegundaVentana::on_AlfabetoButton_clicked);
}

//Conversor de Unidades

//-------------------------------------------------------------------------
//Funcion mostrar magnitudes
void SegundaVentana::MagnitudesBox(){
    getMagnitudesList();
    ui->MagnitudesBox->addItems(MagnitudesList);
}

//Funcion lista magnitudes
void SegundaVentana::getMagnitudesList(){
    MagnitudesList = {
        "Longitud",
        "Masa",
        "Temperatura",
        "Volumen",
        "Area",
        "Presión",
        "Tiempo",
        "Velocidad",
    };
}

//--------------------------------------------------------------------------

//funcion Unidades de Logitud
void SegundaVentana::UnidadesBox(){
    getUnidadesLongitudList();
    ui->UnidadesBox->addItems(UnidadesListLongitud);
}

//Fuciond salida de logitud
void SegundaVentana::Unidades_Box(){
    getUnidadesLongitudList();
    ui->Unidades_Box->addItems(UnidadesListLongitud );
}

//------------------------------------------------------------------------------

void SegundaVentana::on_ActualizarButton_2_clicked(){
    QString magnitud = ui->MagnitudesBox->currentText();

    // Limpia los comboboxes
    ui->UnidadesBox->clear();
    ui->Unidades_Box->clear();

    // Selecciona la lista correspondiente
    if(magnitud == "Longitud"){
        getUnidadesLongitudList();
        ui->UnidadesBox->addItems(UnidadesListLongitud);
        ui->Unidades_Box->addItems(UnidadesListLongitud);
    }else if(magnitud == "Masa"){
        getUnidadesMasaList();
        ui->UnidadesBox->addItems(UnidadesListMasa);
        ui->Unidades_Box->addItems(UnidadesListMasa);
    }else if(magnitud == "Temperatura"){
        getUnidadesTemperaturaList();
        ui->UnidadesBox->addItems(UnidadesListTemperatura);
        ui->Unidades_Box->addItems(UnidadesListTemperatura);
    }else if(magnitud == "Volumen"){
        getUnidadesVolumenList();
        ui->UnidadesBox->addItems(UnidadesListVolumen);
        ui->Unidades_Box->addItems(UnidadesListVolumen);
    }else if(magnitud == "Area"){
        getUnidadesAreaList();
        ui->UnidadesBox->addItems(UnidadesListArea);
        ui->Unidades_Box->addItems(UnidadesListArea);
    }else if(magnitud == "Presión"){
        getUnidadesPresionList();
        ui->UnidadesBox->addItems(UnidadesListPresion);
        ui->Unidades_Box->addItems(UnidadesListPresion);
    }else if(magnitud == "Tiempo"){
        getUnidadesTiempoList();
        ui->UnidadesBox->addItems(UnidadesListTiempo);
        ui->Unidades_Box->addItems(UnidadesListTiempo);
    }else if(magnitud == "Velocidad"){
        getUnidadesVelocidadList();
        ui->UnidadesBox->addItems(UnidadesListVelocidad);
        ui->Unidades_Box->addItems(UnidadesListVelocidad);
    }else{
        QMessageBox::warning(this, "Advertencia", "Magnitud no implementada");
    }
}

//-----------------------------------------------------------------------------

//Funcion mostrar la lista de las unidades de longitud
void SegundaVentana::getUnidadesLongitudList(){
    UnidadesListLongitud = {
        "Milimetro",
        "Cetimetro",
        "Decimetro",
        "Metro",
        "Decametro",
        "Hectametro",
        "Kilometro",
        "Pulgada",
        "Pie",
        "Yardas",
        "Millas"
    };
}
//---------------------------------------------------------------------------

//Funcion mostrar la lista de las unidades de Masa
void SegundaVentana::getUnidadesMasaList(){
    UnidadesListMasa = {
    "Microgramo",
    "Miligramo",
    "Gramo",
    "Kiligramo"
    "Tonelada"
    };
}

//------------------------------------------------------------------------------

//Funcion mostrar lista de las unidades de Temperatura
void SegundaVentana::getUnidadesTemperaturaList(){
    UnidadesListTemperatura = {
    "Grados Celsius",
    "Grados Fahrenheit",
    "Kelvin"
    };
}

//--------------------------------------------------------------------------------

//Funcion mostrar lista de las unidades de volumen
void SegundaVentana::getUnidadesVolumenList(){
    UnidadesListVolumen = {
    "Litro",
    "Metro Cubico",
    "Mini Litro",
    "Pie Cubico",
    "Pulgada Cubica"
    };
}

//--------------------------------------------------------------------------------

//Funcion mostrar lista de las unidades de Area
void SegundaVentana::getUnidadesAreaList(){
    UnidadesListArea = {
    "Metro Cuadrado",
    "Kilometro Cuadrado",
    "Milla Cuadrada",
    "Yarda Cuadrada",
    "Pie Cuadrado",
    "Pulgada Cuadrada"
    };
}
//------------------------------------------------------------------------------
//Funcion mostrar lista de las unidades de Presion
void SegundaVentana::getUnidadesPresionList(){
    UnidadesListPresion = {
    "Atmosfera",
    "Bar",
    "Pascal",
    "Thorr",
    "Libra por Pulgada Cuadrada"
    };
}

//---------------------------------------------------------------------------------

//Funcion mostrar lista de las unidades de Tiempo
void SegundaVentana::getUnidadesTiempoList(){
    UnidadesListTiempo = {
    "Micro Segundo",
    "Mili Segundo",
    "Segundo",
    "Minuto",
    "Hora",
    "Día",
    "Semana"
    "Mes",
    "Año"
    };
}
//--------------------------------------------------------------------------------
//Funcion mostrar lista de las unidades de Velocidad
void SegundaVentana::getUnidadesVelocidadList(){
    UnidadesListVelocidad = {
    "Milla por hora",
    "Pie por Segundo",
    "Metro por Segundo",
    "Kilometro por Hora",
    "Nudo"
    };
}
//----------------------------------------------------------------------------------

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

    }
}
