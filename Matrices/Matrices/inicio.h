#ifndef INICIO_H
#define INICIO_H

#include <QMainWindow>

namespace Ui {
class Inicio;
}

class Inicio : public QMainWindow
{
    Q_OBJECT

public:
    explicit Inicio(QWidget *parent = 0);
    ~Inicio();

private slots:
    void on_Inicio_Btt_Exit_clicked();

    void on_Ini_Btt_goToMat_clicked();

    void on_Ini_Btt_goToCal_clicked();

private:
    Ui::Inicio *ui;
};

#endif // INICIO_H
