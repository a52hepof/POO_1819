/********************************************************************************
** Form generated from reading UI file 'matrices.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATRICES_H
#define UI_MATRICES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Matrices
{
public:
    QPushButton *Mat_Btt_gToIni;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QTableView *MatrizA;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *NFilasSpinBoxA;
    QLabel *label;
    QSpinBox *NColumnasSpinBoxA;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QTableView *MatrizB;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *NFilasSpinBoxB_2;
    QLabel *label_4;
    QSpinBox *NFilasSpinBoxB;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_3;
    QTableView *MatrizResultado;
    QPushButton *Mat_Btt_SumMat;
    QPushButton *Mat_Btt_SumMat_2;
    QPushButton *Mat_Btt_gToIni_2;

    void setupUi(QWidget *Matrices)
    {
        if (Matrices->objectName().isEmpty())
            Matrices->setObjectName(QStringLiteral("Matrices"));
        Matrices->resize(875, 503);
        Mat_Btt_gToIni = new QPushButton(Matrices);
        Mat_Btt_gToIni->setObjectName(QStringLiteral("Mat_Btt_gToIni"));
        Mat_Btt_gToIni->setGeometry(QRect(40, 360, 80, 23));
        layoutWidget = new QWidget(Matrices);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 11, 261, 311));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        MatrizA = new QTableView(layoutWidget);
        MatrizA->setObjectName(QStringLiteral("MatrizA"));
        MatrizA->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);

        verticalLayout->addWidget(MatrizA);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        NFilasSpinBoxA = new QSpinBox(layoutWidget);
        NFilasSpinBoxA->setObjectName(QStringLiteral("NFilasSpinBoxA"));

        horizontalLayout_2->addWidget(NFilasSpinBoxA);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        NColumnasSpinBoxA = new QSpinBox(layoutWidget);
        NColumnasSpinBoxA->setObjectName(QStringLiteral("NColumnasSpinBoxA"));

        horizontalLayout_2->addWidget(NColumnasSpinBoxA);


        verticalLayout->addLayout(horizontalLayout_2);

        layoutWidget1 = new QWidget(Matrices);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(315, 11, 258, 311));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        MatrizB = new QTableView(layoutWidget1);
        MatrizB->setObjectName(QStringLiteral("MatrizB"));

        verticalLayout_2->addWidget(MatrizB);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        NFilasSpinBoxB_2 = new QSpinBox(layoutWidget1);
        NFilasSpinBoxB_2->setObjectName(QStringLiteral("NFilasSpinBoxB_2"));

        horizontalLayout_3->addWidget(NFilasSpinBoxB_2);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        NFilasSpinBoxB = new QSpinBox(layoutWidget1);
        NFilasSpinBoxB->setObjectName(QStringLiteral("NFilasSpinBoxB"));

        horizontalLayout_3->addWidget(NFilasSpinBoxB);


        verticalLayout_2->addLayout(horizontalLayout_3);

        layoutWidget2 = new QWidget(Matrices);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(587, 12, 258, 341));
        verticalLayout_3 = new QVBoxLayout(layoutWidget2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        MatrizResultado = new QTableView(layoutWidget2);
        MatrizResultado->setObjectName(QStringLiteral("MatrizResultado"));

        verticalLayout_3->addWidget(MatrizResultado);

        Mat_Btt_SumMat = new QPushButton(layoutWidget2);
        Mat_Btt_SumMat->setObjectName(QStringLiteral("Mat_Btt_SumMat"));

        verticalLayout_3->addWidget(Mat_Btt_SumMat);

        Mat_Btt_SumMat_2 = new QPushButton(layoutWidget2);
        Mat_Btt_SumMat_2->setObjectName(QStringLiteral("Mat_Btt_SumMat_2"));

        verticalLayout_3->addWidget(Mat_Btt_SumMat_2);

        Mat_Btt_gToIni_2 = new QPushButton(Matrices);
        Mat_Btt_gToIni_2->setObjectName(QStringLiteral("Mat_Btt_gToIni_2"));
        Mat_Btt_gToIni_2->setGeometry(QRect(130, 360, 80, 23));

        retranslateUi(Matrices);

        QMetaObject::connectSlotsByName(Matrices);
    } // setupUi

    void retranslateUi(QWidget *Matrices)
    {
        Matrices->setWindowTitle(QApplication::translate("Matrices", "Suma y resta de matrices", Q_NULLPTR));
        Mat_Btt_gToIni->setText(QApplication::translate("Matrices", "Ir a inicio", Q_NULLPTR));
        label_2->setText(QApplication::translate("Matrices", "N\302\252 filas", Q_NULLPTR));
        label->setText(QApplication::translate("Matrices", "N\302\272 columnas", Q_NULLPTR));
        label_3->setText(QApplication::translate("Matrices", "N\302\272 filas", Q_NULLPTR));
        label_4->setText(QApplication::translate("Matrices", "N\302\252 columnas", Q_NULLPTR));
        Mat_Btt_SumMat->setText(QApplication::translate("Matrices", "Sumar matrices", Q_NULLPTR));
        Mat_Btt_SumMat_2->setText(QApplication::translate("Matrices", "Restar matrices", Q_NULLPTR));
        Mat_Btt_gToIni_2->setText(QApplication::translate("Matrices", "refrescar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Matrices: public Ui_Matrices {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATRICES_H
