/********************************************************************************
** Form generated from reading UI file 'addbuddydialog.ui'
**
** Created: Fri 14. May 17:09:25 2010
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDBUDDYDIALOG_H
#define UI_ADDBUDDYDIALOG_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QCheckBox>
#include <QDialog>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QHeaderView>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_AddBuddyDialogClass
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout1;
    QLabel *label;
    QLineEdit *nameEdit;
    QLabel *label_2;
    QLineEdit *uriEdit;
    QCheckBox *presenceBox;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QSpacerItem *spacerItem1;

    void setupUi(QDialog *AddBuddyDialogClass)
    {
        if (AddBuddyDialogClass->objectName().isEmpty())
            AddBuddyDialogClass->setObjectName(QString::fromUtf8("AddBuddyDialogClass"));
        AddBuddyDialogClass->resize(310, 125);
        gridLayout = new QGridLayout(AddBuddyDialogClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout1 = new QGridLayout();
        gridLayout1->setSpacing(6);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        label = new QLabel(AddBuddyDialogClass);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout1->addWidget(label, 0, 0, 1, 1);

        nameEdit = new QLineEdit(AddBuddyDialogClass);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        gridLayout1->addWidget(nameEdit, 0, 1, 1, 1);

        label_2 = new QLabel(AddBuddyDialogClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout1->addWidget(label_2, 1, 0, 1, 1);

        uriEdit = new QLineEdit(AddBuddyDialogClass);
        uriEdit->setObjectName(QString::fromUtf8("uriEdit"));

        gridLayout1->addWidget(uriEdit, 1, 1, 1, 1);


        gridLayout->addLayout(gridLayout1, 0, 0, 1, 1);

        presenceBox = new QCheckBox(AddBuddyDialogClass);
        presenceBox->setObjectName(QString::fromUtf8("presenceBox"));

        gridLayout->addWidget(presenceBox, 1, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(AddBuddyDialogClass);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(AddBuddyDialogClass);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 1);


        retranslateUi(AddBuddyDialogClass);
        QObject::connect(okButton, SIGNAL(clicked()), AddBuddyDialogClass, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), AddBuddyDialogClass, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddBuddyDialogClass);
    } // setupUi

    void retranslateUi(QDialog *AddBuddyDialogClass)
    {
        AddBuddyDialogClass->setWindowTitle(QApplication::translate("AddBuddyDialogClass", "AddBuddyDialog", 0));
        label->setText(QApplication::translate("AddBuddyDialogClass", "Name:", 0));
#ifndef QT_NO_TOOLTIP
        nameEdit->setToolTip(QApplication::translate("AddBuddyDialogClass", "Full name or nickname of the buddy", 0));
#endif // QT_NO_TOOLTIP
        label_2->setText(QApplication::translate("AddBuddyDialogClass", "SIP URI:", 0));
#ifndef QT_NO_TOOLTIP
        uriEdit->setToolTip(QApplication::translate("AddBuddyDialogClass", "the SIP URI of the buddy", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        presenceBox->setToolTip(QApplication::translate("AddBuddyDialogClass", "activate this checkbox to SBSCRIBE to the buddies presence state", 0));
#endif // QT_NO_TOOLTIP
        presenceBox->setText(QApplication::translate("AddBuddyDialogClass", "Subscribe buddy's presence", 0));
        okButton->setText(QApplication::translate("AddBuddyDialogClass", "OK", 0));
        cancelButton->setText(QApplication::translate("AddBuddyDialogClass", "Cancel", 0));
    } // retranslateUi

};

namespace Ui {
    class AddBuddyDialogClass: public Ui_AddBuddyDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDBUDDYDIALOG_H
