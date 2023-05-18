/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QPushButton *pushButton_cancel;
    QPushButton *pushButton_login;
    QLineEdit *lineEdit_username;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *lineEdit_password;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(830, 525);
        pushButton_cancel = new QPushButton(Form);
        pushButton_cancel->setObjectName("pushButton_cancel");
        pushButton_cancel->setGeometry(QRect(450, 270, 161, 71));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        pushButton_cancel->setFont(font);
        pushButton_login = new QPushButton(Form);
        pushButton_login->setObjectName("pushButton_login");
        pushButton_login->setGeometry(QRect(260, 270, 161, 71));
        pushButton_login->setFont(font);
        lineEdit_username = new QLineEdit(Form);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(340, 140, 300, 35));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        lineEdit_username->setFont(font1);
        label_2 = new QLabel(Form);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(180, 190, 151, 31));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(Form);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 140, 151, 31));
        label->setFont(font);
        lineEdit_password = new QLineEdit(Form);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(340, 190, 300, 35));
        lineEdit_password->setFont(font1);
        lineEdit_password->setEchoMode(QLineEdit::Password);

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("Form", "Cancel", nullptr));
        pushButton_login->setText(QCoreApplication::translate("Form", "Login", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "Password:", nullptr));
        label->setText(QCoreApplication::translate("Form", "Username:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
