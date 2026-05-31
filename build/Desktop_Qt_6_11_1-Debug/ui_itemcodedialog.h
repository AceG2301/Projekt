/********************************************************************************
** Form generated from reading UI file 'itemcodedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMCODEDIALOG_H
#define UI_ITEMCODEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ItemCodeDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QSpinBox *itemcode_spinBox;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QPlainTextEdit *itemdescription_plainTextEdit;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QDoubleSpinBox *stock_doubleSpinBox;
    QLabel *label_4;
    QComboBox *unit_comboBox;
    QSpacerItem *verticalSpacer_2;
    QPushButton *add_pushButton;

    void setupUi(QDialog *ItemCodeDialog)
    {
        if (ItemCodeDialog->objectName().isEmpty())
            ItemCodeDialog->setObjectName("ItemCodeDialog");
        ItemCodeDialog->resize(592, 234);
        gridLayout = new QGridLayout(ItemCodeDialog);
        gridLayout->setObjectName("gridLayout");
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        label = new QLabel(ItemCodeDialog);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("color:tomato; font-size:32px; background-color:lightgray;font-weight:600"));

        verticalLayout_4->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_2 = new QLabel(ItemCodeDialog);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("color:dodgerblue; \n"
"font-size:16px;\n"
" background-color:lightgray;\n"
"font-weight:600;"));

        verticalLayout->addWidget(label_2);

        itemcode_spinBox = new QSpinBox(ItemCodeDialog);
        itemcode_spinBox->setObjectName("itemcode_spinBox");
        itemcode_spinBox->setStyleSheet(QString::fromUtf8("font-size:16px;color:green;"));
        itemcode_spinBox->setMaximum(999999999);

        verticalLayout->addWidget(itemcode_spinBox);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_3 = new QLabel(ItemCodeDialog);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color:dodgerblue; \n"
"font-size:16px;\n"
" background-color:lightgray;\n"
"font-weight:600;"));

        verticalLayout_2->addWidget(label_3);

        itemdescription_plainTextEdit = new QPlainTextEdit(ItemCodeDialog);
        itemdescription_plainTextEdit->setObjectName("itemdescription_plainTextEdit");
        itemdescription_plainTextEdit->setStyleSheet(QString::fromUtf8("font-size:16px;"));
        itemdescription_plainTextEdit->setTabChangesFocus(true);

        verticalLayout_2->addWidget(itemdescription_plainTextEdit);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_5 = new QLabel(ItemCodeDialog);
        label_5->setObjectName("label_5");
        label_5->setStyleSheet(QString::fromUtf8("color:dodgerblue; \n"
"font-size:16px;\n"
" background-color:lightgray;\n"
"font-weight:600;"));

        verticalLayout_3->addWidget(label_5);

        stock_doubleSpinBox = new QDoubleSpinBox(ItemCodeDialog);
        stock_doubleSpinBox->setObjectName("stock_doubleSpinBox");
        stock_doubleSpinBox->setStyleSheet(QString::fromUtf8("font-size:16px;color:green;"));
        stock_doubleSpinBox->setMaximum(999999999999999983222784.000000000000000);

        verticalLayout_3->addWidget(stock_doubleSpinBox);

        label_4 = new QLabel(ItemCodeDialog);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("color:dodgerblue; \n"
"font-size:16px;\n"
" background-color:lightgray;\n"
"font-weight:600;"));

        verticalLayout_3->addWidget(label_4);

        unit_comboBox = new QComboBox(ItemCodeDialog);
        unit_comboBox->setObjectName("unit_comboBox");
        unit_comboBox->setStyleSheet(QString::fromUtf8("font-size:16px;"));

        verticalLayout_3->addWidget(unit_comboBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        add_pushButton = new QPushButton(ItemCodeDialog);
        add_pushButton->setObjectName("add_pushButton");
        add_pushButton->setStyleSheet(QString::fromUtf8("font-size:16px;font-weight:502;"));

        verticalLayout_3->addWidget(add_pushButton);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout_4, 0, 0, 1, 1);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(itemcode_spinBox);
        label_3->setBuddy(itemdescription_plainTextEdit);
        label_5->setBuddy(stock_doubleSpinBox);
        label_4->setBuddy(unit_comboBox);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(itemcode_spinBox, itemdescription_plainTextEdit);
        QWidget::setTabOrder(itemdescription_plainTextEdit, stock_doubleSpinBox);
        QWidget::setTabOrder(stock_doubleSpinBox, unit_comboBox);
        QWidget::setTabOrder(unit_comboBox, add_pushButton);

        retranslateUi(ItemCodeDialog);

        QMetaObject::connectSlotsByName(ItemCodeDialog);
    } // setupUi

    void retranslateUi(QDialog *ItemCodeDialog)
    {
        ItemCodeDialog->setWindowTitle(QCoreApplication::translate("ItemCodeDialog", "Item Code", nullptr));
        label->setText(QCoreApplication::translate("ItemCodeDialog", "ITEM CODE", nullptr));
        label_2->setText(QCoreApplication::translate("ItemCodeDialog", "ITEM CODE", nullptr));
        label_3->setText(QCoreApplication::translate("ItemCodeDialog", "ITEM DESCRIPTION", nullptr));
        label_5->setText(QCoreApplication::translate("ItemCodeDialog", "Stock", nullptr));
        label_4->setText(QCoreApplication::translate("ItemCodeDialog", "UNIT", nullptr));
        add_pushButton->setText(QCoreApplication::translate("ItemCodeDialog", "ADD", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ItemCodeDialog: public Ui_ItemCodeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMCODEDIALOG_H
