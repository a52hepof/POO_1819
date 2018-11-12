#ifndef RANGOMATRIZ_H
#define RANGOMATRIZ_H

#include <QWidget>
#include <QApplication>
#include "inicio.h"


namespace Ui {
class RangoMatriz;
}

class RangoMatriz : public QWidget
{
    Q_OBJECT

public:
    explicit RangoMatriz(QWidget *parent = nullptr);
    ~RangoMatriz();
    int getNumeroFilas();
    int getNumeroColumnas();

private slots:
    void on_RngM_pushButton_ok_clicked();

    void on_RngM_pushButton_cancel_clicked();

private:
    Ui::RangoMatriz *ui;
};

#endif // RANGOMATRIZ_H
