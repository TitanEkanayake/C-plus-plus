/********************************************************************************
** Form generated from reading UI file 'customerui.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMERUI_H
#define UI_CUSTOMERUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_customerui
{
public:
    QLabel *label;
    QLineEdit *gendertxt;
    QTableView *tableView;
    QLabel *label_9;
    QLineEdit *agetxt;
    QLabel *label_4;
    QLabel *label_6;
    QLineEdit *dobtxt;
    QLabel *statuslbl;
    QLabel *label_7;
    QLineEdit *emailtxt;
    QLabel *label_2;
    QLineEdit *nictxt;
    QLineEdit *lnametxt;
    QPushButton *refreshbtn;
    QLineEdit *fnametxt;
    QPushButton *updatebtn;
    QLabel *label_3;
    QLineEdit *cnumtxt;
    QLabel *label_5;
    QLineEdit *addrtxt;
    QLabel *label_8;
    QPushButton *savebtn;
    QPushButton *cleearbtn;
    QPushButton *pushButton;
    QComboBox *comboBox;
    QPushButton *deletebtn;
    QPushButton *nicbtn;

    void setupUi(QDialog *customerui)
    {
        if (customerui->objectName().isEmpty())
            customerui->setObjectName(QString::fromUtf8("customerui"));
        customerui->resize(914, 555);
        label = new QLabel(customerui);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 350, 81, 20));
        gendertxt = new QLineEdit(customerui);
        gendertxt->setObjectName(QString::fromUtf8("gendertxt"));
        gendertxt->setGeometry(QRect(350, 390, 113, 21));
        tableView = new QTableView(customerui);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(30, 20, 631, 311));
        label_9 = new QLabel(customerui);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(250, 510, 91, 20));
        agetxt = new QLineEdit(customerui);
        agetxt->setObjectName(QString::fromUtf8("agetxt"));
        agetxt->setGeometry(QRect(350, 350, 113, 21));
        label_4 = new QLabel(customerui);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(60, 470, 71, 16));
        label_6 = new QLabel(customerui);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(300, 470, 47, 13));
        dobtxt = new QLineEdit(customerui);
        dobtxt->setObjectName(QString::fromUtf8("dobtxt"));
        dobtxt->setGeometry(QRect(150, 470, 113, 21));
        statuslbl = new QLabel(customerui);
        statuslbl->setObjectName(QString::fromUtf8("statuslbl"));
        statuslbl->setGeometry(QRect(690, 500, 47, 13));
        label_7 = new QLabel(customerui);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(290, 430, 51, 16));
        emailtxt = new QLineEdit(customerui);
        emailtxt->setObjectName(QString::fromUtf8("emailtxt"));
        emailtxt->setGeometry(QRect(350, 470, 113, 21));
        label_2 = new QLabel(customerui);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 390, 61, 16));
        nictxt = new QLineEdit(customerui);
        nictxt->setObjectName(QString::fromUtf8("nictxt"));
        nictxt->setGeometry(QRect(150, 350, 113, 21));
        lnametxt = new QLineEdit(customerui);
        lnametxt->setObjectName(QString::fromUtf8("lnametxt"));
        lnametxt->setGeometry(QRect(150, 430, 113, 21));
        refreshbtn = new QPushButton(customerui);
        refreshbtn->setObjectName(QString::fromUtf8("refreshbtn"));
        refreshbtn->setGeometry(QRect(730, 140, 91, 61));
        QFont font;
        font.setPointSize(11);
        refreshbtn->setFont(font);
        fnametxt = new QLineEdit(customerui);
        fnametxt->setObjectName(QString::fromUtf8("fnametxt"));
        fnametxt->setGeometry(QRect(150, 390, 113, 21));
        updatebtn = new QPushButton(customerui);
        updatebtn->setObjectName(QString::fromUtf8("updatebtn"));
        updatebtn->setGeometry(QRect(520, 420, 91, 31));
        label_3 = new QLabel(customerui);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 430, 71, 20));
        cnumtxt = new QLineEdit(customerui);
        cnumtxt->setObjectName(QString::fromUtf8("cnumtxt"));
        cnumtxt->setGeometry(QRect(350, 510, 113, 21));
        label_5 = new QLabel(customerui);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(290, 390, 51, 20));
        addrtxt = new QLineEdit(customerui);
        addrtxt->setObjectName(QString::fromUtf8("addrtxt"));
        addrtxt->setGeometry(QRect(350, 430, 113, 21));
        label_8 = new QLabel(customerui);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(310, 350, 31, 16));
        savebtn = new QPushButton(customerui);
        savebtn->setObjectName(QString::fromUtf8("savebtn"));
        savebtn->setGeometry(QRect(520, 360, 91, 31));
        cleearbtn = new QPushButton(customerui);
        cleearbtn->setObjectName(QString::fromUtf8("cleearbtn"));
        cleearbtn->setGeometry(QRect(520, 480, 91, 31));
        pushButton = new QPushButton(customerui);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(820, 20, 80, 21));
        comboBox = new QComboBox(customerui);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(750, 380, 111, 31));
        deletebtn = new QPushButton(customerui);
        deletebtn->setObjectName(QString::fromUtf8("deletebtn"));
        deletebtn->setGeometry(QRect(760, 440, 80, 41));
        nicbtn = new QPushButton(customerui);
        nicbtn->setObjectName(QString::fromUtf8("nicbtn"));
        nicbtn->setGeometry(QRect(660, 380, 80, 31));

        retranslateUi(customerui);

        QMetaObject::connectSlotsByName(customerui);
    } // setupUi

    void retranslateUi(QDialog *customerui)
    {
        customerui->setWindowTitle(QCoreApplication::translate("customerui", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("customerui", "Customer NIC -:", nullptr));
        label_9->setText(QCoreApplication::translate("customerui", "Contact Number -:", nullptr));
        label_4->setText(QCoreApplication::translate("customerui", "Date of birth -:", nullptr));
        label_6->setText(QCoreApplication::translate("customerui", "E-mail -:", nullptr));
        statuslbl->setText(QString());
        label_7->setText(QCoreApplication::translate("customerui", "Address -:", nullptr));
        label_2->setText(QCoreApplication::translate("customerui", "First name -:", nullptr));
        refreshbtn->setText(QCoreApplication::translate("customerui", "Refresh", nullptr));
        updatebtn->setText(QCoreApplication::translate("customerui", "Update", nullptr));
        label_3->setText(QCoreApplication::translate("customerui", "Last name -:", nullptr));
        label_5->setText(QCoreApplication::translate("customerui", "Gender -:", nullptr));
        label_8->setText(QCoreApplication::translate("customerui", "Age -:", nullptr));
        savebtn->setText(QCoreApplication::translate("customerui", "Save", nullptr));
        cleearbtn->setText(QCoreApplication::translate("customerui", "Clear", nullptr));
        pushButton->setText(QCoreApplication::translate("customerui", "signout", nullptr));
        deletebtn->setText(QCoreApplication::translate("customerui", "Delete", nullptr));
        nicbtn->setText(QCoreApplication::translate("customerui", "NIC", nullptr));
    } // retranslateUi

};

namespace Ui {
    class customerui: public Ui_customerui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMERUI_H
