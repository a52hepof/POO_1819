#include "matrices.h"
#include "ui_matrices.h"
#include "inicio.h"
#include <numerorealspinboxdelegate.h>
#include <QStandardItemModel>
#include <rangomatriz.h>
#include <QDialog>


Matrices::Matrices(QWidget *parent):QWidget(parent),ui(new Ui::Matrices)
{
    ui->setupUi(this);

    mModelA = new QStandardItemModel(this);
    mModelB = new QStandardItemModel(this);
    mModelResultado = new QStandardItemModel(this);
    ui->MatrizA->setModel(mModelA);
    ui->MatrizB->setModel(mModelB);
    ui->MatrizResultado->setModel(mModelResultado);
    ui->MatrizA->setItemDelegate(new NumeroRealSpinBoxDelegate(this));
    ui->MatrizB->setItemDelegate(new NumeroRealSpinBoxDelegate(this));
    // a la matriz resultado no se le asigna el NumeroRealSpinBoxDelegate porque no se meten los datos, se calculan
    ui->MatrizA->resizeColumnsToContents();
    ui->MatrizA->resizeRowsToContents();

}

Matrices::~Matrices()
{
    delete ui;
}

void Matrices::on_Mat_Btt_gToIni_clicked()
{
    Inicio*Matrices=new Inicio();
    Matrices->show();
    close();
}

void Matrices::on_Mat_Btt_IntMatr_clicked()
{
    mModelA->clear();
    mModelB->clear();
    mModelResultado->clear();


    RangoMatriz d(this);

   //if(d.exec()== QDialog::Rejected){
   //   return;
    //}
    const int rowCount=d.getNumeroFilas();
    const int colCount=d.getNumeroColumnas();
    mModelA->setRowCount(rowCount);
    mModelA->setColumnCount(colCount);
    mModelB->setRowCount(rowCount);
    mModelB->setColumnCount(colCount);

}

void Matrices::on_Mat_Btt_SumMat_clicked()
{
    const int rowCount=mModelA->rowCount();
    const int colCount=mModelA->columnCount();

    mModelResultado->setRowCount(rowCount);
    mModelResultado->setColumnCount(colCount);

    for( int i=0; i<rowCount;i++){
        for (int j=0; j<colCount;j++){
          const double aij=getValueAt(mModelA, i, j);
          const double bij=getValueAt(mModelB, i, j);
          const double rij=aij+bij;
          mModelResultado->setItem(i, j, new QStandardItem(QString::number(rij)));
        }

    }

}

int Matrices::getValueAt(QStandardItemModel *model, int fila, int columna) const{

    auto item=model->item(fila, columna);
    if(!item){
        return 0;
    }
    return item->text().toDouble();

}

void Matrices::on_NFilasSpinBoxA_valueChanged(int arg1)
{

    mModelA->setRowCount(arg1);
    ui->MatrizA->resizeRowsToContents();
   // ui->MatrizA->resizeRowsToContents();
}

void Matrices::on_NColumnasSpinBoxA_valueChanged(int arg1)
{


    mModelA->setColumnCount(arg1);
    ui->MatrizA->resizeColumnsToContents();
    //ui->MatrizA->resizeColumnsToContents();
}

void Matrices::on_NFilasSpinBoxB_2_valueChanged(int arg1)
{
    mModelB->setRowCount(arg1);
    ui->MatrizB->resizeRowsToContents();





}

void Matrices::on_NFilasSpinBoxB_valueChanged(int arg1)
{
    mModelB->setColumnCount(arg1);
    ui->MatrizB->resizeColumnsToContents();


}

void Matrices::on_Mat_Btt_SumMat_2_clicked()
{
    const int rowCount=mModelA->rowCount();
    const int colCount=mModelA->columnCount();
    mModelResultado->setRowCount(rowCount);
    mModelResultado->setColumnCount(colCount);
    for( int i=0; i<rowCount;i++){
        for (int j=0; j<colCount;j++){
          const double aij=getValueAt(mModelA, i, j);
          const double bij=getValueAt(mModelB, i, j);
          const double rij=aij-bij;
          mModelResultado->setItem(i, j, new QStandardItem(QString::number(rij)));
        }

    }
}

void Matrices::on_NFilasSpinBoxA_editingFinished()
{
    ui->MatrizA->resizeColumnsToContents();

}

void Matrices::on_Mat_Btt_gToIni_2_clicked()
{
     ui->MatrizA->resizeColumnsToContents();
     ui->MatrizA->resizeRowsToContents();
     ui->MatrizB->resizeColumnsToContents();
     ui->MatrizB->resizeRowsToContents();
}
