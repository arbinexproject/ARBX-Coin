/********************************************************************************
** Form generated from reading UI file 'zarbinexcontroldialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZARBINEXCONTROLDIALOG_H
#define UI_ZARBINEXCONTROLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ZArbinexControlDialog
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *labelQuantity;
    QLabel *labelQuantity_int;
    QLabel *labelZArbinex;
    QLabel *labelZArbinex_int;
    QPushButton *pushButtonAll;
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ZArbinexControlDialog)
    {
        if (ZArbinexControlDialog->objectName().isEmpty())
            ZArbinexControlDialog->setObjectName(QStringLiteral("ZArbinexControlDialog"));
        ZArbinexControlDialog->resize(681, 384);
        ZArbinexControlDialog->setMinimumSize(QSize(681, 384));
        gridLayout = new QGridLayout(ZArbinexControlDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        labelQuantity = new QLabel(ZArbinexControlDialog);
        labelQuantity->setObjectName(QStringLiteral("labelQuantity"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelQuantity);

        labelQuantity_int = new QLabel(ZArbinexControlDialog);
        labelQuantity_int->setObjectName(QStringLiteral("labelQuantity_int"));

        formLayout->setWidget(0, QFormLayout::FieldRole, labelQuantity_int);

        labelZArbinex = new QLabel(ZArbinexControlDialog);
        labelZArbinex->setObjectName(QStringLiteral("labelZArbinex"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelZArbinex);

        labelZArbinex_int = new QLabel(ZArbinexControlDialog);
        labelZArbinex_int->setObjectName(QStringLiteral("labelZArbinex_int"));

        formLayout->setWidget(1, QFormLayout::FieldRole, labelZArbinex_int);

        pushButtonAll = new QPushButton(ZArbinexControlDialog);
        pushButtonAll->setObjectName(QStringLiteral("pushButtonAll"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButtonAll);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        treeWidget = new QTreeWidget(ZArbinexControlDialog);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(3, QStringLiteral("Confirmations"));
        __qtreewidgetitem->setText(2, QStringLiteral("zARBX Public ID"));
        __qtreewidgetitem->setText(1, QStringLiteral("Denomination"));
        __qtreewidgetitem->setText(0, QStringLiteral("Select"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setMinimumSize(QSize(0, 250));
        treeWidget->setAlternatingRowColors(true);
        treeWidget->setSortingEnabled(true);
        treeWidget->setColumnCount(5);
        treeWidget->header()->setDefaultSectionSize(100);

        verticalLayout->addWidget(treeWidget);

        buttonBox = new QDialogButtonBox(ZArbinexControlDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 1);


        retranslateUi(ZArbinexControlDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ZArbinexControlDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ZArbinexControlDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ZArbinexControlDialog);
    } // setupUi

    void retranslateUi(QDialog *ZArbinexControlDialog)
    {
        ZArbinexControlDialog->setWindowTitle(QApplication::translate("ZArbinexControlDialog", "Select zARBX to Spend", Q_NULLPTR));
        labelQuantity->setText(QApplication::translate("ZArbinexControlDialog", "Quantity", Q_NULLPTR));
        labelQuantity_int->setText(QApplication::translate("ZArbinexControlDialog", "0", Q_NULLPTR));
        labelZArbinex->setText(QApplication::translate("ZArbinexControlDialog", "zARBX", Q_NULLPTR));
        labelZArbinex_int->setText(QApplication::translate("ZArbinexControlDialog", "0", Q_NULLPTR));
        pushButtonAll->setText(QApplication::translate("ZArbinexControlDialog", "Select/Deselect All", Q_NULLPTR));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("ZArbinexControlDialog", "Is Spendable", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ZArbinexControlDialog: public Ui_ZArbinexControlDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZARBINEXCONTROLDIALOG_H
