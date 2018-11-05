#include "numerorealspinboxdelegate.h"
#include <QDoubleSpinBox>
#include <QObject>


NumeroRealSpinBoxDelegate::NumeroRealSpinBoxDelegate(QObject *parent) : QItemDelegate(parent) {

}

QWidget *NumeroRealSpinBoxDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &, const QModelIndex &) const {

    auto doubleSpinBox=new QDoubleSpinBox(parent);
    doubleSpinBox->setMinimum(-9999999.9999999);
    doubleSpinBox->setMaximum(9999999.9999999);
    return doubleSpinBox;
}

void NumeroRealSpinBoxDelegate::setEditorData(QWidget *editor, const QModelIndex &index)const{

    auto doubleSpinBox=static_cast<QDoubleSpinBox*>(editor);
    doubleSpinBox->setValue(index.data().toDouble());
}

void NumeroRealSpinBoxDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index)const {

    auto doubleSpinBox=static_cast<QDoubleSpinBox*>(editor);
    model->setData(index,doubleSpinBox->value() );
}


void NumeroRealSpinBoxDelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &) const{

    editor->setGeometry((option.rect));
}
