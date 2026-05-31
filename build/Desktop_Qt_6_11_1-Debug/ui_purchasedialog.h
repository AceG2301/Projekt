/********************************************************************************
** Form generated from reading UI file 'purchasedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PURCHASEDIALOG_H
#define UI_PURCHASEDIALOG_H

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

class Ui_PurchaseDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_12;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QSpinBox *itemcode_spinBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QDateEdit *purchase_dateEdit;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLineEdit *vendorname_lineEdit;
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
    QPushButton *purchase_pushButton;

    void setupUi(QDialog *PurchaseDialog)
    {
        if (PurchaseDialog->objectName().isEmpty())
            PurchaseDialog->setObjectName("PurchaseDialog");
        PurchaseDialog->resize(697, 437);
        gridLayout = new QGridLayout(PurchaseDialog);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(PurchaseDialog);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color:tomato; font-size:32px; background-color:lightgray;font-weight:600;"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

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
        label_2 = new QLabel(PurchaseDialog);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color:dodgerblue; \n"
"font-size:16px;\n"
" background-color:lightgray;\n"
"font-weight:600;"));

        verticalLayout->addWidget(label_2);

        itemcode_spinBox = new QSpinBox(PurchaseDialog);
        itemcode_spinBox->setObjectName("itemcode_spinBox");
        itemcode_spinBox->setStyleSheet(QString::fromUtf8("font-size:16px;color:green;"));
        itemcode_spinBox->setMaximum(999999999);

        verticalLayout->addWidget(itemcode_spinBox);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(PurchaseDialog);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color:dodgerblue; \n"
"font-size:16px;\n"
" background-color:lightgray;\n"
"font-weight:600;"));

        verticalLayout_2->addWidget(label_3);

        purchase_dateEdit = new QDateEdit(PurchaseDialog);
        purchase_dateEdit->setObjectName("purchase_dateEdit");
        purchase_dateEdit->setStyleSheet(QString::fromUtf8("font-size:16px;color:green;"));

        verticalLayout_2->addWidget(purchase_dateEdit);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_4 = new QLabel(PurchaseDialog);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("color:dodgerblue; \n"
"font-size:16px;\n"
" background-color:lightgray;\n"
"font-weight:600;"));

        verticalLayout_3->addWidget(label_4);

        vendorname_lineEdit = new QLineEdit(PurchaseDialog);
        vendorname_lineEdit->setObjectName("vendorname_lineEdit");
        vendorname_lineEdit->setStyleSheet(QString::fromUtf8("font-size:16px;"));

        verticalLayout_3->addWidget(vendorname_lineEdit);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_5 = new QLabel(PurchaseDialog);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("color:dodgerblue; \n"
"font-size:16px;\n"
" background-color:lightgray;\n"
"font-weight:600;"));

        verticalLayout_5->addWidget(label_5);

        invoiceno_spinBox_2 = new QSpinBox(PurchaseDialog);
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
        label_6 = new QLabel(PurchaseDialog);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("color:dodgerblue; \n"
"font-size:16px;\n"
" background-color:lightgray;\n"
"font-weight:600;"));

        verticalLayout_6->addWidget(label_6);

        itemdescription_plainTextEdit = new QPlainTextEdit(PurchaseDialog);
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
        label_7 = new QLabel(PurchaseDialog);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("color:dodgerblue; \n"
"font-size:16px;\n"
" background-color:lightgray;\n"
"font-weight:600;"));

        verticalLayout_7->addWidget(label_7);

        quantity_doubleSpinBox = new QDoubleSpinBox(PurchaseDialog);
        quantity_doubleSpinBox->setObjectName("quantity_doubleSpinBox");
        quantity_doubleSpinBox->setStyleSheet(QString::fromUtf8("font-size:18px;color:green;"));
        quantity_doubleSpinBox->setDecimals(3);
        quantity_doubleSpinBox->setMaximum(999999999999999983222784.000000000000000);

        verticalLayout_7->addWidget(quantity_doubleSpinBox);


        verticalLayout_10->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName("verticalLayout_8");
        label_8 = new QLabel(PurchaseDialog);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("color:dodgerblue; \n"
"font-size:16px;\n"
" background-color:lightgray;\n"
"font-weight:600;"));

        verticalLayout_8->addWidget(label_8);

        rateperunit_doubleSpinBox = new QDoubleSpinBox(PurchaseDialog);
        rateperunit_doubleSpinBox->setObjectName("rateperunit_doubleSpinBox");
        rateperunit_doubleSpinBox->setStyleSheet(QString::fromUtf8("font-size:18px;color:green;"));
        rateperunit_doubleSpinBox->setDecimals(3);
        rateperunit_doubleSpinBox->setMaximum(9999999999999999583119736832.000000000000000);

        verticalLayout_8->addWidget(rateperunit_doubleSpinBox);


        verticalLayout_10->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName("verticalLayout_9");
        label_9 = new QLabel(PurchaseDialog);
        label_9->setObjectName("label_9");
        label_9->setStyleSheet(QString::fromUtf8("color:dodgerblue; \n"
"font-size:16px;\n"
" background-color:lightgray;\n"
"font-weight:600;"));

        verticalLayout_9->addWidget(label_9);

        amountpaid_spinBox_3 = new QSpinBox(PurchaseDialog);
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
        label_10 = new QLabel(PurchaseDialog);
        label_10->setObjectName("label_10");
        label_10->setStyleSheet(QString::fromUtf8("color:dodgerblue; \n"
"font-size:20px;\n"
" background-color:lightgray;\n"
"font-weight:700;"));

        verticalLayout_4->addWidget(label_10);

        totalamounttobepaid_spinBox_2 = new QSpinBox(PurchaseDialog);
        totalamounttobepaid_spinBox_2->setObjectName("totalamounttobepaid_spinBox_2");
        totalamounttobepaid_spinBox_2->setStyleSheet(QString::fromUtf8("font-size:22px;color:tomato;font-weight:600;"));
        totalamounttobepaid_spinBox_2->setReadOnly(true);
        totalamounttobepaid_spinBox_2->setMaximum(999999999);

        verticalLayout_4->addWidget(totalamounttobepaid_spinBox_2);


        verticalLayout_12->addLayout(verticalLayout_4);


        verticalLayout_13->addLayout(verticalLayout_12);

        purchase_pushButton = new QPushButton(PurchaseDialog);
        purchase_pushButton->setObjectName("purchase_pushButton");
        purchase_pushButton->setStyleSheet(QString::fromUtf8("font-size:18px;\n"
"font-weight: 500px;\n"
""));

        verticalLayout_13->addWidget(purchase_pushButton);


        gridLayout->addLayout(verticalLayout_13, 1, 0, 1, 1);

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
        QWidget::setTabOrder(itemcode_spinBox, purchase_dateEdit);
        QWidget::setTabOrder(purchase_dateEdit, vendorname_lineEdit);
        QWidget::setTabOrder(vendorname_lineEdit, invoiceno_spinBox_2);
        QWidget::setTabOrder(invoiceno_spinBox_2, quantity_doubleSpinBox);
        QWidget::setTabOrder(quantity_doubleSpinBox, rateperunit_doubleSpinBox);
        QWidget::setTabOrder(rateperunit_doubleSpinBox, amountpaid_spinBox_3);
        QWidget::setTabOrder(amountpaid_spinBox_3, purchase_pushButton);
        QWidget::setTabOrder(purchase_pushButton, totalamounttobepaid_spinBox_2);
        QWidget::setTabOrder(totalamounttobepaid_spinBox_2, itemdescription_plainTextEdit);

        retranslateUi(PurchaseDialog);

        QMetaObject::connectSlotsByName(PurchaseDialog);
    } // setupUi

    void retranslateUi(QDialog *PurchaseDialog)
    {
        PurchaseDialog->setWindowTitle(QCoreApplication::translate("PurchaseDialog", "PURCHASE/INVOICE", nullptr));
        label->setText(QCoreApplication::translate("PurchaseDialog", "PURCHASE/RECIEPT", nullptr));
        label_2->setText(QCoreApplication::translate("PurchaseDialog", "ITEM CODE", nullptr));
        label_3->setText(QCoreApplication::translate("PurchaseDialog", "DATE", nullptr));
        purchase_dateEdit->setDisplayFormat(QCoreApplication::translate("PurchaseDialog", "dd/MM/yy", nullptr));
        label_4->setText(QCoreApplication::translate("PurchaseDialog", "VENDOR", nullptr));
        label_5->setText(QCoreApplication::translate("PurchaseDialog", "INVOICE NO", nullptr));
        label_6->setText(QCoreApplication::translate("PurchaseDialog", "ITEM DESCRIPTION", nullptr));
        label_7->setText(QCoreApplication::translate("PurchaseDialog", "QUANTITY", nullptr));
        label_8->setText(QCoreApplication::translate("PurchaseDialog", "RATE PER UNIT", nullptr));
        label_9->setText(QCoreApplication::translate("PurchaseDialog", "AMOUNT PAID", nullptr));
        label_10->setText(QCoreApplication::translate("PurchaseDialog", "TOTAL AMOUNT TO BE PAID", nullptr));
        purchase_pushButton->setText(QCoreApplication::translate("PurchaseDialog", "PURCHASE", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PurchaseDialog: public Ui_PurchaseDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PURCHASEDIALOG_H
