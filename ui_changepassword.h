/********************************************************************************
** Form generated from reading UI file 'changepassword.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPASSWORD_H
#define UI_CHANGEPASSWORD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_changepassword
{
public:
    QPushButton *pushButton;
    QLineEdit *oldpw;
    QLineEdit *newpw;
    QLabel *title;
    QLabel *oldlabel;
    QLabel *newlable;
    QPushButton *pushButton_2;

    void setupUi(QWidget *changepassword)
    {
        if (changepassword->objectName().isEmpty())
            changepassword->setObjectName(QStringLiteral("changepassword"));
        changepassword->resize(513, 371);
        pushButton = new QPushButton(changepassword);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 270, 80, 20));
        oldpw = new QLineEdit(changepassword);
        oldpw->setObjectName(QStringLiteral("oldpw"));
        oldpw->setGeometry(QRect(200, 140, 141, 31));
        newpw = new QLineEdit(changepassword);
        newpw->setObjectName(QStringLiteral("newpw"));
        newpw->setGeometry(QRect(200, 190, 141, 31));
        title = new QLabel(changepassword);
        title->setObjectName(QStringLiteral("title"));
        title->setGeometry(QRect(160, 80, 151, 41));
        oldlabel = new QLabel(changepassword);
        oldlabel->setObjectName(QStringLiteral("oldlabel"));
        oldlabel->setGeometry(QRect(70, 140, 151, 41));
        newlable = new QLabel(changepassword);
        newlable->setObjectName(QStringLiteral("newlable"));
        newlable->setGeometry(QRect(70, 180, 151, 41));
        pushButton_2 = new QPushButton(changepassword);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 270, 80, 20));

        retranslateUi(changepassword);

        QMetaObject::connectSlotsByName(changepassword);
    } // setupUi

    void retranslateUi(QWidget *changepassword)
    {
        changepassword->setWindowTitle(QApplication::translate("changepassword", "Form", Q_NULLPTR));
        pushButton->setText(QApplication::translate("changepassword", "\347\241\256\350\256\244\344\277\256\346\224\271", Q_NULLPTR));
        title->setText(QApplication::translate("changepassword", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\344\277\256\346\224\271\345\257\206\347\240\201</span></p></body></html>", Q_NULLPTR));
        oldlabel->setText(QApplication::translate("changepassword", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\345\216\237\345\257\206\347\240\201</span></p></body></html>", Q_NULLPTR));
        newlable->setText(QApplication::translate("changepassword", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt;\">\346\226\260\345\257\206\347\240\201</span></p></body></html>", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("changepassword", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class changepassword: public Ui_changepassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPASSWORD_H
