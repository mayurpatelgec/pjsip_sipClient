/********************************************************************************
** Form generated from reading UI file 'accountdialog.ui'
**
** Created: Thu 21. Apr 11:57:51 2011
**      by: Qt User Interface Compiler version 4.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACCOUNTDIALOG_H
#define UI_ACCOUNTDIALOG_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QCheckBox>
#include <QComboBox>
#include <QDialog>
#include <QFrame>
#include <QGridLayout>
#include <QHBoxLayout>
#include <QHeaderView>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QSpacerItem>
#include <QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AccountDialogClass
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout1;
    QLabel *label_2;
    QLineEdit *domainEdit;
    QLabel *label;
    QLineEdit *usernameEdit;
    QLabel *label_3;
    QLineEdit *passwordEdit;
    QLabel *label_4;
    QLineEdit *stunEdit;
    QLabel *label_5;
    QLineEdit *outboundproxyEdit;
    QLabel *label_6;
    QComboBox *transportComboBox;
    QLabel *label_7;
    QComboBox *srtpComboBox;
    QLabel *label_8;
    QComboBox *srtpReqComboBox;
    QLabel *label_9;
    QLineEdit *tlsCaFileEdit;
    QPushButton *caPushButton;
    QLabel *label_10;
    QLineEdit *tlsPrivKeyFileEdit;
    QPushButton *privKeyPushButton;
    QLabel *label_11;
    QLineEdit *tlsCertFileEdit;
    QPushButton *certPushButton;
    QLabel *label_12;
    QLineEdit *logFileEdit;
    QPushButton *logFilePushButton;
    QLabel *label_13;
    QLineEdit *xcapUrlEdit;
    QLabel *label_14;
    QComboBox *logLevelComboBox;
    QLabel *label_15;
    QSpinBox *sipPortSpinBox;
    QCheckBox *noregistrationBox;
    QFrame *line;
    QCheckBox *tlsVerifyServerBox;
    QCheckBox *subscribeBox;
    QCheckBox *publishBox;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;
    QSpacerItem *spacerItem1;

    void setupUi(QDialog *AccountDialogClass)
    {
        if (AccountDialogClass->objectName().isEmpty())
            AccountDialogClass->setObjectName(QString::fromUtf8("AccountDialogClass"));
        AccountDialogClass->resize(330, 537);
        gridLayout = new QGridLayout(AccountDialogClass);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout1 = new QGridLayout();
        gridLayout1->setSpacing(6);
        gridLayout1->setObjectName(QString::fromUtf8("gridLayout1"));
        label_2 = new QLabel(AccountDialogClass);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout1->addWidget(label_2, 0, 0, 1, 1);

        domainEdit = new QLineEdit(AccountDialogClass);
        domainEdit->setObjectName(QString::fromUtf8("domainEdit"));

        gridLayout1->addWidget(domainEdit, 0, 1, 1, 2);

        label = new QLabel(AccountDialogClass);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout1->addWidget(label, 1, 0, 1, 1);

        usernameEdit = new QLineEdit(AccountDialogClass);
        usernameEdit->setObjectName(QString::fromUtf8("usernameEdit"));

        gridLayout1->addWidget(usernameEdit, 1, 1, 1, 2);

        label_3 = new QLabel(AccountDialogClass);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout1->addWidget(label_3, 2, 0, 1, 1);

        passwordEdit = new QLineEdit(AccountDialogClass);
        passwordEdit->setObjectName(QString::fromUtf8("passwordEdit"));
        passwordEdit->setEchoMode(QLineEdit::Password);

        gridLayout1->addWidget(passwordEdit, 2, 1, 1, 2);

        label_4 = new QLabel(AccountDialogClass);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout1->addWidget(label_4, 3, 0, 1, 1);

        stunEdit = new QLineEdit(AccountDialogClass);
        stunEdit->setObjectName(QString::fromUtf8("stunEdit"));
        stunEdit->setEchoMode(QLineEdit::Normal);

        gridLayout1->addWidget(stunEdit, 3, 1, 1, 2);

        label_5 = new QLabel(AccountDialogClass);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout1->addWidget(label_5, 4, 0, 1, 1);

        outboundproxyEdit = new QLineEdit(AccountDialogClass);
        outboundproxyEdit->setObjectName(QString::fromUtf8("outboundproxyEdit"));
        outboundproxyEdit->setEchoMode(QLineEdit::Normal);

        gridLayout1->addWidget(outboundproxyEdit, 4, 1, 1, 2);

        label_6 = new QLabel(AccountDialogClass);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout1->addWidget(label_6, 5, 0, 1, 1);

        transportComboBox = new QComboBox(AccountDialogClass);
        transportComboBox->setObjectName(QString::fromUtf8("transportComboBox"));

        gridLayout1->addWidget(transportComboBox, 5, 1, 1, 2);

        label_7 = new QLabel(AccountDialogClass);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout1->addWidget(label_7, 6, 0, 1, 1);

        srtpComboBox = new QComboBox(AccountDialogClass);
        srtpComboBox->setObjectName(QString::fromUtf8("srtpComboBox"));

        gridLayout1->addWidget(srtpComboBox, 6, 1, 1, 2);

        label_8 = new QLabel(AccountDialogClass);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout1->addWidget(label_8, 7, 0, 1, 1);

        srtpReqComboBox = new QComboBox(AccountDialogClass);
        srtpReqComboBox->setObjectName(QString::fromUtf8("srtpReqComboBox"));

        gridLayout1->addWidget(srtpReqComboBox, 7, 1, 1, 2);

        label_9 = new QLabel(AccountDialogClass);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout1->addWidget(label_9, 8, 0, 1, 1);

        tlsCaFileEdit = new QLineEdit(AccountDialogClass);
        tlsCaFileEdit->setObjectName(QString::fromUtf8("tlsCaFileEdit"));

        gridLayout1->addWidget(tlsCaFileEdit, 8, 1, 1, 1);

        caPushButton = new QPushButton(AccountDialogClass);
        caPushButton->setObjectName(QString::fromUtf8("caPushButton"));

        gridLayout1->addWidget(caPushButton, 8, 2, 1, 1);

        label_10 = new QLabel(AccountDialogClass);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout1->addWidget(label_10, 9, 0, 1, 1);

        tlsPrivKeyFileEdit = new QLineEdit(AccountDialogClass);
        tlsPrivKeyFileEdit->setObjectName(QString::fromUtf8("tlsPrivKeyFileEdit"));

        gridLayout1->addWidget(tlsPrivKeyFileEdit, 9, 1, 1, 1);

        privKeyPushButton = new QPushButton(AccountDialogClass);
        privKeyPushButton->setObjectName(QString::fromUtf8("privKeyPushButton"));

        gridLayout1->addWidget(privKeyPushButton, 9, 2, 1, 1);

        label_11 = new QLabel(AccountDialogClass);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout1->addWidget(label_11, 10, 0, 1, 1);

        tlsCertFileEdit = new QLineEdit(AccountDialogClass);
        tlsCertFileEdit->setObjectName(QString::fromUtf8("tlsCertFileEdit"));

        gridLayout1->addWidget(tlsCertFileEdit, 10, 1, 1, 1);

        certPushButton = new QPushButton(AccountDialogClass);
        certPushButton->setObjectName(QString::fromUtf8("certPushButton"));

        gridLayout1->addWidget(certPushButton, 10, 2, 1, 1);

        label_12 = new QLabel(AccountDialogClass);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout1->addWidget(label_12, 11, 0, 1, 1);

        logFileEdit = new QLineEdit(AccountDialogClass);
        logFileEdit->setObjectName(QString::fromUtf8("logFileEdit"));

        gridLayout1->addWidget(logFileEdit, 11, 1, 1, 1);

        logFilePushButton = new QPushButton(AccountDialogClass);
        logFilePushButton->setObjectName(QString::fromUtf8("logFilePushButton"));

        gridLayout1->addWidget(logFilePushButton, 11, 2, 1, 1);

        label_13 = new QLabel(AccountDialogClass);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout1->addWidget(label_13, 12, 0, 1, 1);

        xcapUrlEdit = new QLineEdit(AccountDialogClass);
        xcapUrlEdit->setObjectName(QString::fromUtf8("xcapUrlEdit"));
        xcapUrlEdit->setEnabled(false);

        gridLayout1->addWidget(xcapUrlEdit, 12, 1, 1, 2);

        label_14 = new QLabel(AccountDialogClass);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout1->addWidget(label_14, 13, 0, 1, 1);

        logLevelComboBox = new QComboBox(AccountDialogClass);
        logLevelComboBox->setObjectName(QString::fromUtf8("logLevelComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(logLevelComboBox->sizePolicy().hasHeightForWidth());
        logLevelComboBox->setSizePolicy(sizePolicy);

        gridLayout1->addWidget(logLevelComboBox, 13, 1, 1, 2);

        label_15 = new QLabel(AccountDialogClass);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout1->addWidget(label_15, 14, 0, 1, 1);

        sipPortSpinBox = new QSpinBox(AccountDialogClass);
        sipPortSpinBox->setObjectName(QString::fromUtf8("sipPortSpinBox"));
        sipPortSpinBox->setMaximum(65535);

        gridLayout1->addWidget(sipPortSpinBox, 14, 1, 1, 2);


        gridLayout->addLayout(gridLayout1, 0, 0, 1, 3);

        noregistrationBox = new QCheckBox(AccountDialogClass);
        noregistrationBox->setObjectName(QString::fromUtf8("noregistrationBox"));

        gridLayout->addWidget(noregistrationBox, 1, 0, 1, 1);

        line = new QFrame(AccountDialogClass);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 1, 1, 3, 1);

        tlsVerifyServerBox = new QCheckBox(AccountDialogClass);
        tlsVerifyServerBox->setObjectName(QString::fromUtf8("tlsVerifyServerBox"));

        gridLayout->addWidget(tlsVerifyServerBox, 1, 2, 1, 1);

        subscribeBox = new QCheckBox(AccountDialogClass);
        subscribeBox->setObjectName(QString::fromUtf8("subscribeBox"));

        gridLayout->addWidget(subscribeBox, 2, 0, 1, 1);

        publishBox = new QCheckBox(AccountDialogClass);
        publishBox->setObjectName(QString::fromUtf8("publishBox"));

        gridLayout->addWidget(publishBox, 3, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(6);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton = new QPushButton(AccountDialogClass);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setDefault(true);

        hboxLayout->addWidget(okButton);

        cancelButton = new QPushButton(AccountDialogClass);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        hboxLayout->addWidget(cancelButton);

        spacerItem1 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem1);


        gridLayout->addLayout(hboxLayout, 4, 0, 1, 3);

        QWidget::setTabOrder(domainEdit, usernameEdit);
        QWidget::setTabOrder(usernameEdit, passwordEdit);
        QWidget::setTabOrder(passwordEdit, stunEdit);
        QWidget::setTabOrder(stunEdit, outboundproxyEdit);
        QWidget::setTabOrder(outboundproxyEdit, transportComboBox);
        QWidget::setTabOrder(transportComboBox, srtpComboBox);
        QWidget::setTabOrder(srtpComboBox, srtpReqComboBox);
        QWidget::setTabOrder(srtpReqComboBox, tlsCaFileEdit);
        QWidget::setTabOrder(tlsCaFileEdit, caPushButton);
        QWidget::setTabOrder(caPushButton, tlsPrivKeyFileEdit);
        QWidget::setTabOrder(tlsPrivKeyFileEdit, privKeyPushButton);
        QWidget::setTabOrder(privKeyPushButton, tlsCertFileEdit);
        QWidget::setTabOrder(tlsCertFileEdit, certPushButton);
        QWidget::setTabOrder(certPushButton, tlsVerifyServerBox);
        QWidget::setTabOrder(tlsVerifyServerBox, subscribeBox);
        QWidget::setTabOrder(subscribeBox, okButton);
        QWidget::setTabOrder(okButton, cancelButton);

        retranslateUi(AccountDialogClass);
        QObject::connect(okButton, SIGNAL(clicked()), AccountDialogClass, SLOT(accept()));
        QObject::connect(cancelButton, SIGNAL(clicked()), AccountDialogClass, SLOT(reject()));

        QMetaObject::connectSlotsByName(AccountDialogClass);
    } // setupUi

    void retranslateUi(QDialog *AccountDialogClass)
    {
        AccountDialogClass->setWindowTitle(QApplication::translate("AccountDialogClass", "SIP Account Settings" , 0 ));
        label_2->setText(QApplication::translate("AccountDialogClass", "SIP domain:" , 0 ));
#ifndef QT_NO_TOOLTIP
        domainEdit->setToolTip(QApplication::translate("AccountDialogClass", "the domain of your SIP address (e.g. fwd.pulver.com or iptel.org)" , 0 ));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("AccountDialogClass", "SIP user name:" , 0 ));
#ifndef QT_NO_TOOLTIP
        usernameEdit->setToolTip(QApplication::translate("AccountDialogClass", "username of your SIP address (without domain, unless this is explicitely required by the SIP service)" , 0 ));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("AccountDialogClass", "SIP password:" , 0 ));
#ifndef QT_NO_TOOLTIP
        passwordEdit->setToolTip(QApplication::translate("AccountDialogClass", "the password of your SIP account" , 0 ));
#endif // QT_NO_TOOLTIP
        label_4->setText(QApplication::translate("AccountDialogClass", "STUN server:" , 0 ));
#ifndef QT_NO_TOOLTIP
        stunEdit->setToolTip(QApplication::translate("AccountDialogClass", "optional: STUN server. If set, this will activate client-based NAT traversal" , 0 ));
#endif // QT_NO_TOOLTIP
        label_5->setText(QApplication::translate("AccountDialogClass", "Outbound Proxy:" , 0 ));
#ifndef QT_NO_TOOLTIP
        outboundproxyEdit->setToolTip(QApplication::translate("AccountDialogClass", "IPv4 optional, IPv6 mandatory: enter outbound proxy domain <br>name or IP address (without 'sip:', Note: ';lr' <br>parameter will be added automatically and 'transport' <br>parameter will be added according to protocol <br>selection); e.g: 'sip.example.com', '[2A02:8::C0:8A:D0:D]'; <br>Note: IPv6 requires an IP address" , 0 ));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("AccountDialogClass", "Protocol:" , 0 ));
#ifndef QT_NO_TOOLTIP
        transportComboBox->setToolTip(QApplication::translate("AccountDialogClass", "the choosen transport protocol for SIP; Note: If you choose an IPv6 transport you have to configure the outbound proxy with an IPv6 IP address" , 0 ));
#endif // QT_NO_TOOLTIP
        label_7->setText(QApplication::translate("AccountDialogClass", "SRTP:" , 0 ));
#ifndef QT_NO_TOOLTIP
        srtpComboBox->setToolTip(QApplication::translate("AccountDialogClass", "specify if SRTP is completely disabled (reject incoming SAVP SDP), optional (accept SAVP and AVP, send AVP) or mandatory (accept/send SAVP SDP)" , 0 ));
#endif // QT_NO_TOOLTIP
        label_8->setText(QApplication::translate("AccountDialogClass", "SRTP SIP requirements:" , 0 ));
#ifndef QT_NO_TOOLTIP
        srtpReqComboBox->setToolTip(QApplication::translate("AccountDialogClass", "whether SRTP requires secure signaling to the proxy (TLS), end-to-end (SIPS) or none" , 0 ));
#endif // QT_NO_TOOLTIP
        label_9->setText(QApplication::translate("AccountDialogClass", "TLS CA file:" , 0 ));
#ifndef QT_NO_TOOLTIP
        tlsCaFileEdit->setToolTip(QApplication::translate("AccountDialogClass", "optional: the CA certificate file which contains all the CAs which are trusted; this is needed when \"verify TLS server certificate\" is activated" , 0 ));
#endif // QT_NO_TOOLTIP
        caPushButton->setText(QApplication::translate("AccountDialogClass", "Browse" , 0 ));
        label_10->setText(QApplication::translate("AccountDialogClass", "TLS private key file:" , 0 ));
#ifndef QT_NO_TOOLTIP
        tlsPrivKeyFileEdit->setToolTip(QApplication::translate("AccountDialogClass", "optional: the private key of the SIP client (needed when the SIP Proxy requires a TLS certificate from the client (mutual TLS))" , 0 ));
#endif // QT_NO_TOOLTIP
        privKeyPushButton->setText(QApplication::translate("AccountDialogClass", "Browse" , 0 ));
        label_11->setText(QApplication::translate("AccountDialogClass", "TLS certificate file:" , 0 ));
#ifndef QT_NO_TOOLTIP
        tlsCertFileEdit->setToolTip(QApplication::translate("AccountDialogClass", "optional: the certificate of the SIP client (needed when the SIP Proxy requires a TLS certificate from the client (mutual TLS))" , 0 ));
#endif // QT_NO_TOOLTIP
        certPushButton->setText(QApplication::translate("AccountDialogClass", "Browse" , 0 ));
        label_12->setText(QApplication::translate("AccountDialogClass", "Logfile:" , 0 ));
#ifndef QT_NO_TOOLTIP
        logFileEdit->setToolTip(QApplication::translate("AccountDialogClass", "optional: if a file is chosen, the logging will also be written to the specified file" , 0 ));
#endif // QT_NO_TOOLTIP
        logFilePushButton->setText(QApplication::translate("AccountDialogClass", "Browse" , 0 ));
        label_13->setText(QApplication::translate("AccountDialogClass", "XCAP URL:" , 0 ));
#ifndef QT_NO_TOOLTIP
        xcapUrlEdit->setToolTip(QApplication::translate("AccountDialogClass", "The XCAP URL (used for storing the buddylist)" , 0 ));
#endif // QT_NO_TOOLTIP
        xcapUrlEdit->setText(QApplication::translate("AccountDialogClass", "--- not implemented yet ---" , 0 ));
        label_14->setText(QApplication::translate("AccountDialogClass", "Log Level:" , 0 ));
#ifndef QT_NO_TOOLTIP
        logLevelComboBox->setToolTip(QApplication::translate("AccountDialogClass", "the choosen transport protocol for SIP" , 0 ));
#endif // QT_NO_TOOLTIP
        label_15->setText(QApplication::translate("AccountDialogClass", "Local SIP Port:" , 0 ));
#ifndef QT_NO_TOOLTIP
        sipPortSpinBox->setToolTip(QApplication::translate("AccountDialogClass", "Set 0 to use a random SIP port!" , 0 ));
#endif // QT_NO_TOOLTIP
        noregistrationBox->setText(QApplication::translate("AccountDialogClass", "do not REGISTER" , 0 ));
#ifndef QT_NO_TOOLTIP
        tlsVerifyServerBox->setToolTip(QApplication::translate("AccountDialogClass", "if this checkbox is enabled, the certificate presented by the SIP proxy will be validated against the certification authorities in the CA file" , 0 ));
#endif // QT_NO_TOOLTIP
        tlsVerifyServerBox->setText(QApplication::translate("AccountDialogClass", "verify TLS server certificate" , 0 ));
#ifndef QT_NO_TOOLTIP
        subscribeBox->setToolTip(QApplication::translate("AccountDialogClass", "if this checkbox is enabled, the SIP client SUBSCRIBE to the buddies presence" , 0 ));
#endif // QT_NO_TOOLTIP
        subscribeBox->setText(QApplication::translate("AccountDialogClass", "SUBSCRIBE buddies" , 0 ));
#ifndef QT_NO_TOOLTIP
        publishBox->setToolTip(QApplication::translate("AccountDialogClass", "if this checkbox is enabled, the SIP client sends PUBLISH requests to send its presence state to the presence server" , 0 ));
#endif // QT_NO_TOOLTIP
        publishBox->setText(QApplication::translate("AccountDialogClass", "PUBLISH presence state" , 0 ));
        okButton->setText(QApplication::translate("AccountDialogClass", "OK" , 0 ));
        cancelButton->setText(QApplication::translate("AccountDialogClass", "Cancel" , 0 ));
    } // retranslateUi

};

namespace Ui {
    class AccountDialogClass: public Ui_AccountDialogClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACCOUNTDIALOG_H
