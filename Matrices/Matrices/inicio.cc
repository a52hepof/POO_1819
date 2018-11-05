#include "inicio.h"
#include "ui_inicio.h"
#include <iostream>
#include "matrices.h"
#include "calculadorabasica.h"

using namespace std;

Inicio::Inicio(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Inicio)
{
    ui->setupUi(this);
}

Inicio::~Inicio()
{
    delete ui;
}

void Inicio::on_Inicio_Btt_Exit_clicked(){
    //sleep(1);
    cout<<"el programa saldrá después de pulsar una tecla"<<endl;//muestra por linea de comandos, no muestra mensaje
}

void Inicio::on_Ini_Btt_goToMat_clicked()
{
    Matrices*Inicio=new Matrices();
    Inicio->show();
    close();
}

void Inicio::on_Ini_Btt_goToCal_clicked()
{
    CalculadoraBasica*Inicio=new CalculadoraBasica();
    Inicio->show();
    close();
}
