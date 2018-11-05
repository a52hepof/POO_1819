/********************************************************************************
** Form generated from reading UI file 'rangomatriz.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANGOMATRIZ_H
#define UI_RANGOMATRIZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RangoMatriz
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *RngM_label_1;
    QSpinBox *RngM_spinBox_filas;
    QHBoxLayout *horizontalLayout_3;
    QLabel *rngM_label_2;
    QSpinBox *RngM_spinBox_columnas;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *RngM_pushButton_ok;
    QPushButton *RngM_pushButton_cancel;

    void setupUi(QWidget *RangoMatriz)
    {
        if (RangoMatriz->objectName().isEmpty())
            RangoMatriz->setObjectName(QStringLiteral("RangoMatriz"));
        RangoMatriz->resize(400, 300);
        layoutWidget = new QWidget(RangoMatriz);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(80, 50, 238, 28));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        RngM_label_1 = new QLabel(layoutWidget);
        RngM_label_1->setObjectName(QStringLiteral("RngM_label_1"));

        horizontalLayout_2->addWidget(RngM_label_1);

        RngM_spinBox_filas = new QSpinBox(layoutWidget);
        RngM_spinBox_filas->setObjectName(QStringLiteral("RngM_spinBox_filas"));

        horizontalLayout_2->addWidget(RngM_spinBox_filas);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        rngM_label_2 = new QLabel(layoutWidget);
        rngM_label_2->setObjectName(QStringLiteral("rngM_label_2"));

        horizontalLayout_3->addWidget(rngM_label_2);

        RngM_spinBox_columnas = new QSpinBox(layoutWidget);
        RngM_spinBox_columnas->setObjectName(QStringLiteral("RngM_spinBox_columnas"));

        horizontalLayout_3->addWidget(RngM_spinBox_columnas);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        layoutWidget_2 = new QWidget(RangoMatriz);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(117, 99, 168, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget_2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        RngM_pushButton_ok = new QPushButton(layoutWidget_2);
        RngM_pushButton_ok->setObjectName(QStringLiteral("RngM_pushButton_ok"));

        horizontalLayout->addWidget(RngM_pushButton_ok);

        RngM_pushButton_cancel = new QPushButton(layoutWidget_2);
        RngM_pushButton_cancel->setObjectName(QStringLiteral("RngM_pushButton_cancel"));

        horizontalLayout->addWidget(RngM_pushButton_cancel);


        retranslateUi(RangoMatriz);

        QMetaObject::connectSlotsByName(RangoMatriz);
    } // setupUi

    void retranslateUi(QWidget *RangoMatriz)
    {
        RangoMatriz->setWindowTitle(QApplication::translate("RangoMatriz", "Form", Q_NULLPTR));
        RngM_label_1->setText(QApplication::translate("RangoMatriz", "N\302\272 filas", Q_NULLPTR));
        rngM_label_2->setText(QApplication::translate("RangoMatriz", "N\302\272 columnas", Q_NULLPTR));
        RngM_pushButton_ok->setText(QApplication::translate("RangoMatriz", "ok", Q_NULLPTR));
        RngM_pushButton_cancel->setText(QApplication::translate("RangoMatriz", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RangoMatriz: public Ui_RangoMatriz {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANGOMATRIZ_H
