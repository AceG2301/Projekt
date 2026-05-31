/********************************************************************************
** Form generated from reading UI file 'vendorcodedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENDORCODEDIALOG_H
#define UI_VENDORCODEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_VendorCodeDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QSpinBox *vendorcode_spinBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QLineEdit *vendorname_lineEdit;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLineEdit *vendoraddress_lineEdit_2;
    QPushButton *add_pushButton;

    void setupUi(QDialog *VendorCodeDialog)
    {
        if (VendorCodeDialog->objectName().isEmpty())
            VendorCodeDialog->setObjectName("VendorCodeDialog");
        VendorCodeDialog->resize(512, 277);
        gridLayout = new QGridLayout(VendorCodeDialog);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(VendorCodeDialog);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color:tomato; font-size:32px; background-color:lightgray;font-weight:600"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(VendorCodeDialog);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color:dodgerblue; \n"
"font-size:16px;\n"
" background-color:lightgray;\n"
"font-weight:600;"));

        verticalLayout->addWidget(label_2);

        vendorcode_spinBox = new QSpinBox(VendorCodeDialog);
        vendorcode_spinBox->setObjectName("vendorcode_spinBox");
        vendorcode_spinBox->setStyleSheet(QString::fromUtf8("font-size:16px;color:green;"));
        vendorcode_spinBox->setMaximum(999999999);

        verticalLayout->addWidget(vendorcode_spinBox);


        formLayout->setLayout(0, QFormLayout::ItemRole::SpanningRole, verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(VendorCodeDialog);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color:dodgerblue; \n"
"font-size:16px;\n"
" background-color:lightgray;\n"
"font-weight:600;"));

        verticalLayout_2->addWidget(label_3);

        vendorname_lineEdit = new QLineEdit(VendorCodeDialog);
        vendorname_lineEdit->setObjectName("vendorname_lineEdit");
        vendorname_lineEdit->setStyleSheet(QString::fromUtf8("font-size:16px;"));

        verticalLayout_2->addWidget(vendorname_lineEdit);


        formLayout->setLayout(1, QFormLayout::ItemRole::FieldRole, verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_4 = new QLabel(VendorCodeDialog);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("color:dodgerblue; \n"
"font-size:16px;\n"
" background-color:lightgray;\n"
"font-weight:600;"));

        verticalLayout_3->addWidget(label_4);

        vendoraddress_lineEdit_2 = new QLineEdit(VendorCodeDialog);
        vendoraddress_lineEdit_2->setObjectName("vendoraddress_lineEdit_2");
        vendoraddress_lineEdit_2->setStyleSheet(QString::fromUtf8("font-size:16px;"));

        verticalLayout_3->addWidget(vendoraddress_lineEdit_2);


        formLayout->setLayout(2, QFormLayout::ItemRole::FieldRole, verticalLayout_3);

        add_pushButton = new QPushButton(VendorCodeDialog);
        add_pushButton->setObjectName("add_pushButton");
        add_pushButton->setStyleSheet(QString::fromUtf8("font-size:16px;font-weight:502;"));

        formLayout->setWidget(3, QFormLayout::ItemRole::FieldRole, add_pushButton);


        gridLayout->addLayout(formLayout, 1, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(vendorcode_spinBox);
        label_3->setBuddy(vendorname_lineEdit);
        label_4->setBuddy(vendoraddress_lineEdit_2);
#endif // QT_CONFIG(shortcut)

        retranslateUi(VendorCodeDialog);

        QMetaObject::connectSlotsByName(VendorCodeDialog);
    } // setupUi

    void retranslateUi(QDialog *VendorCodeDialog)
    {
        VendorCodeDialog->setWindowTitle(QCoreApplication::translate("VendorCodeDialog", "Vendor Code", nullptr));
        label->setText(QCoreApplication::translate("VendorCodeDialog", "VENDOR CODE", nullptr));
        label_2->setText(QCoreApplication::translate("VendorCodeDialog", "VENDOR CODE", nullptr));
        label_3->setText(QCoreApplication::translate("VendorCodeDialog", "NAME", nullptr));
        label_4->setText(QCoreApplication::translate("VendorCodeDialog", "ADDRESS", nullptr));
        add_pushButton->setText(QCoreApplication::translate("VendorCodeDialog", "ADD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VendorCodeDialog: public Ui_VendorCodeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENDORCODEDIALOG_H
