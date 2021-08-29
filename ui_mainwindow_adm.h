/********************************************************************************
** Form generated from reading UI file 'mainwindow_adm.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_ADM_H
#define UI_MAINWINDOW_ADM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow_adm
{
public:
    QWidget *centralwidget;
    QTabWidget *Adm_tab;
    QWidget *Book_alter;
    QLabel *label_13;
    QLabel *label_14;
    QLineEdit *book_bname_edit;
    QLineEdit *bcat_name_edit;
    QPushButton *book_search;
    QPushButton *book_add;
    QTableWidget *book_table;
    QPushButton *book_save;
    QWidget *Stu_alter;
    QLabel *label_15;
    QLabel *label_16;
    QLineEdit *stu_sno_edit;
    QLineEdit *stu_sname_edit;
    QPushButton *stu_search;
    QPushButton *stu_add;
    QTableWidget *stu_table;
    QPushButton *stu_save;
    QWidget *Rec;
    QTextBrowser *textBrowser;
    QLabel *label_rec;
    QPushButton *book_rec;
    QPushButton *stu_rec;
    QWidget *Person_info;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *adm_ano;
    QLabel *adm_aname;
    QLabel *adm_sex;
    QLabel *adm_tel;
    QPushButton *update_password;
    QLineEdit *adm_password;
    QLabel *label_2;
    QLabel *label;
    QPushButton *quitButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow_adm)
    {
        if (MainWindow_adm->objectName().isEmpty())
            MainWindow_adm->setObjectName(QStringLiteral("MainWindow_adm"));
        MainWindow_adm->resize(750, 548);
        centralwidget = new QWidget(MainWindow_adm);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Adm_tab = new QTabWidget(centralwidget);
        Adm_tab->setObjectName(QStringLiteral("Adm_tab"));
        Adm_tab->setGeometry(QRect(-10, 90, 791, 451));
        QFont font;
        font.setFamily(QStringLiteral("Adobe Devanagari"));
        font.setPointSize(12);
        Adm_tab->setFont(font);
        Adm_tab->setTabsClosable(false);
        Book_alter = new QWidget();
        Book_alter->setObjectName(QStringLiteral("Book_alter"));
        label_13 = new QLabel(Book_alter);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(100, 10, 51, 31));
        label_13->setFont(font);
        label_14 = new QLabel(Book_alter);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(280, 10, 61, 31));
        label_14->setFont(font);
        book_bname_edit = new QLineEdit(Book_alter);
        book_bname_edit->setObjectName(QStringLiteral("book_bname_edit"));
        book_bname_edit->setGeometry(QRect(40, 40, 161, 31));
        bcat_name_edit = new QLineEdit(Book_alter);
        bcat_name_edit->setObjectName(QStringLiteral("bcat_name_edit"));
        bcat_name_edit->setGeometry(QRect(250, 40, 121, 31));
        book_search = new QPushButton(Book_alter);
        book_search->setObjectName(QStringLiteral("book_search"));
        book_search->setGeometry(QRect(440, 30, 81, 41));
        book_search->setFont(font);
        book_add = new QPushButton(Book_alter);
        book_add->setObjectName(QStringLiteral("book_add"));
        book_add->setGeometry(QRect(590, 30, 81, 41));
        book_add->setFont(font);
        book_table = new QTableWidget(Book_alter);
        if (book_table->columnCount() < 7)
            book_table->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        book_table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        book_table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        book_table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        book_table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        book_table->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        book_table->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        book_table->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        if (book_table->rowCount() < 20)
            book_table->setRowCount(20);
        book_table->setObjectName(QStringLiteral("book_table"));
        book_table->setGeometry(QRect(40, 80, 671, 231));
        book_table->setRowCount(20);
        book_table->setColumnCount(7);
        book_save = new QPushButton(Book_alter);
        book_save->setObjectName(QStringLiteral("book_save"));
        book_save->setGeometry(QRect(310, 320, 81, 41));
        book_save->setFont(font);
        Adm_tab->addTab(Book_alter, QString());
        Stu_alter = new QWidget();
        Stu_alter->setObjectName(QStringLiteral("Stu_alter"));
        label_15 = new QLabel(Stu_alter);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(90, 10, 51, 31));
        label_15->setFont(font);
        label_16 = new QLabel(Stu_alter);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(280, 10, 51, 31));
        label_16->setFont(font);
        stu_sno_edit = new QLineEdit(Stu_alter);
        stu_sno_edit->setObjectName(QStringLiteral("stu_sno_edit"));
        stu_sno_edit->setGeometry(QRect(40, 40, 151, 31));
        stu_sname_edit = new QLineEdit(Stu_alter);
        stu_sname_edit->setObjectName(QStringLiteral("stu_sname_edit"));
        stu_sname_edit->setGeometry(QRect(250, 40, 101, 31));
        stu_search = new QPushButton(Stu_alter);
        stu_search->setObjectName(QStringLiteral("stu_search"));
        stu_search->setGeometry(QRect(420, 30, 81, 41));
        stu_search->setFont(font);
        stu_add = new QPushButton(Stu_alter);
        stu_add->setObjectName(QStringLiteral("stu_add"));
        stu_add->setGeometry(QRect(570, 30, 81, 41));
        stu_add->setFont(font);
        stu_table = new QTableWidget(Stu_alter);
        if (stu_table->columnCount() < 6)
            stu_table->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        stu_table->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        stu_table->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        stu_table->setHorizontalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        stu_table->setHorizontalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        stu_table->setHorizontalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        stu_table->setHorizontalHeaderItem(5, __qtablewidgetitem12);
        if (stu_table->rowCount() < 10)
            stu_table->setRowCount(10);
        stu_table->setObjectName(QStringLiteral("stu_table"));
        stu_table->setGeometry(QRect(40, 80, 671, 231));
        stu_table->setRowCount(10);
        stu_table->setColumnCount(6);
        stu_save = new QPushButton(Stu_alter);
        stu_save->setObjectName(QStringLiteral("stu_save"));
        stu_save->setGeometry(QRect(320, 320, 81, 41));
        stu_save->setFont(font);
        Adm_tab->addTab(Stu_alter, QString());
        Rec = new QWidget();
        Rec->setObjectName(QStringLiteral("Rec"));
        textBrowser = new QTextBrowser(Rec);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(40, 90, 671, 271));
        label_rec = new QLabel(Rec);
        label_rec->setObjectName(QStringLiteral("label_rec"));
        label_rec->setEnabled(true);
        label_rec->setGeometry(QRect(40, 60, 681, 31));
        book_rec = new QPushButton(Rec);
        book_rec->setObjectName(QStringLiteral("book_rec"));
        book_rec->setGeometry(QRect(140, 10, 131, 41));
        stu_rec = new QPushButton(Rec);
        stu_rec->setObjectName(QStringLiteral("stu_rec"));
        stu_rec->setGeometry(QRect(430, 10, 131, 41));
        stu_rec->setCheckable(false);
        Adm_tab->addTab(Rec, QString());
        Person_info = new QWidget();
        Person_info->setObjectName(QStringLiteral("Person_info"));
        label_3 = new QLabel(Person_info);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 50, 61, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Adobe Devanagari"));
        font1.setPointSize(14);
        label_3->setFont(font1);
        label_4 = new QLabel(Person_info);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 100, 61, 31));
        label_4->setFont(font1);
        label_5 = new QLabel(Person_info);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(100, 150, 61, 31));
        label_5->setFont(font1);
        label_6 = new QLabel(Person_info);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(100, 200, 61, 31));
        label_6->setFont(font1);
        label_7 = new QLabel(Person_info);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(100, 250, 61, 31));
        label_7->setFont(font1);
        adm_ano = new QLabel(Person_info);
        adm_ano->setObjectName(QStringLiteral("adm_ano"));
        adm_ano->setGeometry(QRect(180, 50, 191, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(14);
        adm_ano->setFont(font2);
        adm_aname = new QLabel(Person_info);
        adm_aname->setObjectName(QStringLiteral("adm_aname"));
        adm_aname->setGeometry(QRect(180, 100, 191, 31));
        adm_aname->setFont(font2);
        adm_sex = new QLabel(Person_info);
        adm_sex->setObjectName(QStringLiteral("adm_sex"));
        adm_sex->setGeometry(QRect(180, 200, 191, 31));
        adm_sex->setFont(font2);
        adm_tel = new QLabel(Person_info);
        adm_tel->setObjectName(QStringLiteral("adm_tel"));
        adm_tel->setGeometry(QRect(180, 250, 191, 31));
        adm_tel->setFont(font2);
        update_password = new QPushButton(Person_info);
        update_password->setObjectName(QStringLiteral("update_password"));
        update_password->setGeometry(QRect(420, 140, 101, 41));
        update_password->setFont(font);
        adm_password = new QLineEdit(Person_info);
        adm_password->setObjectName(QStringLiteral("adm_password"));
        adm_password->setGeometry(QRect(180, 150, 191, 31));
        Adm_tab->addTab(Person_info, QString());
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(290, 50, 221, 51));
        label_2->setFont(font1);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(230, 10, 321, 41));
        QFont font3;
        font3.setFamily(QStringLiteral("Adobe Devanagari"));
        font3.setPointSize(20);
        font3.setBold(true);
        font3.setWeight(75);
        label->setFont(font3);
        quitButton = new QPushButton(centralwidget);
        quitButton->setObjectName(QStringLiteral("quitButton"));
        quitButton->setGeometry(QRect(630, 60, 81, 31));
        quitButton->setFont(font);
        MainWindow_adm->setCentralWidget(centralwidget);
        label_2->raise();
        label->raise();
        quitButton->raise();
        Adm_tab->raise();
        menubar = new QMenuBar(MainWindow_adm);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 750, 26));
        MainWindow_adm->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow_adm);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow_adm->setStatusBar(statusbar);

        retranslateUi(MainWindow_adm);

        Adm_tab->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow_adm);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow_adm)
    {
        MainWindow_adm->setWindowTitle(QApplication::translate("MainWindow_adm", "MainWindow", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        Adm_tab->setWhatsThis(QApplication::translate("MainWindow_adm", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        label_13->setText(QApplication::translate("MainWindow_adm", "\344\271\246\345\220\215", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow_adm", "\347\261\273\345\210\253\345\220\215", Q_NULLPTR));
        book_search->setText(QApplication::translate("MainWindow_adm", "\346\237\245\350\257\242", Q_NULLPTR));
        book_add->setText(QApplication::translate("MainWindow_adm", "\346\226\260\345\242\236", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = book_table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow_adm", "\344\271\246\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = book_table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow_adm", "\344\271\246\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = book_table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow_adm", "\345\210\206\347\261\273\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = book_table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow_adm", "\345\272\223\345\255\230", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = book_table->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow_adm", "\344\275\215\347\275\256", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = book_table->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow_adm", "\345\207\272\347\211\210\346\227\245\346\234\237", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = book_table->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow_adm", "\344\275\234\350\200\205", Q_NULLPTR));
        book_save->setText(QApplication::translate("MainWindow_adm", "\344\277\235\345\255\230", Q_NULLPTR));
        Adm_tab->setTabText(Adm_tab->indexOf(Book_alter), QApplication::translate("MainWindow_adm", "\345\233\276\344\271\246\344\277\241\346\201\257\347\256\241\347\220\206 ", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow_adm", "\345\255\246\345\217\267", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow_adm", "\345\247\223\345\220\215", Q_NULLPTR));
        stu_search->setText(QApplication::translate("MainWindow_adm", "\346\237\245\350\257\242", Q_NULLPTR));
        stu_add->setText(QApplication::translate("MainWindow_adm", "\346\226\260\345\242\236", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = stu_table->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow_adm", "\345\255\246\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = stu_table->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow_adm", "\345\247\223\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = stu_table->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow_adm", "\345\267\262\345\200\237\346\225\260\351\207\217", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = stu_table->horizontalHeaderItem(3);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow_adm", "\350\257\232\344\277\241\347\255\211\347\272\247", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = stu_table->horizontalHeaderItem(4);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow_adm", "\346\200\247\345\210\253", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = stu_table->horizontalHeaderItem(5);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow_adm", "\344\270\223\344\270\232", Q_NULLPTR));
        stu_save->setText(QApplication::translate("MainWindow_adm", "\344\277\235\345\255\230", Q_NULLPTR));
        Adm_tab->setTabText(Adm_tab->indexOf(Stu_alter), QApplication::translate("MainWindow_adm", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206", Q_NULLPTR));
        label_rec->setText(QApplication::translate("MainWindow_adm", "--------\350\256\260\345\275\225\345\217\267----------\344\271\246\345\217\267-----------\344\271\246\345\220\215-----------\345\272\223\345\255\230------------\344\275\215\347\275\256------------", Q_NULLPTR));
        book_rec->setText(QApplication::translate("MainWindow_adm", "\345\233\276\344\271\246\347\256\241\347\220\206\350\256\260\345\275\225", Q_NULLPTR));
        stu_rec->setText(QApplication::translate("MainWindow_adm", "\345\255\246\347\224\237\347\256\241\347\220\206\350\256\260\345\275\225", Q_NULLPTR));
        Adm_tab->setTabText(Adm_tab->indexOf(Rec), QApplication::translate("MainWindow_adm", "\350\256\260\345\275\225\346\265\217\350\247\210", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow_adm", "\345\267\245\345\217\267\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow_adm", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow_adm", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow_adm", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow_adm", "\347\224\265\350\257\235\357\274\232", Q_NULLPTR));
        adm_ano->setText(QApplication::translate("MainWindow_adm", "label8", Q_NULLPTR));
        adm_aname->setText(QApplication::translate("MainWindow_adm", "label8", Q_NULLPTR));
        adm_sex->setText(QApplication::translate("MainWindow_adm", "label8", Q_NULLPTR));
        adm_tel->setText(QApplication::translate("MainWindow_adm", "label8", Q_NULLPTR));
        update_password->setText(QApplication::translate("MainWindow_adm", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        Adm_tab->setTabText(Adm_tab->indexOf(Person_info), QApplication::translate("MainWindow_adm", "\344\270\252\344\272\272\344\277\241\346\201\257", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow_adm", "Administer,Welcome!", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow_adm", "\345\233\276\344\271\246\351\246\206\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", Q_NULLPTR));
        quitButton->setText(QApplication::translate("MainWindow_adm", "\351\200\200\345\207\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow_adm: public Ui_MainWindow_adm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_ADM_H
