/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
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
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *stu_log;
    QPushButton *adm_log;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *log_quit;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(400, 300);
        label = new QLabel(login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 100, 72, 31));
        label_2 = new QLabel(login);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 150, 72, 21));
        label_3 = new QLabel(login);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 30, 241, 41));
        stu_log = new QPushButton(login);
        stu_log->setObjectName(QStringLiteral("stu_log"));
        stu_log->setGeometry(QRect(20, 210, 93, 28));
        adm_log = new QPushButton(login);
        adm_log->setObjectName(QStringLiteral("adm_log"));
        adm_log->setGeometry(QRect(150, 210, 93, 28));
        lineEdit = new QLineEdit(login);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(110, 100, 171, 31));
        lineEdit_2 = new QLineEdit(login);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(110, 140, 171, 31));
        log_quit = new QPushButton(login);
        log_quit->setObjectName(QStringLiteral("log_quit"));
        log_quit->setGeometry(QRect(280, 210, 93, 28));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("login", "\350\264\246\345\217\267\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("login", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("login", "\346\254\242\350\277\216\344\275\277\347\224\250\345\233\276\344\271\246\351\246\206\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237\357\274\201", Q_NULLPTR));
        stu_log->setText(QApplication::translate("login", "\345\255\246\347\224\237\347\231\273\345\275\225", Q_NULLPTR));
        adm_log->setText(QApplication::translate("login", "\347\256\241\347\220\206\345\221\230\347\231\273\345\275\225", Q_NULLPTR));
        log_quit->setText(QApplication::translate("login", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
