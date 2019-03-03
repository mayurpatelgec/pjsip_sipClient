/********************************************************************************
** Form generated from reading UI file 'debugdialog.ui'
**
** Created: Fri 14. May 17:09:25 2010
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUGDIALOG_H
#define UI_DEBUGDIALOG_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QDialog>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QHeaderView>
#include <QLabel>
#include <QPushButton>
#include <QSpacerItem>
#include <QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_DebugDialogClass
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QTextEdit *logEdit;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *clearButton;

    void setupUi(QDialog *DebugDialogClass)
    {
        if (DebugDialogClass->objectName().isEmpty())
            DebugDialogClass->setObjectName(QString::fromUtf8("DebugDialogClass"));
        DebugDialogClass->resize(444, 275);
        gridLayout = new QGridLayout(DebugDialogClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(DebugDialogClass);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        logEdit = new QTextEdit(DebugDialogClass);
        logEdit->setObjectName(QString::fromUtf8("logEdit"));

        gridLayout->addWidget(logEdit, 1, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        clearButton = new QPushButton(DebugDialogClass);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        hboxLayout->addWidget(clearButton);


        gridLayout->addLayout(hboxLayout, 2, 0, 1, 1);


        retranslateUi(DebugDialogClass);

        QMetaObject::connectSlotsByName(DebugDialogClass);
    } // setupUi

    void retranslateUi(QDialog *DebugDialogClass)
    {
        DebugDialogClass->setWindowTitle(QApplication::translate("DebugDialogClass", "QjSimple Debug Log", 0 ));
        label->setText(QApplication::translate("DebugDialogClass", "pjsip log/debug messages:", 0 ));
#ifndef QT_NO_TOOLTIP
        clearButton->setToolTip(QApplication::translate("DebugDialogClass", "clear the log message window", 0 ));
#endif // QT_NO_TOOLTIP
        clearButton->setText(QApplication::translate("DebugDialogClass", "clear", 0 ));
    } // retranslateUi

};

namespace Ui {
    class DebugDialogClass: public Ui_DebugDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBUGDIALOG_H
