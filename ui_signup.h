/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_signup
{
public:
    QLabel *label_4;
    QLabel *dbcheck;
    QLabel *label_3;
    QLabel *label_5;
    QPushButton *singupbt;
    QPushButton *loginbtn;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *usertxt;
    QLineEdit *passtxt;
    QLineEdit *emailtxt;

    void setupUi(QDialog *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName(QString::fromUtf8("signup"));
        signup->resize(411, 328);
        label_4 = new QLabel(signup);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 210, 47, 13));
        dbcheck = new QLabel(signup);
        dbcheck->setObjectName(QString::fromUtf8("dbcheck"));
        dbcheck->setGeometry(QRect(310, 310, 47, 13));
        label_3 = new QLabel(signup);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 160, 47, 13));
        label_5 = new QLabel(signup);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(290, 10, 111, 20));
        QFont font;
        font.setPointSize(10);
        label_5->setFont(font);
        singupbt = new QPushButton(signup);
        singupbt->setObjectName(QString::fromUtf8("singupbt"));
        singupbt->setGeometry(QRect(150, 290, 80, 21));
        loginbtn = new QPushButton(signup);
        loginbtn->setObjectName(QString::fromUtf8("loginbtn"));
        loginbtn->setGeometry(QRect(300, 30, 80, 21));
        label = new QLabel(signup);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 40, 71, 41));
        QFont font1;
        font1.setPointSize(16);
        label->setFont(font1);
        label_2 = new QLabel(signup);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 110, 47, 13));
        usertxt = new QLineEdit(signup);
        usertxt->setObjectName(QString::fromUtf8("usertxt"));
        usertxt->setGeometry(QRect(150, 110, 113, 21));
        passtxt = new QLineEdit(signup);
        passtxt->setObjectName(QString::fromUtf8("passtxt"));
        passtxt->setGeometry(QRect(150, 160, 113, 21));
        emailtxt = new QLineEdit(signup);
        emailtxt->setObjectName(QString::fromUtf8("emailtxt"));
        emailtxt->setGeometry(QRect(150, 210, 113, 21));

        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QDialog *signup)
    {
        signup->setWindowTitle(QCoreApplication::translate("signup", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("signup", "E-mail", nullptr));
        dbcheck->setText(QCoreApplication::translate("signup", ".", nullptr));
        label_3->setText(QCoreApplication::translate("signup", "Password", nullptr));
        label_5->setText(QCoreApplication::translate("signup", "Alredy singed up ?", nullptr));
        singupbt->setText(QCoreApplication::translate("signup", "Signup", nullptr));
        loginbtn->setText(QCoreApplication::translate("signup", "Login", nullptr));
        label->setText(QCoreApplication::translate("signup", "Signup", nullptr));
        label_2->setText(QCoreApplication::translate("signup", "Username", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
