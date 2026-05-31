/********************************************************************************
** Form generated from reading UI file 'reportsdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORTSDIALOG_H
#define UI_REPORTSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ReportsDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *title_label;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QDateEdit *from_dateEdit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QDateEdit *to_dateEdit;
    QPushButton *generate_report_pushbutton;
    QTableView *report_tableView;

    void setupUi(QDialog *ReportsDialog)
    {
        if (ReportsDialog->objectName().isEmpty())
            ReportsDialog->setObjectName("ReportsDialog");
        ReportsDialog->resize(726, 436);
        gridLayout = new QGridLayout(ReportsDialog);
        gridLayout->setObjectName("gridLayout");
        title_label = new QLabel(ReportsDialog);
        title_label->setObjectName("title_label");
        title_label->setStyleSheet(QString::fromUtf8("color:tomato; font-size:32px; background-color:lightgray;font-weight:600"));

        gridLayout->addWidget(title_label, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(ReportsDialog);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("color:dodgerblue; \n"
"font-size:16px;\n"
" background-color:lightgray;\n"
"font-weight:600;"));

        horizontalLayout->addWidget(label_3);

        from_dateEdit = new QDateEdit(ReportsDialog);
        from_dateEdit->setObjectName("from_dateEdit");
        from_dateEdit->setStyleSheet(QString::fromUtf8("font-size:16px;color:green;"));

        horizontalLayout->addWidget(from_dateEdit);


        horizontalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_4 = new QLabel(ReportsDialog);
        label_4->setObjectName("label_4");
        label_4->setStyleSheet(QString::fromUtf8("color:dodgerblue; \n"
"font-size:16px;\n"
" background-color:lightgray;\n"
"font-weight:600;"));

        horizontalLayout_2->addWidget(label_4);

        to_dateEdit = new QDateEdit(ReportsDialog);
        to_dateEdit->setObjectName("to_dateEdit");
        to_dateEdit->setStyleSheet(QString::fromUtf8("font-size:16px;color:green;"));

        horizontalLayout_2->addWidget(to_dateEdit);

        generate_report_pushbutton = new QPushButton(ReportsDialog);
        generate_report_pushbutton->setObjectName("generate_report_pushbutton");

        horizontalLayout_2->addWidget(generate_report_pushbutton);


        horizontalLayout_3->addLayout(horizontalLayout_2);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        report_tableView = new QTableView(ReportsDialog);
        report_tableView->setObjectName("report_tableView");

        gridLayout->addWidget(report_tableView, 2, 0, 1, 1);

#if QT_CONFIG(shortcut)
#endif // QT_CONFIG(shortcut)

        retranslateUi(ReportsDialog);

        QMetaObject::connectSlotsByName(ReportsDialog);
    } // setupUi

    void retranslateUi(QDialog *ReportsDialog)
    {
        ReportsDialog->setWindowTitle(QCoreApplication::translate("ReportsDialog", "Dialog", nullptr));
        title_label->setText(QCoreApplication::translate("ReportsDialog", "REPORTS", nullptr));
        label_3->setText(QCoreApplication::translate("ReportsDialog", "FROM", nullptr));
        from_dateEdit->setDisplayFormat(QCoreApplication::translate("ReportsDialog", "dd/MMM/yyyy", nullptr));
        label_4->setText(QCoreApplication::translate("ReportsDialog", "TO", nullptr));
        to_dateEdit->setDisplayFormat(QCoreApplication::translate("ReportsDialog", "dd/MMM/yyyy", nullptr));
        generate_report_pushbutton->setText(QCoreApplication::translate("ReportsDialog", "Generate Report", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReportsDialog: public Ui_ReportsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORTSDIALOG_H
