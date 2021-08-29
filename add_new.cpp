#include "add_new.h"
#include "ui_add_new.h"
#include <QMessageBox>
#include <QtGui>
#include <QSqlDatabase>
#include <QLabel>
#include  <QPushButton>
#include <QSqlQuery>
#include <QtSql>
#include <iostream>
#include <qstring.h>

add_new::add_new(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_new)
{
    ui->setupUi(this);

}

add_new::~add_new()
{
    delete ui;
}

void add_new::prepare(int add_flag)
{
    if (add_flag==1)//新增图书
    {
        ui->sno->setDisabled(true);
        ui->sname->setDisabled(true);
        ui->password->setDisabled(true);
        ui->sex->setDisabled(true);
        ui->dep->setDisabled(true);
        ui->hgrade->setDisabled(true);
        ui->borrowed->setDisabled(true);
        ui->stu_save->setDisabled(true);
        ui->pubdate->setPlaceholderText("XXXX-XX-XX");
    }
    if(add_flag==2)//新增学生信息
    {
        ui->bno->setDisabled(true);
        ui->bname->setDisabled(true);
        ui->cname->setDisabled(true);
        ui->inv->setDisabled(true);
        ui->loc->setDisabled(true);
        ui->pubdate->setDisabled(true);
        ui->aut->setDisabled(true);
        ui->book_save->setDisabled(true);
        ui->borrowed->setText("0");
        ui->borrowed->setReadOnly(true);
    }
}

void add_new::on_book_save_clicked()
{
    QSqlQuery query;
    int exist=0;
    QString bno=ui->bno->text();
    QString bname=ui->bname->text();
    QString cname=ui->cname->text();
    QString inv=ui->inv->text();
    QString loc=ui->loc->text();
    QString pubdate=ui->pubdate->text();
    QString aut=ui->aut->text();
    QString bname0,bno0,cno;





    if (bno.isEmpty() || bname.isEmpty() ||loc.isEmpty())
    {
        QMessageBox::warning(this,tr("警告"),tr("带星号属性不能为空!"),QMessageBox::Yes);
        return;
    }

    query.exec("select * from book");
    while( query.next())
    {//指向第一条记录
      bno0=query.value(0).toString();
      bname0=query.value(1).toString();
      if(!QString::compare(bno,bno0) ||!QString::compare(bname,bname0)) //书已存在
      {
         exist=1;
         break;
      }
    }

    if (exist)
    {
        QMessageBox::warning(this,tr("警告"),tr("该书已存在！"),QMessageBox::Yes);
    }
    else
    {

        query.prepare("insert into book values(:bno,:bname,:inv,:loc,:pubdate,:aut)");//准备插入
        query.bindValue(":bno",bno);
        query.bindValue(":bname",bname);
        query.bindValue(":inv",inv);
        query.bindValue(":loc",loc);
        if(pubdate.isEmpty())
            query.bindValue(":pubdate",QString());
        else
            query.bindValue(":pubdate",pubdate);
        query.bindValue(":aut",aut);
        query.exec();

        //query.exec("insert into book values('AU288','马',5,'B300-AU','2018-11-11','哈哈')");

        /*
        QString insertBook;
        insertBook = "insert into book values('"+bno+"','"+bname+"',"+inv.toInt()+",'"+loc+"','"+pubdate+
                "','"+aut+"')";
        query.exec(insertBook);
        */
        //query.exec("insert into book(bno) values('"+AU008+")");

        query.exec("select * from bcat where cname like '"+cname+"'");
        query.first();
        cno=query.value(0).toString();
        query.prepare("insert into sort values(:bno5,:cno5)");
        query.bindValue(":bno5",bno);
        query.bindValue(":cno5",cno);
        query.exec();

        QMessageBox::warning(this,tr("提示"),tr("添加图书成功！"),QMessageBox::Yes);
    }
    ui->bno->clear();
    ui->bname->clear();
    ui->cname->clear();
    ui->inv->clear();
    ui->loc->clear();
    ui->pubdate->clear();
    ui->aut->clear();
    ui->pubdate->setPlaceholderText("XXXX-XX-XX");
}
void add_new::on_stu_save_clicked()
{
    QSqlQuery query;
    int exist=0;
    QString sno=ui->sno->text();
    QString sname=ui->sname->text();
    QString password=ui->password->text();
    QString sex=ui->sex->text();
    QString dep=ui->dep->text();
    QString hgrade=ui->hgrade->text();
    QString sno0;

    if (sno.isEmpty() || sname.isEmpty() || password.isEmpty() ||hgrade.isEmpty())
    {
        QMessageBox::warning(this,tr("警告"),tr("带星号属性不能为空!"),QMessageBox::Yes);
        return;
    }

    query.exec("select * from student");
    while( query.next())//指向第一条记录
    {
        sno0=query.value(0).toString();
        if(!QString::compare(sno,sno0)) //学生已存在
        {
            exist=1;
            break;
        }
    }
    if (exist)
    {
        QMessageBox::warning(this,tr("警告"),tr("该学生已存在！"),QMessageBox::Yes);
    }
    else
    {
        query.prepare("insert into student values(:sno,:sname,:password,0,:hgrade,:sex,:dep)");
        query.bindValue(":sno",sno);
        query.bindValue(":sname",sname);
        query.bindValue(":password",password);
        query.bindValue(":hgrade",hgrade);
        query.bindValue(":sex",sex);
        query.bindValue(":dep",dep);
        query.exec();

        QMessageBox::warning(this,tr("提示"),tr("添加学生成功！"),QMessageBox::Yes);
    }
    ui->sno->clear();
    ui->sname->clear();
    ui->password->clear();
    ui->hgrade->clear();
    ui->sex->clear();
    ui->dep->clear();
}
void add_new::on_quit_clicked()
{
    this->close();
}
