/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *searchBtn;
    QLineEdit *bnameEdit;
    QTableWidget *bookTable;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *authorEdit;
    QPushButton *borBtn;
    QWidget *tab_3;
    QTableWidget *borBookTable;
    QPushButton *returnBtn;
    QLabel *label_5;
    QWidget *tab_4;
    QLabel *label_8;
    QLabel *nameLabel;
    QLabel *label_9;
    QLabel *idLabel;
    QLabel *label_10;
    QLineEdit *pswdEdit;
    QPushButton *changePswdBtn;
    QLabel *label_11;
    QLabel *sexLabel;
    QLabel *label_12;
    QLabel *deptLabel;
    QLabel *label_2;
    QLabel *label;
    QPushButton *closeBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(773, 609);
        QFont font;
        font.setFamily(QStringLiteral("Adobe Devanagari"));
        font.setPointSize(12);
        MainWindow->setFont(font);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 90, 781, 471));
        tabWidget->setFont(font);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        searchBtn = new QPushButton(tab);
        searchBtn->setObjectName(QStringLiteral("searchBtn"));
        searchBtn->setGeometry(QRect(580, 20, 93, 41));
        bnameEdit = new QLineEdit(tab);
        bnameEdit->setObjectName(QStringLiteral("bnameEdit"));
        bnameEdit->setGeometry(QRect(80, 30, 201, 31));
        bookTable = new QTableWidget(tab);
        if (bookTable->columnCount() < 7)
            bookTable->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        bookTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        bookTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        bookTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        bookTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        bookTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        bookTable->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        bookTable->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        if (bookTable->rowCount() < 9)
            bookTable->setRowCount(9);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        bookTable->setVerticalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        bookTable->setVerticalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        bookTable->setVerticalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        bookTable->setVerticalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        bookTable->setVerticalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        bookTable->setVerticalHeaderItem(5, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        bookTable->setVerticalHeaderItem(6, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        bookTable->setVerticalHeaderItem(7, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        bookTable->setVerticalHeaderItem(8, __qtablewidgetitem15);
        bookTable->setObjectName(QStringLiteral("bookTable"));
        bookTable->setGeometry(QRect(40, 80, 681, 271));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 30, 72, 31));
        label_3->setFont(font);
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(310, 30, 72, 31));
        authorEdit = new QLineEdit(tab);
        authorEdit->setObjectName(QStringLiteral("authorEdit"));
        authorEdit->setGeometry(QRect(370, 30, 121, 31));
        borBtn = new QPushButton(tab);
        borBtn->setObjectName(QStringLiteral("borBtn"));
        borBtn->setGeometry(QRect(300, 360, 93, 41));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        borBookTable = new QTableWidget(tab_3);
        if (borBookTable->columnCount() < 6)
            borBookTable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        borBookTable->setHorizontalHeaderItem(0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        borBookTable->setHorizontalHeaderItem(1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        borBookTable->setHorizontalHeaderItem(2, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        borBookTable->setHorizontalHeaderItem(3, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        borBookTable->setHorizontalHeaderItem(4, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        borBookTable->setHorizontalHeaderItem(5, __qtablewidgetitem21);
        if (borBookTable->rowCount() < 10)
            borBookTable->setRowCount(10);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        borBookTable->setVerticalHeaderItem(0, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        borBookTable->setVerticalHeaderItem(1, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        borBookTable->setVerticalHeaderItem(2, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        borBookTable->setVerticalHeaderItem(3, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        borBookTable->setVerticalHeaderItem(4, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        borBookTable->setVerticalHeaderItem(5, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        borBookTable->setVerticalHeaderItem(6, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        borBookTable->setVerticalHeaderItem(7, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        borBookTable->setVerticalHeaderItem(8, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        borBookTable->setVerticalHeaderItem(9, __qtablewidgetitem31);
        borBookTable->setObjectName(QStringLiteral("borBookTable"));
        borBookTable->setGeometry(QRect(0, 60, 721, 291));
        returnBtn = new QPushButton(tab_3);
        returnBtn->setObjectName(QStringLiteral("returnBtn"));
        returnBtn->setGeometry(QRect(300, 357, 93, 41));
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(10, 10, 101, 41));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label_8 = new QLabel(tab_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(70, 64, 72, 31));
        nameLabel = new QLabel(tab_4);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));
        nameLabel->setGeometry(QRect(130, 60, 121, 41));
        label_9 = new QLabel(tab_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(70, 20, 51, 31));
        idLabel = new QLabel(tab_4);
        idLabel->setObjectName(QStringLiteral("idLabel"));
        idLabel->setGeometry(QRect(130, 10, 131, 51));
        label_10 = new QLabel(tab_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(70, 110, 72, 31));
        pswdEdit = new QLineEdit(tab_4);
        pswdEdit->setObjectName(QStringLiteral("pswdEdit"));
        pswdEdit->setGeometry(QRect(132, 110, 181, 31));
        changePswdBtn = new QPushButton(tab_4);
        changePswdBtn->setObjectName(QStringLiteral("changePswdBtn"));
        changePswdBtn->setGeometry(QRect(370, 100, 93, 41));
        label_11 = new QLabel(tab_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(70, 160, 72, 41));
        sexLabel = new QLabel(tab_4);
        sexLabel->setObjectName(QStringLiteral("sexLabel"));
        sexLabel->setGeometry(QRect(130, 160, 72, 41));
        label_12 = new QLabel(tab_4);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(70, 210, 72, 41));
        deptLabel = new QLabel(tab_4);
        deptLabel->setObjectName(QStringLiteral("deptLabel"));
        deptLabel->setGeometry(QRect(130, 210, 151, 41));
        tabWidget->addTab(tab_4, QString());
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(290, 70, 191, 20));
        label_2->setAlignment(Qt::AlignCenter);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 20, 251, 61));
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);
        closeBtn = new QPushButton(centralWidget);
        closeBtn->setObjectName(QStringLiteral("closeBtn"));
        closeBtn->setGeometry(QRect(590, 80, 93, 41));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 773, 33));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        searchBtn->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = bookTable->horizontalHeaderItem(1);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "\344\271\246\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = bookTable->horizontalHeaderItem(2);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "\344\271\246\345\220\215", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = bookTable->horizontalHeaderItem(3);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "\345\272\223\345\255\230", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = bookTable->horizontalHeaderItem(4);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "\344\275\215\347\275\256", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = bookTable->horizontalHeaderItem(5);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "\345\207\272\347\211\210\346\227\245\346\234\237", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = bookTable->horizontalHeaderItem(6);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "\344\275\234\350\200\205", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = bookTable->verticalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = bookTable->verticalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = bookTable->verticalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = bookTable->verticalHeaderItem(3);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = bookTable->verticalHeaderItem(4);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = bookTable->verticalHeaderItem(5);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = bookTable->verticalHeaderItem(6);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = bookTable->verticalHeaderItem(7);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = bookTable->verticalHeaderItem(8);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\344\271\246\345\220\215\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "\344\275\234\350\200\205\357\274\232", Q_NULLPTR));
        borBtn->setText(QApplication::translate("MainWindow", "\345\200\237\351\230\205", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\345\200\237\351\230\205", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = borBookTable->horizontalHeaderItem(1);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "\345\200\237\344\271\246\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = borBookTable->horizontalHeaderItem(2);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "\345\255\246\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = borBookTable->horizontalHeaderItem(3);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "\344\271\246\345\217\267", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = borBookTable->horizontalHeaderItem(4);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "\345\200\237\344\271\246\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = borBookTable->horizontalHeaderItem(5);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "\345\272\224\350\277\230\346\227\266\351\227\264", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = borBookTable->verticalHeaderItem(0);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem21 = borBookTable->verticalHeaderItem(1);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem22 = borBookTable->verticalHeaderItem(2);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem23 = borBookTable->verticalHeaderItem(3);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem24 = borBookTable->verticalHeaderItem(4);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem25 = borBookTable->verticalHeaderItem(5);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem26 = borBookTable->verticalHeaderItem(6);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem27 = borBookTable->verticalHeaderItem(7);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem28 = borBookTable->verticalHeaderItem(8);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem29 = borBookTable->verticalHeaderItem(9);
        ___qtablewidgetitem29->setText(QApplication::translate("MainWindow", "10", Q_NULLPTR));
        returnBtn->setText(QApplication::translate("MainWindow", "\345\275\222\350\277\230", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\345\200\237\351\230\205\345\210\227\350\241\250", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\345\275\222\350\277\230", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215\357\274\232", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\255\246\345\217\267\357\274\232</span></p></body></html>", Q_NULLPTR));
        idLabel->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        changePswdBtn->setText(QApplication::translate("MainWindow", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "\346\200\247\345\210\253\357\274\232", Q_NULLPTR));
        sexLabel->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "\344\270\223\344\270\232\357\274\232", Q_NULLPTR));
        deptLabel->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "\344\270\252\344\272\272\344\277\241\346\201\257", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Student,Welcome!</span></p></body></html>", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600;\">\345\233\276\344\271\246\351\246\206\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237</span></p></body></html>", Q_NULLPTR));
        closeBtn->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
