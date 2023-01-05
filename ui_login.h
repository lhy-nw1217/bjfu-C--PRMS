/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLineEdit *usernameLine;
    QLabel *label;
    QLineEdit *passwordLine;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *adminLoginButton;
    QPushButton *exitButton;
    QPushButton *userLoginButton;
    QPushButton *changepw;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(603, 423);
        usernameLine = new QLineEdit(login);
        usernameLine->setObjectName(QStringLiteral("usernameLine"));
        usernameLine->setGeometry(QRect(220, 130, 211, 41));
        label = new QLabel(login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 40, 121, 61));
        passwordLine = new QLineEdit(login);
        passwordLine->setObjectName(QStringLiteral("passwordLine"));
        passwordLine->setGeometry(QRect(220, 204, 211, 41));
        passwordLine->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 130, 81, 41));
        label_3 = new QLabel(login);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(130, 210, 69, 31));
        adminLoginButton = new QPushButton(login);
        adminLoginButton->setObjectName(QStringLiteral("adminLoginButton"));
        adminLoginButton->setGeometry(QRect(140, 280, 93, 29));
        exitButton = new QPushButton(login);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(370, 280, 93, 29));
        userLoginButton = new QPushButton(login);
        userLoginButton->setObjectName(QStringLiteral("userLoginButton"));
        userLoginButton->setGeometry(QRect(250, 330, 93, 29));
        changepw = new QPushButton(login);
        changepw->setObjectName(QStringLiteral("changepw"));
        changepw->setGeometry(QRect(250, 280, 91, 31));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("login", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt;\">\347\231\273\345\275\225</span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("login", "<html><head/><body><p><span style=\" font-size:14pt;\">\350\264\246\345\217\267:</span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("login", "<html><head/><body><p><span style=\" font-size:14pt;\">\345\257\206\347\240\201:</span></p></body></html>", Q_NULLPTR));
        adminLoginButton->setText(QApplication::translate("login", "\347\231\273\345\275\225", Q_NULLPTR));
        exitButton->setText(QApplication::translate("login", "\345\217\226\346\266\210", Q_NULLPTR));
        userLoginButton->setText(QApplication::translate("login", "\346\270\270\345\256\242\347\231\273\345\275\225", Q_NULLPTR));
        changepw->setText(QApplication::translate("login", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
