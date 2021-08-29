#ifndef CONNECT_H
#define CONNECT_H

#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

static bool createConnection()
{
    //<pre name="code" class="cpp">//输出可用数据库
    //qDebug()<<"available drivers:";

    //QStringList drivers = QSqlDatabase::drivers();

    //foreach(QString driver, drivers)

        //qDebug()<<driver;

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    //设置主机名
    db.setHostName("localhost");
    //设置数据库名
    db.setDatabaseName("library_db");
    //设置账号名
    db.setUserName("root");
    //设置密码名
    db.setPassword("hahahaha");
    //设置端口
    db.setPort(3306);

    if(!db.open()){
        qDebug()<<"connection fail！！！"<<endl;
        return false;
    }
    qDebug()<<endl<<"connection succeed！！！"<<endl;
    return true;
}

#endif // CONNECT_H
