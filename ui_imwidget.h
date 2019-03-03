/********************************************************************************
** Form generated from reading UI file 'imwidget.ui'
**
** Created: Fri 14. May 17:09:25 2010
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMWIDGET_H
#define UI_IMWIDGET_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QFrame>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QHeaderView>
#include <QLabel>
#include <QPushButton>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImWidgetClass
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QVBoxLayout *vboxLayout;
    QTextEdit *historyEdit;
    QFrame *line;
    QHBoxLayout *hboxLayout;
    QTextEdit *textEdit;
    QPushButton *sendButton;

    void setupUi(QWidget *ImWidgetClass)
    {
        if (ImWidgetClass->objectName().isEmpty())
            ImWidgetClass->setObjectName(QString::fromUtf8("ImWidgetClass"));
        ImWidgetClass->resize(306, 314);
        gridLayout = new QGridLayout(ImWidgetClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(ImWidgetClass);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        historyEdit = new QTextEdit(ImWidgetClass);
        historyEdit->setObjectName(QString::fromUtf8("historyEdit"));
        historyEdit->setReadOnly(false);

        vboxLayout->addWidget(historyEdit);

        line = new QFrame(ImWidgetClass);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        textEdit = new QTextEdit(ImWidgetClass);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        hboxLayout->addWidget(textEdit);

        sendButton = new QPushButton(ImWidgetClass);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));

        hboxLayout->addWidget(sendButton);


        vboxLayout->addLayout(hboxLayout);


        gridLayout->addLayout(vboxLayout, 1, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(historyEdit);
#endif // QT_NO_SHORTCUT

        retranslateUi(ImWidgetClass);

        QMetaObject::connectSlotsByName(ImWidgetClass);
    } // setupUi

    void retranslateUi(QWidget *ImWidgetClass)
    {
        ImWidgetClass->setWindowTitle(QApplication::translate("ImWidgetClass", "ImWidget", 0 ));
        label->setText(QApplication::translate("ImWidgetClass", "Instant Messaging History", 0 ));
#ifndef QT_NO_TOOLTIP
        historyEdit->setToolTip(QApplication::translate("ImWidgetClass", "Instant message history", 0 ));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        textEdit->setToolTip(QApplication::translate("ImWidgetClass", "enter here the text you want to send", 0 ));
#endif // QT_NO_TOOLTIP
        sendButton->setText(QApplication::translate("ImWidgetClass", "send message", 0 ));
    } // retranslateUi

};

namespace Ui {
    class ImWidgetClass: public Ui_ImWidgetClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMWIDGET_H
