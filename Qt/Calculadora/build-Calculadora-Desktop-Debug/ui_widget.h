/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout;
    QTableView *tableViewA;
    QVBoxLayout *verticalLayout_2;
    QTableView *tableViewB;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QSpinBox *NFilasSpinBoxB;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QSpinBox *NFilasSpinBoxB_2;
    QVBoxLayout *verticalLayout_3;
    QTableView *tableViewR;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *MultiplicarpushButton;
    QPushButton *SalirpushButton;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpinBox *NFilasSpinBoxA;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QSpinBox *NColumnasSpinBoxA;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(835, 304);
        gridLayout = new QGridLayout(Widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableViewA = new QTableView(Widget);
        tableViewA->setObjectName(QStringLiteral("tableViewA"));

        gridLayout->addWidget(tableViewA, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tableViewB = new QTableView(Widget);
        tableViewB->setObjectName(QStringLiteral("tableViewB"));

        verticalLayout_2->addWidget(tableViewB);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        NFilasSpinBoxB = new QSpinBox(Widget);
        NFilasSpinBoxB->setObjectName(QStringLiteral("NFilasSpinBoxB"));

        horizontalLayout->addWidget(NFilasSpinBoxB);


        horizontalLayout_6->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_2->addWidget(label_4);

        NFilasSpinBoxB_2 = new QSpinBox(Widget);
        NFilasSpinBoxB_2->setObjectName(QStringLiteral("NFilasSpinBoxB_2"));

        horizontalLayout_2->addWidget(NFilasSpinBoxB_2);


        horizontalLayout_6->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(horizontalLayout_6);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 2, 1);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        tableViewR = new QTableView(Widget);
        tableViewR->setObjectName(QStringLiteral("tableViewR"));

        verticalLayout_3->addWidget(tableViewR);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        MultiplicarpushButton = new QPushButton(Widget);
        MultiplicarpushButton->setObjectName(QStringLiteral("MultiplicarpushButton"));

        horizontalLayout_7->addWidget(MultiplicarpushButton);

        SalirpushButton = new QPushButton(Widget);
        SalirpushButton->setObjectName(QStringLiteral("SalirpushButton"));

        horizontalLayout_7->addWidget(SalirpushButton);


        verticalLayout_3->addLayout(horizontalLayout_7);


        gridLayout->addLayout(verticalLayout_3, 0, 2, 2, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_3->addWidget(label_2);

        NFilasSpinBoxA = new QSpinBox(Widget);
        NFilasSpinBoxA->setObjectName(QStringLiteral("NFilasSpinBoxA"));

        horizontalLayout_3->addWidget(NFilasSpinBoxA);


        horizontalLayout_5->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_4->addWidget(label);

        NColumnasSpinBoxA = new QSpinBox(Widget);
        NColumnasSpinBoxA->setObjectName(QStringLiteral("NColumnasSpinBoxA"));

        horizontalLayout_4->addWidget(NColumnasSpinBoxA);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        gridLayout->addLayout(horizontalLayout_5, 1, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Calculadora de matrices", Q_NULLPTR));
        label_3->setText(QApplication::translate("Widget", "N\302\272 filas", Q_NULLPTR));
        label_4->setText(QApplication::translate("Widget", "N\302\252 columnas", Q_NULLPTR));
        MultiplicarpushButton->setText(QApplication::translate("Widget", "Multiplicar", Q_NULLPTR));
        SalirpushButton->setText(QApplication::translate("Widget", "Salir de la aplicaci\303\263n", Q_NULLPTR));
        label_2->setText(QApplication::translate("Widget", "N\302\252 filas", Q_NULLPTR));
        label->setText(QApplication::translate("Widget", "N\302\272 columnas", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
