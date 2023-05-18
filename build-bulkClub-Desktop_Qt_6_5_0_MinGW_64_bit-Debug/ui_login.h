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

class Ui_login
{
public:
    QPushButton *pushButton_login;
    QLineEdit *lineEdit_username;
    QPushButton *pushButton_cancel;
    QLineEdit *lineEdit_password;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(981, 608);
        pushButton_login = new QPushButton(login);
        pushButton_login->setObjectName("pushButton_login");
        pushButton_login->setGeometry(QRect(290, 330, 161, 71));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        pushButton_login->setFont(font);
        lineEdit_username = new QLineEdit(login);
        lineEdit_username->setObjectName("lineEdit_username");
        lineEdit_username->setGeometry(QRect(370, 200, 300, 35));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        lineEdit_username->setFont(font1);
        pushButton_cancel = new QPushButton(login);
        pushButton_cancel->setObjectName("pushButton_cancel");
        pushButton_cancel->setGeometry(QRect(480, 330, 161, 71));
        pushButton_cancel->setFont(font);
        lineEdit_password = new QLineEdit(login);
        lineEdit_password->setObjectName("lineEdit_password");
        lineEdit_password->setGeometry(QRect(370, 250, 300, 35));
        lineEdit_password->setFont(font1);
        lineEdit_password->setEchoMode(QLineEdit::Password);
        label = new QLabel(login);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 200, 151, 31));
        label->setFont(font);
        label_2 = new QLabel(login);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(210, 250, 151, 31));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Form", nullptr));
        pushButton_login->setText(QCoreApplication::translate("login", "Login", nullptr));
        pushButton_cancel->setText(QCoreApplication::translate("login", "Cancel", nullptr));
        label->setText(QCoreApplication::translate("login", "Username:", nullptr));
        label_2->setText(QCoreApplication::translate("login", "Password:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
