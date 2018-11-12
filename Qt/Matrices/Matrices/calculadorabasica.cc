#include "calculadorabasica.h"
#include "ui_calculadorabasica.h"
#include "inicio.h"
#include "string"
#include "QString"

#include <QMessageBox>
#include "iostream"

using namespace  std;


CalculadoraBasica::CalculadoraBasica(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CalculadoraBasica)
{
    ui->setupUi(this);
}

CalculadoraBasica::~CalculadoraBasica()
{
    delete ui;
}

void CalculadoraBasica::on_Cal_Btt_goToIni_clicked()
{
    Inicio*CalculadoraBasica =new Inicio();
    CalculadoraBasica->show();
    close();
}

void CalculadoraBasica::on_Cal_Btt_calSuma_clicked(){
    int numero1, numero2, suma;
    numero1=ui->Cal_ledit_Num1->text().toInt();
    numero2=ui->Cal_ledit_Num2->text().toInt();
    if (numero1<10){
        QMessageBox::critical(this, "Atención","el número ha de ser mayor que 10");
        suma=0;
    }
    else{
         suma=numero1+numero2;
    }
    ui->Cal_ledit_cal->setText(QString::number(suma));

}

void CalculadoraBasica::on_Cal_Btt_calResta_clicked()
{
    int numero1, numero2, resta;
    numero1=ui->Cal_ledit_Num1->text().toInt();
    numero2=ui->Cal_ledit_Num2->text().toInt();
    resta=numero1-numero2;
    ui->Cal_ledit_cal->setText(QString::number(resta));
}
