#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class QStandardItemModel;

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_MultiplicarpushButton_clicked();
    void on_SalirpushButton_clicked();
    void on_NFilasSpinBoxA_valueChanged(int arg1);
    void on_NColumnasSpinBoxA_valueChanged(int arg1);
    void on_NFilasSpinBoxB_valueChanged(int arg1);
    void on_NFilasSpinBoxB_2_valueChanged(int arg1);

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
