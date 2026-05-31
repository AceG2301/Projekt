/********************************************************************************
** Form generated from reading UI file 'salesdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALESDIALOG_H
#define UI_SALESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SalesDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QSpinBox *itemcode_spinBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QDateEdit *sales_dateEdit;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLineEdit *buyername_lineEdit;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QSpinBox *invoiceno_spinBox_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_6;
    QPlainTextEdit *itemdescription_plainTextEdit;
    QVBoxLayout *verticalLayout_10;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_7;
    QDoubleSpinBox *quantity_doubleSpinBox;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_8;
    QDoubleSpinBox *rateperunit_doubleSpinBox;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_9;
    QSpinBox *amountpaid_spinBox_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_10;
    QSpinBox *totalamounttobepaid_spinBox_2;
    QPushButton *sell_pushButton;
    QLabel *label;

    void setupUi(QDialog *SalesDialog)
    {
        if (SalesDialog->objectName().isEmpty())
            SalesDialog->setObjectName("SalesDialog");
        SalesDialog->resize(563, 457);
        gridLayout = new QGridLayout(SalesDialog);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName("verticalLayout_13");
        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(SalesDialog);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color:dodgerblue; \n"
"font-size:16px;\n"
" background-color:lightgray;\n"
"font-weight:600;"));

        verticalLayout->addWidget(label_2);

        itemcode_spinBox = new QSpinBox(SalesDialog);
        itemcode_spinBox->setObjectName("itemcode_spinBox");
        itemcode_spinBox->setStyleSheet(QString::fromUtf8("font-size:16px;color:green;"));
        itemcode_spinBox->setMaximum(999999999);

        verticalLayout->addWidget(itemcode_spinBox);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(SalesDialog);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color:dodgerblue; \n"
"font-size:16px;\n"
" background-color:lightgray;\n"
"font-weight:600;"));

        verticalLayout_2->addWidget(label_3);

        sales_dateEdit = new QDateEdit(SalesDialog);
        sales_dateEdit->setObjectName("sales_dateEdit");
        sales_dateEdit->setStyleSheet(QString::fromUtf8("font-size:16px;color:green;"));

        verticalLayout_2->addWidget(sales_dateEdit);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_4 = new QLabel(SalesDialog);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("color:dodgerblue; \n"
"font-size:16px;\n"
" background-color:lightgray;\n"
"font-weight:600;"));

        verticalLayout_3->addWidget(label_4);

        buyername_lineEdit = new QLineEdit(SalesDialog);
        buyername_lineEdit->setObjectName("buyername_lineEdit");
        buyername_lineEdit->setStyleSheet(QString::fromUtf8("font-size:16px;"));

        verticalLayout_3->addWidget(buyername_lineEdit);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_5 = new QLabel(SalesDialog);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("color:dodgerblue; \n"
"font-size:16px;\n"
" background-color:lightgray;\n"
"font-weight:600;"));

        verticalLayout_5->addWidget(label_5);

        invoiceno_spinBox_2 = new QSpinBox(SalesDialog);
        invoiceno_spinBox_2->setObjectName("invoiceno_spinBox_2");
        invoiceno_spinBox_2->setStyleSheet(QString::fromUtf8("font-size:16px;color:green;"));
        invoiceno_spinBox_2->setMaximum(999999999);

        verticalLayout_5->addWidget(invoiceno_spinBox_2);


        horizontalLayout->addLayout(verticalLayout_5);


        verticalLayout_11->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        label_6 = new QLabel(SalesDialog);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("color:dodgerblue; \n"
"font-size:16px;\n"
" background-color:lightgray;\n"
"font-weight:600;"));

        verticalLayout_6->addWidget(label_6);

        itemdescription_plainTextEdit = new QPlainTextEdit(SalesDialog);
        itemdescription_plainTextEdit->setObjectName("itemdescription_plainTextEdit");
        itemdescription_plainTextEdit->setStyleSheet(QString::fromUtf8("font-size:16px;"));
        itemdescription_plainTextEdit->setTabChangesFocus(true);
        itemdescription_plainTextEdit->setReadOnly(true);

        verticalLayout_6->addWidget(itemdescription_plainTextEdit);


        horizontalLayout_2->addLayout(verticalLayout_6);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_7 = new QLabel(SalesDialog);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("color:dodgerblue; \n"
"font-size:16px;\n"
" background-color:lightgray;\n"
"font-weight:600;"));

        verticalLayout_7->addWidget(label_7);

        quantity_doubleSpinBox = new QDoubleSpinBox(SalesDialog);
        quantity_doubleSpinBox->setObjectName("quantity_doubleSpinBox");
        quantity_doubleSpinBox->setStyleSheet(QString::fromUtf8("font-size:18px;color:green;"));
        quantity_doubleSpinBox->setDecimals(3);
        quantity_doubleSpinBox->setMaximum(999999999999999983222784.000000000000000);

        verticalLayout_7->addWidget(quantity_doubleSpinBox);


        verticalLayout_10->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        label_8 = new QLabel(SalesDialog);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("color:dodgerblue; \n"
"font-size:16px;\n"
" background-color:lightgray;\n"
"font-weight:600;"));

        verticalLayout_8->addWidget(label_8);

        rateperunit_doubleSpinBox = new QDoubleSpinBox(SalesDialog);
        rateperunit_doubleSpinBox->setObjectName("rateperunit_doubleSpinBox");
        rateperunit_doubleSpinBox->setStyleSheet(QString::fromUtf8("font-size:18px;color:green;"));
        rateperunit_doubleSpinBox->setDecimals(3);
        rateperunit_doubleSpinBox->setMaximum(9999999999999999583119736832.000000000000000);

        verticalLayout_8->addWidget(rateperunit_doubleSpinBox);


        verticalLayout_10->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_9 = new QLabel(SalesDialog);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("color:dodgerblue; \n"
"font-size:16px;\n"
" background-color:lightgray;\n"
"font-weight:600;"));

        verticalLayout_9->addWidget(label_9);

        amountpaid_spinBox_3 = new QSpinBox(SalesDialog);
        amountpaid_spinBox_3->setObjectName("amountpaid_spinBox_3");
        amountpaid_spinBox_3->setStyleSheet(QString::fromUtf8("font-size:18px;color:green;"));
        amountpaid_spinBox_3->setMaximum(999999999);

        verticalLayout_9->addWidget(amountpaid_spinBox_3);


        verticalLayout_10->addLayout(verticalLayout_9);


        horizontalLayout_2->addLayout(verticalLayout_10);


        verticalLayout_11->addLayout(horizontalLayout_2);


        verticalLayout_12->addLayout(verticalLayout_11);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label_10 = new QLabel(SalesDialog);
        label_10->setObjectName("label_10");
        label_10->setStyleSheet(QString::fromUtf8("color:dodgerblue; \n"
"font-size:20px;\n"
" background-color:lightgray;\n"
"font-weight:700;"));

        verticalLayout_4->addWidget(label_10);

        totalamounttobepaid_spinBox_2 = new QSpinBox(SalesDialog);
        totalamounttobepaid_spinBox_2->setObjectName("totalamounttobepaid_spinBox_2");
        totalamounttobepaid_spinBox_2->setStyleSheet(QString::fromUtf8("font-size:22px;color:tomato;font-weight:600;"));
        totalamounttobepaid_spinBox_2->setReadOnly(true);
        totalamounttobepaid_spinBox_2->setMaximum(999999999);

        verticalLayout_4->addWidget(totalamounttobepaid_spinBox_2);


        verticalLayout_12->addLayout(verticalLayout_4);


        verticalLayout_13->addLayout(verticalLayout_12);

        sell_pushButton = new QPushButton(SalesDialog);
        sell_pushButton->setObjectName("sell_pushButton");
        sell_pushButton->setStyleSheet(QString::fromUtf8("font-size:18px;\n"
"font-weight: 500px;\n"
""));

        verticalLayout_13->addWidget(sell_pushButton);


        gridLayout->addLayout(verticalLayout_13, 1, 0, 1, 1);

        label = new QLabel(SalesDialog);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color:tomato; font-size:32px; background-color:lightgray;font-weight:600;"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(itemcode_spinBox);
        label_3->setBuddy(itemcode_spinBox);
        label_4->setBuddy(itemcode_spinBox);
        label_5->setBuddy(itemcode_spinBox);
        label_6->setBuddy(itemcode_spinBox);
        label_7->setBuddy(itemcode_spinBox);
        label_8->setBuddy(itemcode_spinBox);
        label_9->setBuddy(itemcode_spinBox);
        label_10->setBuddy(itemcode_spinBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(itemcode_spinBox, sales_dateEdit);
        QWidget::setTabOrder(sales_dateEdit, buyername_lineEdit);
        QWidget::setTabOrder(buyername_lineEdit, invoiceno_spinBox_2);
        QWidget::setTabOrder(invoiceno_spinBox_2, quantity_doubleSpinBox);
        QWidget::setTabOrder(quantity_doubleSpinBox, rateperunit_doubleSpinBox);
        QWidget::setTabOrder(rateperunit_doubleSpinBox, amountpaid_spinBox_3);
        QWidget::setTabOrder(amountpaid_spinBox_3, sell_pushButton);
        QWidget::setTabOrder(sell_pushButton, totalamounttobepaid_spinBox_2);
        QWidget::setTabOrder(totalamounttobepaid_spinBox_2, itemdescription_plainTextEdit);

        retranslateUi(SalesDialog);

        QMetaObject::connectSlotsByName(SalesDialog);
    } // setupUi

    void retranslateUi(QDialog *SalesDialog)
    {
        SalesDialog->setWindowTitle(QCoreApplication::translate("SalesDialog", "Sales/Invoice", nullptr));
        label_2->setText(QCoreApplication::translate("SalesDialog", "ITEM CODE", nullptr));
        label_3->setText(QCoreApplication::translate("SalesDialog", "DATE", nullptr));
        sales_dateEdit->setDisplayFormat(QCoreApplication::translate("SalesDialog", "dd/MM/yy", nullptr));
        label_4->setText(QCoreApplication::translate("SalesDialog", "BUYER", nullptr));
        label_5->setText(QCoreApplication::translate("SalesDialog", "INVOICE NO", nullptr));
        label_6->setText(QCoreApplication::translate("SalesDialog", "ITEM DESCRIPTION", nullptr));
        label_7->setText(QCoreApplication::translate("SalesDialog", "QUANTITY", nullptr));
        label_8->setText(QCoreApplication::translate("SalesDialog", "RATE PER UNIT", nullptr));
        label_9->setText(QCoreApplication::translate("SalesDialog", "AMOUNT PAID", nullptr));
        label_10->setText(QCoreApplication::translate("SalesDialog", "TOTAL AMOUNT TO BE PAID", nullptr));
        sell_pushButton->setText(QCoreApplication::translate("SalesDialog", "SELL", nullptr));
        label->setText(QCoreApplication::translate("SalesDialog", "SALES/RECIEPT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SalesDialog: public Ui_SalesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALESDIALOG_H
