#include "login.h"
#include "ui_login.h"
#include "connect.h"
#include <QMessageBox>
#include <QtGui>
#include <QSqlDatabase>
#include <QLabel>
#include  <QPushButton>
#include <QSqlQuery>
#include<Qdebug>
#include <QtSql>
#include <qstring.h>

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);//将输入字符显示为*
}

login::~login()
{
    delete ui;
}
//学生登录
void login::on_stu_log_clicked()
{
   int valid=0;
   QSqlQuery query;
   QString password0;
   QString id0;
   QString id =ui->lineEdit->text(); //从界面获取id的值
   QString password=ui->lineEdit_2->text();

   if(id.isEmpty()||password.isEmpty())
   {
      QMessageBox::warning(this,tr("Warning"),tr("Input your ID and name!"),QMessageBox::Yes);
       return;
   }

   query.exec("select * from student");
   while (query.next())
   {
       id0=query.value(0).toString();
       password0=query.value(2).toString();

       if(!QString::compare(password,password0)&&!QString::compare(id,id0)) //查到该用户
       {
           valid=1;
           break;
       }
   }
   if(valid)//如果合法
   {
       flag=1;//accept();
       this->close();
   }
   else{
       ui->lineEdit->clear();
       ui->lineEdit_2->clear();
       QMessageBox::warning(this,tr("Warning"),tr("user password or user ID error!"),QMessageBox::Yes);
       //如果不正确，弹出警告对话框
   }
   no=id0;
}

void login::on_adm_log_clicked()
{
   int valid=0;

   QSqlQuery query;
   QString pass0;
   QString id0;
   QString id =ui->lineEdit->text(); //从界面获取id的值
   QString pass=ui->lineEdit_2->text();

   query.exec("select * from adm");
   while( query.next())//指向第一条记录
   {
       id0=query.value(0).toString();
       pass0=query.value(2).toString();
       qDebug()<<id0<<' '<<pass0<<endl;
       if(!QString::compare(pass,pass0)&&!QString::compare(id,id0)) //查到该用户
       {
           valid=1;
           break;
       }
   }

   if(valid) //如果合法
   {
       flag=2;//done(-1);//返回值为-1
       this->close();

   }
    else{
       ui->lineEdit->clear();
       ui->lineEdit_2->clear();
       QMessageBox::warning(this,tr("Warning"),tr("admin ID or password error!"),QMessageBox::Yes);
       //如果不正确，弹出警告对话框
    }
   no=id0;
}

void login::on_log_quit_clicked()
{
    this->close();
}

