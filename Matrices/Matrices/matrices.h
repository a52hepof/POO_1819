#ifndef MATRICES_H
#define MATRICES_H

#include <QWidget>
#include <QStandardItemModel>



namespace Ui {
class Matrices;
}

class QStandardItemModel;

class Matrices : public QWidget
{
    Q_OBJECT

public:
    explicit Matrices(QWidget *parent = 0);
    ~Matrices();

private slots:
    void on_Mat_Btt_gToIni_clicked();

    void on_Mat_Btt_IntMatr_clicked();

    void on_Mat_Btt_SumMat_clicked();

    void on_NFilasSpinBoxA_valueChanged(int arg1);

    void on_NColumnasSpinBoxA_valueChanged(int arg1);

    void on_NFilasSpinBoxB_2_valueChanged(int arg1);

    void on_NFilasSpinBoxB_valueChanged(int arg1);

    void on_Mat_Btt_SumMat_2_clicked();

    void on_NFilasSpinBoxA_editingFinished();

    void on_Mat_Btt_gToIni_2_clicked();

private:
    int getValueAt(QStandardItemModel *model, int fila, int columna) const;
    Ui::Matrices *ui;
    QStandardItemModel *mModelA;
    QStandardItemModel *mModelB;
    QStandardItemModel *mModelResultado;
};

#endif // MATRICES_H
