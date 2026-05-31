/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionItem_Code;
    QAction *actionVendor_Code;
    QAction *actionSale_Invoice;
    QAction *actionPurchase;
    QAction *actionVendor_Wise;
    QAction *actionItem_Wise;
    QAction *actionDate_Wise;
    QAction *actionPVendor_Wise;
    QAction *actionPItem_Wise;
    QAction *actionDate_Wise_2;
    QWidget *centralWidget;
    QLabel *status;
    QMenuBar *menuBar;
    QMenu *menuDATA_ENTRY;
    QMenu *menuREPORTS;
    QMenu *menuSales;
    QMenu *menuPurchase;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(400, 300);
        actionItem_Code = new QAction(MainWindow);
        actionItem_Code->setObjectName("actionItem_Code");
        actionVendor_Code = new QAction(MainWindow);
        actionVendor_Code->setObjectName("actionVendor_Code");
        actionSale_Invoice = new QAction(MainWindow);
        actionSale_Invoice->setObjectName("actionSale_Invoice");
        actionPurchase = new QAction(MainWindow);
        actionPurchase->setObjectName("actionPurchase");
        actionVendor_Wise = new QAction(MainWindow);
        actionVendor_Wise->setObjectName("actionVendor_Wise");
        actionItem_Wise = new QAction(MainWindow);
        actionItem_Wise->setObjectName("actionItem_Wise");
        actionDate_Wise = new QAction(MainWindow);
        actionDate_Wise->setObjectName("actionDate_Wise");
        actionPVendor_Wise = new QAction(MainWindow);
        actionPVendor_Wise->setObjectName("actionPVendor_Wise");
        actionPItem_Wise = new QAction(MainWindow);
        actionPItem_Wise->setObjectName("actionPItem_Wise");
        actionDate_Wise_2 = new QAction(MainWindow);
        actionDate_Wise_2->setObjectName("actionDate_Wise_2");
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        status = new QLabel(centralWidget);
        status->setObjectName("status");
        status->setGeometry(QRect(10, 220, 381, 21));
        status->setStyleSheet(QString::fromUtf8("color:green;font-size:16px;"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 400, 20));
        menuDATA_ENTRY = new QMenu(menuBar);
        menuDATA_ENTRY->setObjectName("menuDATA_ENTRY");
        menuREPORTS = new QMenu(menuBar);
        menuREPORTS->setObjectName("menuREPORTS");
        menuSales = new QMenu(menuREPORTS);
        menuSales->setObjectName("menuSales");
        menuPurchase = new QMenu(menuREPORTS);
        menuPurchase->setObjectName("menuPurchase");
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuDATA_ENTRY->menuAction());
        menuBar->addAction(menuREPORTS->menuAction());
        menuDATA_ENTRY->addAction(actionItem_Code);
        menuDATA_ENTRY->addAction(actionVendor_Code);
        menuDATA_ENTRY->addAction(actionSale_Invoice);
        menuDATA_ENTRY->addAction(actionPurchase);
        menuREPORTS->addAction(menuSales->menuAction());
        menuREPORTS->addAction(menuPurchase->menuAction());
        menuSales->addAction(actionVendor_Wise);
        menuSales->addAction(actionItem_Wise);
        menuSales->addAction(actionDate_Wise_2);
        menuPurchase->addAction(actionDate_Wise);
        menuPurchase->addAction(actionPVendor_Wise);
        menuPurchase->addAction(actionPItem_Wise);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Simple Inventory", nullptr));
        actionItem_Code->setText(QCoreApplication::translate("MainWindow", "Item Code", nullptr));
        actionVendor_Code->setText(QCoreApplication::translate("MainWindow", "Vendor Code", nullptr));
        actionSale_Invoice->setText(QCoreApplication::translate("MainWindow", "Sale Invoice", nullptr));
        actionPurchase->setText(QCoreApplication::translate("MainWindow", "Purchase", nullptr));
        actionVendor_Wise->setText(QCoreApplication::translate("MainWindow", "Vendor Wise", nullptr));
        actionItem_Wise->setText(QCoreApplication::translate("MainWindow", "Item Wise", nullptr));
        actionDate_Wise->setText(QCoreApplication::translate("MainWindow", "Date Wise", nullptr));
        actionPVendor_Wise->setText(QCoreApplication::translate("MainWindow", "Vendor Wise", nullptr));
        actionPItem_Wise->setText(QCoreApplication::translate("MainWindow", "Item Wise", nullptr));
        actionDate_Wise_2->setText(QCoreApplication::translate("MainWindow", "Date Wise", nullptr));
        status->setText(QCoreApplication::translate("MainWindow", "(Status of Database)", nullptr));
        menuDATA_ENTRY->setTitle(QCoreApplication::translate("MainWindow", "DATA ENTRY", nullptr));
        menuREPORTS->setTitle(QCoreApplication::translate("MainWindow", "REPORTS", nullptr));
        menuSales->setTitle(QCoreApplication::translate("MainWindow", "Sales", nullptr));
        menuPurchase->setTitle(QCoreApplication::translate("MainWindow", "Purchase", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
