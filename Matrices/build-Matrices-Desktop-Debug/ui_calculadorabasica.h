/********************************************************************************
** Form generated from reading UI file 'calculadorabasica.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULADORABASICA_H
#define UI_CALCULADORABASICA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculadoraBasica
{
public:
    QPushButton *Cal_Btt_goToIni;
    QLabel *Cal_lbl_1;
    QLabel *Cal_lbl_2;
    QLabel *Cal_lbl_3;
    QLineEdit *Cal_ledit_Num1;
    QLineEdit *Cal_ledit_Num2;
    QLineEdit *Cal_ledit_cal;
    QComboBox *Cal_comB;
    QPushButton *Cal_Btt_calSuma;
    QPushButton *Cal_Btt_goToIni_3;
    QPushButton *Cal_Btt_calResta;

    void setupUi(QWidget *CalculadoraBasica)
    {
        if (CalculadoraBasica->objectName().isEmpty())
            CalculadoraBasica->setObjectName(QStringLiteral("CalculadoraBasica"));
        CalculadoraBasica->resize(400, 300);
        Cal_Btt_goToIni = new QPushButton(CalculadoraBasica);
        Cal_Btt_goToIni->setObjectName(QStringLiteral("Cal_Btt_goToIni"));
        Cal_Btt_goToIni->setGeometry(QRect(290, 230, 80, 23));
        Cal_lbl_1 = new QLabel(CalculadoraBasica);
        Cal_lbl_1->setObjectName(QStringLiteral("Cal_lbl_1"));
        Cal_lbl_1->setGeometry(QRect(30, 20, 301, 31));
        QFont font;
        font.setFamily(QStringLiteral("Sans Serif"));
        font.setPointSize(22);
        font.setUnderline(true);
        Cal_lbl_1->setFont(font);
        Cal_lbl_2 = new QLabel(CalculadoraBasica);
        Cal_lbl_2->setObjectName(QStringLiteral("Cal_lbl_2"));
        Cal_lbl_2->setGeometry(QRect(40, 100, 59, 15));
        Cal_lbl_3 = new QLabel(CalculadoraBasica);
        Cal_lbl_3->setObjectName(QStringLiteral("Cal_lbl_3"));
        Cal_lbl_3->setGeometry(QRect(40, 130, 59, 15));
        Cal_ledit_Num1 = new QLineEdit(CalculadoraBasica);
        Cal_ledit_Num1->setObjectName(QStringLiteral("Cal_ledit_Num1"));
        Cal_ledit_Num1->setGeometry(QRect(100, 100, 71, 23));
        Cal_ledit_Num2 = new QLineEdit(CalculadoraBasica);
        Cal_ledit_Num2->setObjectName(QStringLiteral("Cal_ledit_Num2"));
        Cal_ledit_Num2->setGeometry(QRect(100, 130, 71, 23));
        Cal_ledit_cal = new QLineEdit(CalculadoraBasica);
        Cal_ledit_cal->setObjectName(QStringLiteral("Cal_ledit_cal"));
        Cal_ledit_cal->setGeometry(QRect(40, 190, 131, 23));
        QFont font1;
        font1.setFamily(QStringLiteral("Source Code Pro"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        Cal_ledit_cal->setFont(font1);
        Cal_ledit_cal->setStyleSheet(QStringLiteral("color: rgb(170, 177, 165);"));
        Cal_comB = new QComboBox(CalculadoraBasica);
        Cal_comB->setObjectName(QStringLiteral("Cal_comB"));
        Cal_comB->setGeometry(QRect(180, 190, 79, 23));
        Cal_Btt_calSuma = new QPushButton(CalculadoraBasica);
        Cal_Btt_calSuma->setObjectName(QStringLiteral("Cal_Btt_calSuma"));
        Cal_Btt_calSuma->setGeometry(QRect(40, 160, 41, 23));
        QFont font2;
        font2.setPointSize(7);
        Cal_Btt_calSuma->setFont(font2);
        Cal_Btt_goToIni_3 = new QPushButton(CalculadoraBasica);
        Cal_Btt_goToIni_3->setObjectName(QStringLiteral("Cal_Btt_goToIni_3"));
        Cal_Btt_goToIni_3->setGeometry(QRect(40, 220, 80, 23));
        Cal_Btt_calResta = new QPushButton(CalculadoraBasica);
        Cal_Btt_calResta->setObjectName(QStringLiteral("Cal_Btt_calResta"));
        Cal_Btt_calResta->setGeometry(QRect(90, 160, 41, 23));
        Cal_Btt_calResta->setFont(font2);

        retranslateUi(CalculadoraBasica);
        QObject::connect(Cal_Btt_goToIni_3, SIGNAL(clicked()), Cal_ledit_cal, SLOT(clear()));

        QMetaObject::connectSlotsByName(CalculadoraBasica);
    } // setupUi

    void retranslateUi(QWidget *CalculadoraBasica)
    {
        CalculadoraBasica->setWindowTitle(QApplication::translate("CalculadoraBasica", "Form", Q_NULLPTR));
        Cal_Btt_goToIni->setText(QApplication::translate("CalculadoraBasica", "Ir a Inicio", Q_NULLPTR));
        Cal_lbl_1->setText(QApplication::translate("CalculadoraBasica", "Calculadora B\303\241sica", Q_NULLPTR));
        Cal_lbl_2->setText(QApplication::translate("CalculadoraBasica", "N\303\272mero", Q_NULLPTR));
        Cal_lbl_3->setText(QApplication::translate("CalculadoraBasica", "N\303\272mero", Q_NULLPTR));
        Cal_comB->clear();
        Cal_comB->insertItems(0, QStringList()
         << QApplication::translate("CalculadoraBasica", "Suma", Q_NULLPTR)
         << QApplication::translate("CalculadoraBasica", "Resta", Q_NULLPTR)
         << QApplication::translate("CalculadoraBasica", "Divisi\303\263n", Q_NULLPTR)
         << QApplication::translate("CalculadoraBasica", "Multiplicaci\303\263n", Q_NULLPTR)
        );
        Cal_Btt_calSuma->setText(QApplication::translate("CalculadoraBasica", "Suma", Q_NULLPTR));
        Cal_Btt_goToIni_3->setText(QApplication::translate("CalculadoraBasica", "Limpiar", Q_NULLPTR));
        Cal_Btt_calResta->setText(QApplication::translate("CalculadoraBasica", "Resta", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CalculadoraBasica: public Ui_CalculadoraBasica {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULADORABASICA_H
