#include "mainwindow_adm.h"
#include "ui_mainwindow_adm.h"
#include "add_new.h"
#include "connect.h"
#include <QSqlDatabase>
#include <QDebug>
#include <QtGui>
#include <QObject>
#include <QTableWidget>
#include  <QPushButton>
#include <QFont>
#include <QDateTime>
#include <QLabel>
#include <QTextBrowser>
#include <QDate>
#include <QWidget>

QString ano;
extern QSqlDatabase db;
MainWindow_adm::MainWindow_adm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow_adm)
{
    ui->setupUi(this);
    connect(ui->stu_table,SIGNAL(cellChanged(int,int)),this,SLOT(svalue_changed(int,int)));
    connect(ui->book_table,SIGNAL(cellChanged(int,int)),this,SLOT(bvalue_changed(int,int)));
    this->setAutoFillBackground(true);
    QPalette palette = this->palette();
    palette.setBrush(QPalette::Window,
            QBrush(QPixmap("sjtu2.png").scaled(// 缩放背景图.
                this->size(),
                Qt::IgnoreAspectRatio,
                Qt::SmoothTransformation)));             // 使用平滑的缩放方式
    this->setPalette(palette);
}

MainWindow_adm::~MainWindow_adm()
{
    db.removeDatabase("library_db");
    delete ui;
}


void MainWindow_adm::initial(QString id)
{
    //show information of administer
    QSqlQuery query;
    ano=id;
    query.exec("select * from adm where ano ='"+ano+"';");
    query.next();
    QString aname=query.value(1).toString();
    QString sex=query.value(4).toString();
    QString tel=query.value(3).toString();
    ui->adm_ano->setText(ano);
    ui->adm_aname->setText(aname);
    ui->adm_sex->setText(sex);
    ui->adm_tel->setText(tel);
    ui->adm_password->setText("******");
    ui->adm_password->setReadOnly(true);
    ui->label_rec->setText("");

    //initialize tableWidget
    initial_stu_table();
    initial_book_table();

    ui->book_save->setDisabled(true);
    ui->stu_save->setDisabled(true);
}
void MainWindow_adm::on_update_password_clicked()
{
    if(ui->update_password->text() == tr("修改密码"))
    {
        ui->update_password->setText("保存");
        ui->adm_password->setReadOnly(false);
        ui->adm_password->clear();
        ui->adm_password->setEchoMode(QLineEdit::Password);
        ui->adm_password->setPlaceholderText("密码最多六位");
    }
    else
    {
        QString new_password=ui->adm_password->text();
        ui->update_password->setText("修改密码");
        ui->adm_password->setEchoMode(QLineEdit::Normal);
        ui->adm_password->setText("******");
        ui->adm_password->setReadOnly(true);
        QSqlQuery query;
        query.exec("update adm set password='"+new_password+"' where ano='"+ano+"';");
    }
}
void MainWindow_adm::on_book_search_clicked()
{
    clean_table(ui->book_table);
    ui->book_save->setDisabled(true);
    QSqlQuery query,query1;
    QString bname=ui->book_bname_edit->text();
    QString cname=ui->bcat_name_edit->text();
    QString bno,cno;
    if (bname.isEmpty() && cname.isEmpty())
    {
        QMessageBox::warning(this,tr("警告"),tr("书名类别名至少输入一项!"),QMessageBox::Yes);
        return;
    }
    else if (!bname.isEmpty())
    {
        query.exec("select * from book where bname='"+bname+"'");
        int i=0;
        while(query.next())
        {
            bno=query.value(0).toString();
            unsigned inv=query.value(2).toUInt();
            QString loc=query.value(3).toString();
            QString pubdate=query.value(4).toString();
            QString aut=query.value(5).toString();
            query1.exec("select cname from sort,bcat where sort.cno5=bcat.cno and sort.bno5='"+bno+"';");
            if (query1.next())
            {
                cname=query1.value(0).toString();
                ui->book_table->item(i,0)->setText(bno);
                ui->book_table->item(i,1)->setText(bname);
                ui->book_table->item(i,2)->setText(cname);
                ui->book_table->item(i,3)->setText(QString::number(inv));
                ui->book_table->item(i,4)->setText(loc);
                ui->book_table->item(i,5)->setText(pubdate);
                ui->book_table->item(i,6)->setText(aut);
                i++;
            }
            else
            {
                QMessageBox::warning(this,tr("警告"),tr("未找到该书对应的分类!"),QMessageBox::Yes);
                return;
            }
        }
        if (i==0)
        {
            QMessageBox::warning(this,tr("警告"),tr("未搜索到该书!"),QMessageBox::Yes);
        }
        return;
    }
    else
    {
        query.exec("select * from bcat where cname='"+cname+"'");
        int i=0;
        if (query.next())
        {
            cno=query.value(0).toString();
            query1.exec("select book.* from book,sort where sort.bno5=book.bno and sort.cno5='"+cno+"';");
            while(query1.next())
            {
                QString bno=query1.value(0).toString();
                QString bname=query1.value(1).toString();
                unsigned inv=query1.value(2).toUInt();
                QString loc=query1.value(3).toString();
                QString pubdate=query1.value(4).toString();
                QString aut=query1.value(5).toString();
                ui->book_table->item(i,0)->setText(bno);
                ui->book_table->item(i,1)->setText(bname);
                ui->book_table->item(i,2)->setText(cname);
                ui->book_table->item(i,3)->setText(QString::number(inv));
                ui->book_table->item(i,4)->setText(loc);
                ui->book_table->item(i,5)->setText(pubdate);
                ui->book_table->item(i,6)->setText(aut);
                i++;
            }
        }
        if (i==0)
        {
            QMessageBox::warning(this,tr("警告"),tr("未搜索到该类图书!"),QMessageBox::Yes);
        }
        return;
    }
}
void MainWindow_adm::on_book_save_clicked()
{
    //更新图书信息
    QSqlQuery query;
    int i=last_row,j=last_col;
    QString bno=ui->book_table->item(i,0)->text();
    QString temp=ui->book_table->item(i,j)->text();
    if (j==3)
        query.exec("update book set inv="+temp+" where bno='"+bno+"'");
    if (j==4)
        query.exec("update book set loc='"+temp+"' where bno='"+bno+"'");
    ui->book_save->setDisabled(true);
    QMessageBox::warning(this,tr("提示"),tr("修改成功!"),QMessageBox::Yes);

    //添加图书管理记录
    QDate dt;
    int rec_no;
    QString date=dt.currentDate().toString("yyyyMM");
    query.exec("select count(*) from bookrec where ano4='"+ano+"' and brno like '"+date+"%'");
    if (query.next())
    {
        rec_no=query.value(0).toInt()+1;
    }
    QString brno=date+"BR"+ToStr(rec_no,4);
    query.prepare("insert into bookrec values(:brno,:ano4,:bno4,:inv,:loc)");
    query.bindValue(":brno",brno);
    query.bindValue(":ano4",ano);
    query.bindValue(":bno4",bno);
    if (j==3)
    {
        query.bindValue(":inv",temp.toInt());
        query.bindValue(":loc",ui->book_table->item(i,4)->text());
    }
    if (j==4)
    {
        query.bindValue(":loc",temp);
        query.bindValue(":inv",ui->book_table->item(i,3)->text().toInt());
    }
    query.exec();
    return;
}
void MainWindow_adm::on_book_add_clicked()
{
    add_new add;
    add.prepare(1);
    add.show();
    add.exec();
}
void MainWindow_adm::on_stu_search_clicked()
{
    clean_table(ui->stu_table);
    ui->stu_save->setDisabled(true);
    QSqlQuery query;
    QString sno=ui->stu_sno_edit->text();
    QString sname=ui->stu_sname_edit->text();
    if (sno.isEmpty() && sname.isEmpty())
    {
        QMessageBox::warning(this,tr("警告"),tr("学号姓名至少输入一项!"),QMessageBox::Yes);
        return;
    }
    else if (!sno.isEmpty())
    {
        query.exec("select * from student where sno='"+sno+"'");
        if(query.next())
        {
            sname=query.value(1).toString();
            unsigned borrowed=query.value(3).toUInt();
            QString hgrade=query.value(4).toString();
            QString sex=query.value(5).toString();
            QString dep=query.value(6).toString();
            ui->stu_table->item(0,0)->setText(sno);
            ui->stu_table->item(0,1)->setText(sname);
            ui->stu_table->item(0,2)->setText(QString::number(borrowed));
            ui->stu_table->item(0,3)->setText(hgrade);
            ui->stu_table->item(0,4)->setText(sex);
            ui->stu_table->item(0,5)->setText(dep);
            return;
        }
        else
        {
            QMessageBox::warning(this,tr("警告"),tr("未搜索到该学号!"),QMessageBox::Yes);
            return;
        }
    }
    else
    {
        query.exec("select * from student where sname='"+sname+"'");
        int i=0;
        while(query.next())
        {
            sno=query.value(0).toString();
            unsigned borrowed=query.value(3).toUInt();
            QString hgrade=query.value(4).toString();
            QString sex=query.value(5).toString();
            QString dep=query.value(6).toString();
            ui->stu_table->item(i,0)->setText(sno);
            ui->stu_table->item(i,1)->setText(sname);
            ui->stu_table->item(i,2)->setText(QString::number(borrowed));
            ui->stu_table->item(i,3)->setText(hgrade);
            ui->stu_table->item(i,4)->setText(sex);
            ui->stu_table->item(i,5)->setText(dep);
            ++i;
        }
        if (i==0)
        {
            QMessageBox::warning(this,tr("警告"),tr("未搜索到该名字!"),QMessageBox::Yes);
        }
        return;
    }

}
void MainWindow_adm::on_stu_save_clicked()
{
    //更新学生信息
    QSqlQuery query;
    int i=last_row,j=last_col;
    QString sno=ui->stu_table->item(i,0)->text();
    QString temp=ui->stu_table->item(i,j)->text();
    if (j==2)
        query.exec("update student set borrowed="+temp+" where sno='"+sno+"'");
    if (j==3)
        query.exec("update student set hgrade='"+temp+"' where sno='"+sno+"'");
    ui->stu_save->setDisabled(true);
    QMessageBox::warning(this,tr("提示"),tr("修改成功!"),QMessageBox::Yes);

    //添加学生管理记录
    QDate dt;
    int rec_no;
    QString date=dt.currentDate().toString("yyyyMM");
    query.exec("select count(*) from sturec where ano3='"+ano+"' and srno like '"+date+"%'");
    if (query.next())
    {
        rec_no=query.value(0).toInt()+1;
    }
    QString srno=date+"SR"+ToStr(rec_no,4);
    query.prepare("insert into sturec values(:srno,:ano3,:sno3,:borrowed,:hgrade)");
    query.bindValue(":srno",srno);
    query.bindValue(":ano3",ano);
    query.bindValue(":sno3",sno);
    if (j==2)
    {
        query.bindValue(":borrowed",temp.toInt());
        query.bindValue(":hgrade",ui->stu_table->item(i,3)->text());
    }
    if (j==3)
    {
        query.bindValue(":hgrade",temp);
        query.bindValue(":borrowed",ui->stu_table->item(i,2)->text().toInt());
    }
    query.exec();
    return;
}
void MainWindow_adm::on_stu_add_clicked()
{
    add_new add;
    add.prepare(2);
    add.show();
    add.exec();
}

void MainWindow_adm::on_stu_rec_clicked()
{
    ui->textBrowser->clear();
    QSqlQuery query;
    QString result;
    ui->label_rec->setText("----记录号---------------学号---------------姓名---------已借数量-----诚信等级-----");
    query.exec("select * from sturec,student where sturec.ano3='"+ano+"' and sturec.sno3=student.sno");
    while(query.next())
    {
        result=query.value(0).toString()+"\t"+query.value(2).toString()+"\t"
                +query.value(6).toString()+"\t\t"+query.value(3).toString()+"\t"
                +query.value(4).toString()+"\n";
        ui->textBrowser->insertPlainText(result);
    }
    return;
}
void MainWindow_adm::on_book_rec_clicked()
{
    ui->textBrowser->clear();
    QSqlQuery query;
    QString result;
    ui->label_rec->setText("----记录号-----------书号----------书名-------------库存--------位置-----------------");
    query.exec("select * from bookrec,book where bookrec.ano4='"+ano+"' and bookrec.bno4=book.bno");
    while(query.next())
    {
        result=query.value(0).toString()+"\t"+query.value(2).toString()+"\t"
                +query.value(6).toString()+"\t"+query.value(3).toString()+"\t"
                +query.value(4).toString()+"\n";
        ui->textBrowser->insertPlainText(result);
    }
    return;
}

void MainWindow_adm::on_quitButton_clicked()
{
    this->close();
}
void MainWindow_adm::initial_stu_table()
{
    QTableWidget *tableWidget=ui->stu_table;
    QTableWidgetItem *item;
    int col = tableWidget->columnCount();
    int row = tableWidget->rowCount();
    for(int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            item=new QTableWidgetItem("");
            tableWidget->setItem(i,j,item);
            if (j<2 || j>3)
                item->setFlags(item->flags() & (~Qt::ItemIsEditable));
        }
    }
}
void MainWindow_adm::initial_book_table()
{
    QTableWidget *tableWidget=ui->book_table;
    QTableWidgetItem *item;
    int col = tableWidget->columnCount();
    int row = tableWidget->rowCount();
    for(int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            item=new QTableWidgetItem("");
            tableWidget->setItem(i,j,item);
            if (j<3 ||j>4)
                item->setFlags(item->flags() & (~Qt::ItemIsEditable));
        }
    }
}
void MainWindow_adm::clean_table(QTableWidget *tableWidget)
{
    int col = tableWidget->columnCount();
    int row = tableWidget->rowCount();
    for(int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            tableWidget->item(i,j)->setText("");
        }
    }
}
void MainWindow_adm::svalue_changed(int i, int j)
{
    ui->stu_save->setEnabled(true);
    last_row=i;
    last_col=j;
}
void MainWindow_adm::bvalue_changed(int i, int j)
{
    ui->book_save->setEnabled(true);
    last_row=i;
    last_col=j;
}
