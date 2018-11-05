#ifndef CALCULADORABASICA_H
#define CALCULADORABASICA_H

#include <QWidget>

namespace Ui {
class CalculadoraBasica;
}

class CalculadoraBasica : public QWidget
{
    Q_OBJECT

public:
    explicit CalculadoraBasica(QWidget *parent = 0);
    ~CalculadoraBasica();

private slots:
    void on_Cal_Btt_goToIni_clicked();

    void on_Cal_Btt_calSuma_clicked();

    void on_Cal_Btt_calResta_clicked();

private:
    Ui::CalculadoraBasica *ui;
};

#endif // CALCULADORABASICA_H
