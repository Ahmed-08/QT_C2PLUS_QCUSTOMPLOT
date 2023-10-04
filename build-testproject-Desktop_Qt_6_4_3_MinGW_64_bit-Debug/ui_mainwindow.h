/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *buildGraph_btn;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pathToFile_btn;
    QLineEdit *path_lineEdit;
    QVBoxLayout *verticalLayout_6;
    QPushButton *updateListPorts_btn;
    QPushButton *connectionToPort;
    QVBoxLayout *verticalLayout_2;
    QLabel *transferRate_label;
    QComboBox *transferRate_comboBox;
    QVBoxLayout *verticalLayout;
    QLabel *availablePorts_label;
    QComboBox *availablePorts_comboBox;
    QCustomPlot *widget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        buildGraph_btn = new QPushButton(centralwidget);
        buildGraph_btn->setObjectName("buildGraph_btn");

        verticalLayout_3->addWidget(buildGraph_btn);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pathToFile_btn = new QPushButton(centralwidget);
        pathToFile_btn->setObjectName("pathToFile_btn");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/resources/img/folder.png"), QSize(), QIcon::Normal, QIcon::Off);
        pathToFile_btn->setIcon(icon);

        horizontalLayout_2->addWidget(pathToFile_btn);

        path_lineEdit = new QLineEdit(centralwidget);
        path_lineEdit->setObjectName("path_lineEdit");

        horizontalLayout_2->addWidget(path_lineEdit);


        verticalLayout_3->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        updateListPorts_btn = new QPushButton(centralwidget);
        updateListPorts_btn->setObjectName("updateListPorts_btn");

        verticalLayout_6->addWidget(updateListPorts_btn);

        connectionToPort = new QPushButton(centralwidget);
        connectionToPort->setObjectName("connectionToPort");

        verticalLayout_6->addWidget(connectionToPort);


        horizontalLayout_3->addLayout(verticalLayout_6);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        transferRate_label = new QLabel(centralwidget);
        transferRate_label->setObjectName("transferRate_label");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(transferRate_label->sizePolicy().hasHeightForWidth());
        transferRate_label->setSizePolicy(sizePolicy);
        transferRate_label->setMaximumSize(QSize(16777215, 16777215));
        transferRate_label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(transferRate_label);

        transferRate_comboBox = new QComboBox(centralwidget);
        transferRate_comboBox->setObjectName("transferRate_comboBox");

        verticalLayout_2->addWidget(transferRate_comboBox);


        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        availablePorts_label = new QLabel(centralwidget);
        availablePorts_label->setObjectName("availablePorts_label");
        availablePorts_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(availablePorts_label);

        availablePorts_comboBox = new QComboBox(centralwidget);
        availablePorts_comboBox->setObjectName("availablePorts_comboBox");

        verticalLayout->addWidget(availablePorts_comboBox);


        horizontalLayout_3->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        widget = new QCustomPlot(centralwidget);
        widget->setObjectName("widget");
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(widget, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        buildGraph_btn->setText(QCoreApplication::translate("MainWindow", "\320\277\320\276\321\201\321\202\321\200\320\276\320\270\321\202\321\214 \320\263\321\200\320\260\321\204\320\270\320\272", nullptr));
        pathToFile_btn->setText(QString());
        updateListPorts_btn->setText(QCoreApplication::translate("MainWindow", "\320\276\320\261\320\275\320\276\320\262\320\270\321\202\321\214 \321\201\320\277\320\270\321\201\320\276\320\272 \320\277\320\276\321\200\321\202\320\276\320\262", nullptr));
        connectionToPort->setText(QCoreApplication::translate("MainWindow", "\320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265", nullptr));
        transferRate_label->setText(QCoreApplication::translate("MainWindow", "\321\201\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \320\277\320\265\321\200\320\265\320\264\320\260\321\207\320\270", nullptr));
        availablePorts_label->setText(QCoreApplication::translate("MainWindow", "\320\264\320\276\321\201\321\202\321\203\320\277\320\275\321\213\320\265 COM \320\277\320\276\321\200\321\202\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
