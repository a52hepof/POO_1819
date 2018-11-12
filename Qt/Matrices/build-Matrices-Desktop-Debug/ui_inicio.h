/********************************************************************************
** Form generated from reading UI file 'inicio.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INICIO_H
#define UI_INICIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Inicio
{
public:
    QWidget *centralWidget;
    QPushButton *Inicio_Btt_Exit;
    QPushButton *Ini_Btt_goToMat;
    QPushButton *Ini_Btt_goToCal;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Inicio)
    {
        if (Inicio->objectName().isEmpty())
            Inicio->setObjectName(QStringLiteral("Inicio"));
        Inicio->resize(400, 341);
        centralWidget = new QWidget(Inicio);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Inicio_Btt_Exit = new QPushButton(centralWidget);
        Inicio_Btt_Exit->setObjectName(QStringLiteral("Inicio_Btt_Exit"));
        Inicio_Btt_Exit->setGeometry(QRect(20, 250, 80, 23));
        Ini_Btt_goToMat = new QPushButton(centralWidget);
        Ini_Btt_goToMat->setObjectName(QStringLiteral("Ini_Btt_goToMat"));
        Ini_Btt_goToMat->setGeometry(QRect(270, 260, 101, 23));
        QIcon icon;
        icon.addFile(QStringLiteral("images/matriz.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Ini_Btt_goToMat->setIcon(icon);
        Ini_Btt_goToCal = new QPushButton(centralWidget);
        Ini_Btt_goToCal->setObjectName(QStringLiteral("Ini_Btt_goToCal"));
        Ini_Btt_goToCal->setGeometry(QRect(270, 230, 101, 21));
        QIcon icon1;
        icon1.addFile(QStringLiteral("images/cal.png"), QSize(), QIcon::Normal, QIcon::Off);
        Ini_Btt_goToCal->setIcon(icon1);
        Inicio->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Inicio);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 20));
        Inicio->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Inicio);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Inicio->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Inicio);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Inicio->setStatusBar(statusBar);

        retranslateUi(Inicio);
        QObject::connect(Inicio_Btt_Exit, SIGNAL(clicked()), Inicio, SLOT(close()));

        QMetaObject::connectSlotsByName(Inicio);
    } // setupUi

    void retranslateUi(QMainWindow *Inicio)
    {
        Inicio->setWindowTitle(QApplication::translate("Inicio", "Inicio", Q_NULLPTR));
        Inicio_Btt_Exit->setText(QApplication::translate("Inicio", "Cerrar", Q_NULLPTR));
        Ini_Btt_goToMat->setText(QApplication::translate("Inicio", "Matrices", Q_NULLPTR));
        Ini_Btt_goToCal->setText(QApplication::translate("Inicio", "Calculadora", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Inicio: public Ui_Inicio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INICIO_H
