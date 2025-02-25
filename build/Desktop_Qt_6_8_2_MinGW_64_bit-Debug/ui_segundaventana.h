/********************************************************************************
** Form generated from reading UI file 'segundaventana.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEGUNDAVENTANA_H
#define UI_SEGUNDAVENTANA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SegundaVentana
{
public:
    QLabel *label;
    QComboBox *FormularioBox;
    QPushButton *CalculadoraButton;
    QLabel *label_2;
    QPushButton *AlfabetoButton;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_11;
    QTabWidget *PageWidget;
    QWidget *tabWidgetPage1;
    QComboBox *AlfabetoBox;
    QPushButton *pushButton;
    QLabel *label_4;
    QGroupBox *groupBox;
    QWidget *tabWidgetPage2;

    void setupUi(QDialog *SegundaVentana)
    {
        if (SegundaVentana->objectName().isEmpty())
            SegundaVentana->setObjectName("SegundaVentana");
        SegundaVentana->resize(840, 423);
        QFont font;
        font.setFamilies({QString::fromUtf8("Sitka")});
        font.setPointSize(12);
        SegundaVentana->setFont(font);
        SegundaVentana->setAcceptDrops(true);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Img/klipartz.com (1).png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        SegundaVentana->setWindowIcon(icon);
        SegundaVentana->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        SegundaVentana->setAutoFillBackground(false);
        SegundaVentana->setStyleSheet(QString::fromUtf8("background-color: rgb(1, 63, 100);"));
        SegundaVentana->setSizeGripEnabled(false);
        SegundaVentana->setModal(false);
        label = new QLabel(SegundaVentana);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 10, 241, 381));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        FormularioBox = new QComboBox(SegundaVentana);
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::FormatJustifyLeft));
        FormularioBox->addItem(icon1, QString());
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Img/klipartz.com.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        FormularioBox->addItem(icon2, QString());
        FormularioBox->addItem(icon, QString());
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Img/klipartz.com (2).png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        FormularioBox->addItem(icon3, QString());
        FormularioBox->setObjectName("FormularioBox");
        FormularioBox->setGeometry(QRect(0, 14, 241, 41));
        FormularioBox->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 0, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Sitka\";"));
        FormularioBox->setCurrentText(QString::fromUtf8("Formulario"));
        FormularioBox->setMaxVisibleItems(10);
        FormularioBox->setInsertPolicy(QComboBox::InsertPolicy::NoInsert);
        FormularioBox->setPlaceholderText(QString::fromUtf8(""));
        FormularioBox->setDuplicatesEnabled(false);
        FormularioBox->setFrame(false);
        CalculadoraButton = new QPushButton(SegundaVentana);
        CalculadoraButton->setObjectName("CalculadoraButton");
        CalculadoraButton->setGeometry(QRect(0, 65, 241, 41));
        CalculadoraButton->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 190, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Sitka\";"));
        label_2 = new QLabel(SegundaVentana);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 70, 45, 31));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(none);\n"
"image: url(:/Img/klipartz.com (3).png);"));
        AlfabetoButton = new QPushButton(SegundaVentana);
        AlfabetoButton->setObjectName("AlfabetoButton");
        AlfabetoButton->setGeometry(QRect(0, 118, 241, 41));
        AlfabetoButton->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 190, 0);\n"
"background-color: rgb(106, 103, 5);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Sitka\";"));
        label_3 = new QLabel(SegundaVentana);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 129, 39, 21));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(none);\n"
"image: url(:/Img/klipartz.com (4).png);"));
        pushButton_3 = new QPushButton(SegundaVentana);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(0, 174, 241, 41));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 83, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Sitka\";"));
        pushButton_4 = new QPushButton(SegundaVentana);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(0, 229, 241, 41));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(129, 43, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Sitka\";"));
        pushButton_5 = new QPushButton(SegundaVentana);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setGeometry(QRect(0, 286, 241, 41));
        pushButton_5->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 190, 0);\n"
"background-color: rgb(75, 0, 112);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Sitka\";"));
        pushButton_6 = new QPushButton(SegundaVentana);
        pushButton_6->setObjectName("pushButton_6");
        pushButton_6->setGeometry(QRect(0, 340, 241, 41));
        pushButton_6->setStyleSheet(QString::fromUtf8("background-color: rgb(190, 190, 0);\n"
"background-color: rgb(0, 0, 100);\n"
"color: rgb(255, 255, 255);\n"
"font: 12pt \"Sitka\";"));
        label_6 = new QLabel(SegundaVentana);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(9, 180, 51, 31));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(none);\n"
"image: url(:/Img/klipartz.com (7).png);"));
        label_7 = new QLabel(SegundaVentana);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(-7, 230, 51, 31));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(none);\n"
"image: url(:/Img/klipartz.com (8).png);"));
        label_9 = new QLabel(SegundaVentana);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(-6, 290, 41, 31));
        label_9->setStyleSheet(QString::fromUtf8("background-color: rgb(none);\n"
"image: url(:/Img/klipartz.com (9).png);"));
        label_11 = new QLabel(SegundaVentana);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 347, 21, 21));
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgb(none);\n"
"color: rgb(0, 0, 0);\n"
"font: 900 15pt \"Segoe UI\";"));
        PageWidget = new QTabWidget(SegundaVentana);
        PageWidget->setObjectName("PageWidget");
        PageWidget->setEnabled(true);
        PageWidget->setGeometry(QRect(250, 10, 621, 381));
        PageWidget->setTabletTracking(false);
        PageWidget->setFocusPolicy(Qt::FocusPolicy::TabFocus);
        PageWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        PageWidget->setTabPosition(QTabWidget::TabPosition::North);
        tabWidgetPage1 = new QWidget();
        tabWidgetPage1->setObjectName("tabWidgetPage1");
        AlfabetoBox = new QComboBox(tabWidgetPage1);
        AlfabetoBox->setObjectName("AlfabetoBox");
        AlfabetoBox->setGeometry(QRect(50, 0, 441, 21));
        AlfabetoBox->setStyleSheet(QString::fromUtf8("font: 16pt \"SimSun\";\n"
"color: rgb(255, 255, 255);\n"
"background-color: rgb(68, 68, 68);"));
        pushButton = new QPushButton(tabWidgetPage1);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(500, 0, 80, 24));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(68, 68, 68);\n"
"color: rgb(255, 255, 255);"));
        label_4 = new QLabel(tabWidgetPage1);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(4, 3, 49, 16));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(none);\n"
"font: 11pt \"SimSun\";"));
        groupBox = new QGroupBox(tabWidgetPage1);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(4, 70, 581, 303));
        PageWidget->addTab(tabWidgetPage1, QString());
        tabWidgetPage2 = new QWidget();
        tabWidgetPage2->setObjectName("tabWidgetPage2");
        PageWidget->addTab(tabWidgetPage2, QString());

        retranslateUi(SegundaVentana);

        PageWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SegundaVentana);
    } // setupUi

    void retranslateUi(QDialog *SegundaVentana)
    {
        SegundaVentana->setWindowTitle(QCoreApplication::translate("SegundaVentana", "IngeniX", nullptr));
        label->setText(QString());
        FormularioBox->setItemText(0, QCoreApplication::translate("SegundaVentana", "Formulario", nullptr));
        FormularioBox->setItemText(1, QCoreApplication::translate("SegundaVentana", "Calculo", nullptr));
        FormularioBox->setItemText(2, QCoreApplication::translate("SegundaVentana", "Fisica", nullptr));
        FormularioBox->setItemText(3, QCoreApplication::translate("SegundaVentana", "Quimica", nullptr));

        CalculadoraButton->setText(QCoreApplication::translate("SegundaVentana", "Calculadora", nullptr));
        label_2->setText(QString());
        AlfabetoButton->setText(QCoreApplication::translate("SegundaVentana", "Alfabeto griego", nullptr));
        label_3->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("SegundaVentana", "Tabla per\303\255odica", nullptr));
        pushButton_4->setText(QCoreApplication::translate("SegundaVentana", "Medidor de unidades", nullptr));
        pushButton_5->setText(QCoreApplication::translate("SegundaVentana", "Conversor de unidades", nullptr));
        pushButton_6->setText(QCoreApplication::translate("SegundaVentana", "Prefijos de potencia", nullptr));
        label_6->setText(QString());
        label_7->setText(QString());
        label_9->setText(QString());
        label_11->setText(QCoreApplication::translate("SegundaVentana", "10", nullptr));
        pushButton->setText(QCoreApplication::translate("SegundaVentana", "Buscar", nullptr));
        label_4->setText(QCoreApplication::translate("SegundaVentana", "Letra", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SegundaVentana", "Descripci\303\263n", nullptr));
        PageWidget->setTabText(PageWidget->indexOf(tabWidgetPage1), QString());
        PageWidget->setTabText(PageWidget->indexOf(tabWidgetPage2), QString());
    } // retranslateUi

};

namespace Ui {
    class SegundaVentana: public Ui_SegundaVentana {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEGUNDAVENTANA_H
