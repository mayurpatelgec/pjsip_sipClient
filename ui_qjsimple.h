/********************************************************************************
** Form generated from reading UI file 'qjsimple.ui'
**
** Created: Thu 25. Nov 12:32:34 2010
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QJSIMPLE_H
#define UI_QJSIMPLE_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QCheckBox>
#include <QComboBox>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QHeaderView>
#include <QLabel>
#include <QLineEdit>
#include <QListWidget>
#include <QPushButton>
#include <QSpacerItem>
#include <QVBoxLayout>
#include <QWidget>

QT_BEGIN_NAMESPACE

class Ui_QjSimpleClass
{
public:
    QGridLayout *gridLayout_2;
    QVBoxLayout *vboxLayout;
    QLabel *label;
    QListWidget *buddyList;
    QLabel *label_5;
    QLineEdit *natTypeEdit;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_4;
    QHBoxLayout *hboxLayout;
    QComboBox *directCallComboBox;
    QPushButton *directCallButton;
    QPushButton *directImButton;
    QVBoxLayout *vboxLayout1;
    QPushButton *addButton;
    QPushButton *editButton;
    QPushButton *deleteButton;
    QPushButton *debugButton;
    QPushButton *accountButton;
    QPushButton *registerButton;
    QPushButton *callButton;
    QCheckBox *statusBox;
    QLabel *label_3;
    QLineEdit *callStateEdit;
    QPushButton *xcapPutBuddyButton;
    QPushButton *xcapGetBuddyButton;
    QSpacerItem *spacerItem;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QLineEdit *hname1;
    QLabel *label_9;
    QLineEdit *hval1;
    QLabel *label_8;
    QLineEdit *hname2;
    QLabel *label_10;
    QLineEdit *hval2;

    void setupUi(QWidget *QjSimpleClass)
    {
        if (QjSimpleClass->objectName().isEmpty())
            QjSimpleClass->setObjectName(QString::fromUtf8("QjSimpleClass"));
        QjSimpleClass->resize(481, 454);
        gridLayout_2 = new QGridLayout(QjSimpleClass);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        vboxLayout = new QVBoxLayout();
        vboxLayout->setSpacing(6);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        label = new QLabel(QjSimpleClass);
        label->setObjectName(QString::fromUtf8("label"));

        vboxLayout->addWidget(label);

        buddyList = new QListWidget(QjSimpleClass);
        buddyList->setObjectName(QString::fromUtf8("buddyList"));

        vboxLayout->addWidget(buddyList);

        label_5 = new QLabel(QjSimpleClass);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        vboxLayout->addWidget(label_5);

        natTypeEdit = new QLineEdit(QjSimpleClass);
        natTypeEdit->setObjectName(QString::fromUtf8("natTypeEdit"));
        natTypeEdit->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(natTypeEdit->sizePolicy().hasHeightForWidth());
        natTypeEdit->setSizePolicy(sizePolicy);
        natTypeEdit->setReadOnly(false);

        vboxLayout->addWidget(natTypeEdit);

        label_2 = new QLabel(QjSimpleClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        vboxLayout->addWidget(label_2);

        comboBox = new QComboBox(QjSimpleClass);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        vboxLayout->addWidget(comboBox);

        label_4 = new QLabel(QjSimpleClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        vboxLayout->addWidget(label_4);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        directCallComboBox = new QComboBox(QjSimpleClass);
        directCallComboBox->setObjectName(QString::fromUtf8("directCallComboBox"));
        directCallComboBox->setEditable(true);

        hboxLayout->addWidget(directCallComboBox);

        directCallButton = new QPushButton(QjSimpleClass);
        directCallButton->setObjectName(QString::fromUtf8("directCallButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(directCallButton->sizePolicy().hasHeightForWidth());
        directCallButton->setSizePolicy(sizePolicy1);
        directCallButton->setMaximumSize(QSize(16, 16));

        hboxLayout->addWidget(directCallButton);

        directImButton = new QPushButton(QjSimpleClass);
        directImButton->setObjectName(QString::fromUtf8("directImButton"));
        sizePolicy1.setHeightForWidth(directImButton->sizePolicy().hasHeightForWidth());
        directImButton->setSizePolicy(sizePolicy1);
        directImButton->setMaximumSize(QSize(16, 16));

        hboxLayout->addWidget(directImButton);


        vboxLayout->addLayout(hboxLayout);


        gridLayout_2->addLayout(vboxLayout, 0, 0, 1, 1);

        vboxLayout1 = new QVBoxLayout();
        vboxLayout1->setSpacing(6);
        vboxLayout1->setObjectName(QString::fromUtf8("vboxLayout1"));
        addButton = new QPushButton(QjSimpleClass);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        sizePolicy.setHeightForWidth(addButton->sizePolicy().hasHeightForWidth());
        addButton->setSizePolicy(sizePolicy);

        vboxLayout1->addWidget(addButton);

        editButton = new QPushButton(QjSimpleClass);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        sizePolicy.setHeightForWidth(editButton->sizePolicy().hasHeightForWidth());
        editButton->setSizePolicy(sizePolicy);

        vboxLayout1->addWidget(editButton);

        deleteButton = new QPushButton(QjSimpleClass);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        sizePolicy.setHeightForWidth(deleteButton->sizePolicy().hasHeightForWidth());
        deleteButton->setSizePolicy(sizePolicy);

        vboxLayout1->addWidget(deleteButton);

        debugButton = new QPushButton(QjSimpleClass);
        debugButton->setObjectName(QString::fromUtf8("debugButton"));
        sizePolicy.setHeightForWidth(debugButton->sizePolicy().hasHeightForWidth());
        debugButton->setSizePolicy(sizePolicy);

        vboxLayout1->addWidget(debugButton);

        accountButton = new QPushButton(QjSimpleClass);
        accountButton->setObjectName(QString::fromUtf8("accountButton"));
        sizePolicy.setHeightForWidth(accountButton->sizePolicy().hasHeightForWidth());
        accountButton->setSizePolicy(sizePolicy);

        vboxLayout1->addWidget(accountButton);

        registerButton = new QPushButton(QjSimpleClass);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));
        sizePolicy.setHeightForWidth(registerButton->sizePolicy().hasHeightForWidth());
        registerButton->setSizePolicy(sizePolicy);

        vboxLayout1->addWidget(registerButton);

        callButton = new QPushButton(QjSimpleClass);
        callButton->setObjectName(QString::fromUtf8("callButton"));
        sizePolicy.setHeightForWidth(callButton->sizePolicy().hasHeightForWidth());
        callButton->setSizePolicy(sizePolicy);

        vboxLayout1->addWidget(callButton);

        statusBox = new QCheckBox(QjSimpleClass);
        statusBox->setObjectName(QString::fromUtf8("statusBox"));
        statusBox->setEnabled(false);
        sizePolicy.setHeightForWidth(statusBox->sizePolicy().hasHeightForWidth());
        statusBox->setSizePolicy(sizePolicy);
        statusBox->setCheckable(true);

        vboxLayout1->addWidget(statusBox);

        label_3 = new QLabel(QjSimpleClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy2);
        label_3->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        vboxLayout1->addWidget(label_3);

        callStateEdit = new QLineEdit(QjSimpleClass);
        callStateEdit->setObjectName(QString::fromUtf8("callStateEdit"));
        callStateEdit->setEnabled(false);
        sizePolicy.setHeightForWidth(callStateEdit->sizePolicy().hasHeightForWidth());
        callStateEdit->setSizePolicy(sizePolicy);
        callStateEdit->setReadOnly(false);

        vboxLayout1->addWidget(callStateEdit);

        xcapPutBuddyButton = new QPushButton(QjSimpleClass);
        xcapPutBuddyButton->setObjectName(QString::fromUtf8("xcapPutBuddyButton"));
        xcapPutBuddyButton->setEnabled(false);
        sizePolicy.setHeightForWidth(xcapPutBuddyButton->sizePolicy().hasHeightForWidth());
        xcapPutBuddyButton->setSizePolicy(sizePolicy);

        vboxLayout1->addWidget(xcapPutBuddyButton);

        xcapGetBuddyButton = new QPushButton(QjSimpleClass);
        xcapGetBuddyButton->setObjectName(QString::fromUtf8("xcapGetBuddyButton"));
        xcapGetBuddyButton->setEnabled(false);
        sizePolicy.setHeightForWidth(xcapGetBuddyButton->sizePolicy().hasHeightForWidth());
        xcapGetBuddyButton->setSizePolicy(sizePolicy);

        vboxLayout1->addWidget(xcapGetBuddyButton);

        spacerItem = new QSpacerItem(133, 21, QSizePolicy::Minimum, QSizePolicy::Expanding);

        vboxLayout1->addItem(spacerItem);


        gridLayout_2->addLayout(vboxLayout1, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_6 = new QLabel(QjSimpleClass);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_7 = new QLabel(QjSimpleClass);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        hname1 = new QLineEdit(QjSimpleClass);
        hname1->setObjectName(QString::fromUtf8("hname1"));

        gridLayout->addWidget(hname1, 0, 1, 1, 1);

        label_9 = new QLabel(QjSimpleClass);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 0, 2, 1, 1);

        hval1 = new QLineEdit(QjSimpleClass);
        hval1->setObjectName(QString::fromUtf8("hval1"));

        gridLayout->addWidget(hval1, 0, 3, 1, 1);

        label_8 = new QLabel(QjSimpleClass);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 1, 0, 1, 1);

        hname2 = new QLineEdit(QjSimpleClass);
        hname2->setObjectName(QString::fromUtf8("hname2"));

        gridLayout->addWidget(hname2, 1, 1, 1, 1);

        label_10 = new QLabel(QjSimpleClass);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 1, 2, 1, 1);

        hval2 = new QLineEdit(QjSimpleClass);
        hval2->setObjectName(QString::fromUtf8("hval2"));

        gridLayout->addWidget(hval2, 1, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);


        gridLayout_2->addLayout(verticalLayout, 1, 0, 1, 2);


        retranslateUi(QjSimpleClass);

        QMetaObject::connectSlotsByName(QjSimpleClass);
    } // setupUi

    void retranslateUi(QWidget *QjSimpleClass)
    {
        QjSimpleClass->setWindowTitle(QApplication::translate("QjSimpleClass", "QjSimple", 0 ));
        label->setText(QApplication::translate("QjSimpleClass", "Buddy List", 0 ));
#ifndef QT_NO_TOOLTIP
        buddyList->setToolTip(QApplication::translate("QjSimpleClass", "double-click a buddy to send an instant message; select a buddy and press the 'call buddy' button to call your buddy", 0 ));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("QjSimpleClass", "Detected NAT Type", 0 ));
        natTypeEdit->setText(QString());
        label_2->setText(QApplication::translate("QjSimpleClass", "Presence State", 0 ));
#ifndef QT_NO_TOOLTIP
        comboBox->setToolTip(QApplication::translate("QjSimpleClass", "choose your presence state", 0 ));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("QjSimpleClass", "Direct Calling/IM (to send IM to buddy doubleclick buddy)", 0 ));
#ifndef QT_NO_TOOLTIP
        directCallButton->setToolTip(QApplication::translate("QjSimpleClass", "click to call the SIP URI in the left ComboBox", 0 ));
#endif // QT_NO_TOOLTIP
        directCallButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        directImButton->setToolTip(QApplication::translate("QjSimpleClass", "click to send an instant message to the SIP URI in the left ComboBox", 0 ));
#endif // QT_NO_TOOLTIP
        directImButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        addButton->setToolTip(QApplication::translate("QjSimpleClass", "add a buddy to your buddy list", 0 ));
#endif // QT_NO_TOOLTIP
        addButton->setText(QApplication::translate("QjSimpleClass", "add buddy", 0 ));
#ifndef QT_NO_TOOLTIP
        editButton->setToolTip(QApplication::translate("QjSimpleClass", "edit an existing buddy", 0 ));
#endif // QT_NO_TOOLTIP
        editButton->setText(QApplication::translate("QjSimpleClass", "edit buddy", 0 ));
#ifndef QT_NO_TOOLTIP
        deleteButton->setToolTip(QApplication::translate("QjSimpleClass", "delete a buddy from your buddy list", 0 ));
#endif // QT_NO_TOOLTIP
        deleteButton->setText(QApplication::translate("QjSimpleClass", "delete buddy", 0 ));
#ifndef QT_NO_TOOLTIP
        debugButton->setToolTip(QApplication::translate("QjSimpleClass", "open the debug window (this will show you all the log messages)", 0 ));
#endif // QT_NO_TOOLTIP
        debugButton->setText(QApplication::translate("QjSimpleClass", "debug window", 0 ));
#ifndef QT_NO_TOOLTIP
        accountButton->setToolTip(QApplication::translate("QjSimpleClass", "configure your SIP account", 0 ));
#endif // QT_NO_TOOLTIP
        accountButton->setText(QApplication::translate("QjSimpleClass", "SIP settings", 0 ));
#ifndef QT_NO_TOOLTIP
        registerButton->setToolTip(QApplication::translate("QjSimpleClass", "initialize the SIP stack and REGISTER", 0 ));
#endif // QT_NO_TOOLTIP
        registerButton->setText(QApplication::translate("QjSimpleClass", "REGISTER", 0 ));
#ifndef QT_NO_TOOLTIP
        callButton->setToolTip(QApplication::translate("QjSimpleClass", "call the selected buddy", 0 ));
#endif // QT_NO_TOOLTIP
        callButton->setText(QApplication::translate("QjSimpleClass", "call buddy", 0 ));
        statusBox->setText(QApplication::translate("QjSimpleClass", "registered?", 0 ));
        label_3->setText(QApplication::translate("QjSimpleClass", "call status:", 0 ));
        callStateEdit->setText(QApplication::translate("QjSimpleClass", "IDLE", 0 ));
        xcapPutBuddyButton->setText(QApplication::translate("QjSimpleClass", "xcapPutBuddy", 0 ));
        xcapGetBuddyButton->setText(QApplication::translate("QjSimpleClass", "xcapGetBuddy", 0 ));
        label_6->setText(QApplication::translate("QjSimpleClass", "Additional Headers:", 0 ));
        label_7->setText(QApplication::translate("QjSimpleClass", "Header 1", 0 ));
        label_9->setText(QApplication::translate("QjSimpleClass", ":", 0 ));
        label_8->setText(QApplication::translate("QjSimpleClass", "Header 2", 0 ));
        label_10->setText(QApplication::translate("QjSimpleClass", ":", 0 ));
    } // retranslateUi

};

namespace Ui {
    class QjSimpleClass: public Ui_QjSimpleClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QJSIMPLE_H
