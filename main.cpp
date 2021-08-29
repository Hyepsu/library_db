#include "mainwindow.h"
#include "mainwindow_adm.h"
#include "login.h"
#include "connect.h"
#include <QApplication>
#include <QTextCodec>
#include <QSqlDatabase>
#include <QLayout>
#include <QSlider>
#include <QSpinBox>
#include <QLabel>
#include <QPushButton>
#include <QSqlQuery>
#include <QDebug>
#include <QtSql>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("utf8"));
    createConnection();
    MainWindow w;
    MainWindow_adm adm;
    login log;
    log.exec();
    //qDebug()<<"on"<<endl;
    QString id=log.no;

    if (log.flag==1)
    {
        //log.quit();
        w.show();
        w.show_stu_info(id);
        return a.exec();
    }
    if (log.flag==2)
    {
        //log.close();
        qDebug()<<"flag is 2"<<endl;
        adm.show();
        adm.initial(id);


        return a.exec();
    }
    else
        return 0;
    return a.exec();
}
