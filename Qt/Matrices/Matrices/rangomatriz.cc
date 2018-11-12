#include "rangomatriz.h"
#include "ui_rangomatriz.h"
#include <QDialog>
#include <QApplication>


RangoMatriz::RangoMatriz(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RangoMatriz)
{
    ui->setupUi(this);
    setWindowTitle("Rango de las matrices");
    ui->RngM_spinBox_columnas->setMinimum(1);
    ui->RngM_spinBox_columnas->setMaximum(INT_MAX);
    ui->RngM_spinBox_filas->setMinimum(1);
    ui->RngM_spinBox_filas->setMaximum(INT_MAX);
}

RangoMatriz::~RangoMatriz()
{
    delete ui;
}

void RangoMatriz::on_RngM_pushButton_ok_clicked()
{

}

void RangoMatriz::on_RngM_pushButton_cancel_clicked()
{

    close();
}

int RangoMatriz::getNumeroFilas(){

    return ui->RngM_spinBox_filas->value();
}


int RangoMatriz::getNumeroColumnas(){
    return ui->RngM_spinBox_columnas->value();


}

