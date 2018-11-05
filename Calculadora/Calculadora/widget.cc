#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_MultiplicarpushButton_clicked()
{

}

void Widget::on_SalirpushButton_clicked()
{

}

void Widget::on_NFilasSpinBoxA_valueChanged(int arg1)
{

}

void Widget::on_NColumnasSpinBoxA_valueChanged(int arg1)
{

}

void Widget::on_NFilasSpinBoxB_valueChanged(int arg1)
{

}

void Widget::on_NFilasSpinBoxB_2_valueChanged(int arg1)
{

}
