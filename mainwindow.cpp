#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFont>
#include "connect.h"
#include <QDebug>
#include <QObject>
#include <QCheckBox>
#include <QDateTime>
#include <QDate>

QString sno;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //connect(ui->borBookTable,SIGNAL(itemClicked(QTableWidgetItem*)),this,SLOT(myInfo()));
    connect(ui->bookTable,SIGNAL(itemClicked(QTableWidgetItem*)),this,SLOT(btnEnabled()));
    //ui->returnBtn->setStyleSheet("border-image:url(me.png)");
    this->setObjectName("dialog");
    this->setStyleSheet("QDialog#dialog{border-image:url(me.png)}");

    this->setAutoFillBackground(true); // 这句要加上, 否则可能显示不出背景图.
    QPalette palette = this->palette();
    palette.setBrush(QPalette::Window,
            QBrush(QPixmap("sjtu.png").scaled(// 缩放背景图.
                this->size(),
                Qt::IgnoreAspectRatio,
                Qt::SmoothTransformation)));             // 使用平滑的缩放方式
    this->setPalette(palette);

    //ui->tabWidget->setStyleSheet("QTabWidget:pane {border-top:0px solid #e8f3f9;background:  transparent; }");

}

MainWindow::~MainWindow()
{
    delete ui;
}

QString ToStr(int number, int size)
{
    return QString("%1").arg(number, size, 10, QChar('0'));
}

//个人信息页——显示基本信息
void MainWindow::show_stu_info(QString id)
{
    QSqlQuery query;
    sno = id;
    query.exec("select * from student where sno='"+sno+"'");
    query.next();
    ui->idLabel->setText(query.value(0).toString());
    ui->nameLabel->setText(query.value(1).toString());
    ui->sexLabel->setText(query.value(5).toString());
    ui->deptLabel->setText(query.value(6).toString());
    ui->pswdEdit->setText("******");
    ui->pswdEdit->setReadOnly(true);

    ui->borBtn->setDisabled(true);

    initial(ui->bookTable);
    refresh_borBookTable();


}
//归还页——刷新借阅列表
void MainWindow::refresh_borBookTable()
{
    clean_table(ui->borBookTable);
    QSqlQuery query;
    query.exec("select * from borrec where sno1='"+sno+"'");
    int i=0;

    while (query.next())
    {
        QString brno = query.value(0).toString();
        QString bno1 = query.value(2).toString();
        QString bdate = query.value(3).toString();
        QString rdate = query.value(4).toString();
        QTableWidgetItem *check = new QTableWidgetItem;
        check->setCheckState(Qt::Unchecked);
        ui->borBookTable->setItem(i,0,check);
        ui->borBookTable->setItem(i,1,new QTableWidgetItem(brno));
        ui->borBookTable->setItem(i,2,new QTableWidgetItem(sno));
        ui->borBookTable->setItem(i,3,new QTableWidgetItem(bno1));
        ui->borBookTable->setItem(i,4,new QTableWidgetItem(bdate));
        ui->borBookTable->setItem(i,5,new QTableWidgetItem(rdate));
        i++;
    }
    ui->borBookTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->borBookTable->setSelectionBehavior(QAbstractItemView::SelectRows);

}
//归还页——归还按钮
void MainWindow::on_returnBtn_clicked()
{
    QSqlQuery query;
    int row = ui->borBookTable->rowCount();
    int flag = 0;
    for(int i=0;i<row;++i)
    {
        if(ui->borBookTable->item(i,0)->checkState())
        {
            QString bno2 = ui->borBookTable->item(i,3)->text();
            QString rdate = ui->borBookTable->item(i,5)->text();
            QDateTime dt;
            QDate date;
            dt.setDate(date.currentDate());
            QString ARdate = dt.toString("yyyy-MM-dd");
            QString curDate = dt.toString("yyyyMM");
            QDate Rdate = QDate::fromString(rdate,"yyyy-MM-dd");
            int ove;
            ove = Rdate.daysTo(date.currentDate());
            ove = ove > 0 ? ove : 0;
            int cha = ove * 1;

            int n = 1;
            QString RRno = curDate+"RR"+ToStr(n,4);
            query.exec("select * from retrec where rrno ='"+RRno+"'");
            while(query.next())
            {
                n++;
                if(n>9999)
                    n = 1;
                RRno = curDate+"RR"+ToStr(n,4);
                query.exec("select * from retrec where rrno ='"+RRno+"'");
            }
            qDebug()<<RRno<<endl;
            query.prepare("insert into retrec values(:rrno,:sno2,:bno2,:rdate,:ardate,:ove,:cha)");
            query.bindValue(":rrno",RRno);
            query.bindValue(":sno2",sno);
            query.bindValue(":bno2",bno2);
            query.bindValue(":rdate",rdate);
            query.bindValue(":ardate",ARdate);
            query.bindValue(":ove",ove);
            query.bindValue(":cha",cha);
            query.exec();
            //qDebug()<<RRno<<' '<<sno<<' '<<bno2<<endl<<rdate<<ARdate<<ove<<cha<<endl;

            query.exec("delete from borrec where sno1 ='"+sno+"' and bno1 ='"+bno2+"'");
            query.exec("update book set inv=inv+1 where bno ='"+bno2+"'");
            query.exec("update student set borrowed=borrowed-1 where sno='"+sno+"'");

            flag = 1;
        }

    }
    if(!flag)
        QMessageBox::warning(this,tr("警告"),tr("请勾选所要归还的图书！"),QMessageBox::Ok);
    else
    {
        QMessageBox::warning(this,tr("提示"),tr("还书成功！"),QMessageBox::Ok);
        refresh_borBookTable();
    }
}

//个人信息页——修改密码按钮
void MainWindow::on_changePswdBtn_clicked()
{
    if(ui->changePswdBtn->text() == tr("修改密码"))
    {
        ui->changePswdBtn->setText("保存");
        ui->pswdEdit->setReadOnly(false);
        ui->pswdEdit->clear();
        ui->pswdEdit->setEchoMode(QLineEdit::Password);
        ui->pswdEdit->setPlaceholderText("密码最多六位");
    }
    else
    {
        QString newPassword = ui->pswdEdit->text();
        ui->changePswdBtn->setText("修改密码");
        ui->pswdEdit->setEchoMode(QLineEdit::Normal);
        ui->pswdEdit->setText("******");
        ui->pswdEdit->setReadOnly(true);
        QSqlQuery query;
        query.exec("update student set password = '"+newPassword+"' where sno ='"+sno+"'");

    }
}

void MainWindow::on_closeBtn_clicked()
{
    this->close();
}
//借阅页——查询按钮
void MainWindow::on_searchBtn_clicked()
{
    clean_table(ui->bookTable);
    QSqlQuery query;
    QString bname = ui->bnameEdit->text();
    QString author = ui->authorEdit->text();
    //ui->lineEdit->clear();
    if(bname.isEmpty() && author.isEmpty())
    {
        QMessageBox::warning(this,tr("警告"),tr("请输入查询内容！"),QMessageBox::Yes);
        return;
    }
    else if(!bname.isEmpty() && !author.isEmpty())
        query.exec("select * from book where Bname ='"+bname+"' and Aut ='"+author+"'");
    else if(author.isEmpty())
        query.exec("select * from book where Bname ='"+bname+"'");
    else
        query.exec("select * from book where Aut ='"+author+"'");
    int i=0;
    while (query.next())
    {
        QTableWidgetItem *check = new QTableWidgetItem;
        check->setCheckState(Qt::Unchecked);
        ui->bookTable->setItem(i,0,check);

        ui->bookTable->item(i,1)->setText(query.value(0).toString());
        ui->bookTable->item(i,2)->setText(query.value(1).toString());
        ui->bookTable->item(i,3)->setText(QString::number(query.value(2).toInt()));
        ui->bookTable->item(i,4)->setText(query.value(3).toString());
        ui->bookTable->item(i,5)->setText(query.value(4).toString());
        ui->bookTable->item(i,6)->setText(query.value(5).toString());

        i++;
    }
    ui->bookTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->bookTable->setSelectionBehavior(QAbstractItemView::SelectRows);
    if(i == 0)
        QMessageBox::warning(this,tr("警告"),tr("未查询到结果!"),QMessageBox::Yes);
    //qDebug()<<"点了我！"<<QDialog->current_id<<endl;

}


//借阅页——借阅按钮
void MainWindow::on_borBtn_clicked()
{
    QSqlQuery query;
    int row = ui->bookTable->rowCount();
    int flag = 0;
    for(int i=0;i<row;++i)
    {
        if(ui->bookTable->item(i,0)->checkState())
        {
            QString bno1 = ui->bookTable->item(i,1)->text();
            query.exec("select * from borrec where bno1='"+bno1+"' and sno1='"+sno+"'");
            if(query.next())
            {
                QMessageBox::warning(this,tr("警告"),tr("不能重复借阅！"),QMessageBox::Yes);
                return;
            }
            int inv = ui->bookTable->item(i,3)->text().toInt();
            if(inv <= 0)
            {
                QMessageBox::warning(this,tr("警告"),tr("库存不足，无法借阅！"),QMessageBox::Yes);
                return;
            }
            QDateTime dt,Rdt;
            QDate date;
            dt.setDate(date.currentDate());
            QString bdate = dt.toString("yyyy-MM-dd");
            QString curDate = dt.toString("yyyyMM");
            Rdt.setDate(date.currentDate().addMonths(1));
            QString rdate = Rdt.toString("yyyy-MM-dd");



            int n = 1;
            //QString n_str = ToStr(n,4);
            QString brno = curDate+"BR"+ToStr(n,4);
            query.exec("select * from borrec where brno='"+brno+"'");
            while(query.next())
            {
                n++;
                if(n > 9999)
                    n = 1;
                brno = curDate+"BR"+ToStr(n,4);
                query.exec("select * from borrec where brno='"+brno+"'");
            }
            //qDebug()<<curDate<<' '<<bdate<<' '<<n_str<<' '<<rdate<<endl;
            qDebug()<<brno<<endl;

            query.prepare("insert into borrec values(:brno,:sno1,:bno1,:bdate,:rdate)");
            query.bindValue(":brno",brno);
            query.bindValue(":sno1",sno);
            query.bindValue(":bno1",bno1);
            query.bindValue(":bdate",bdate);
            query.bindValue(":rdate",rdate);
            query.exec();


            query.exec("update book set inv=inv-1 where bno ='"+bno1+"'");
            inv--;
            ui->bookTable->item(i,3)->setText(QString::number(inv));
            query.exec("update student set borrowed=borrowed+1 where sno='"+sno+"'");

            flag = 1;
            //query.exec("insert into borrec values('201811BR0123','515030910018','AU333','2018-11-11','2018-12-12')");
        }

    }
    if(!flag)
        QMessageBox::warning(this,tr("警告"),tr("请勾选所要借阅的图书！"),QMessageBox::Yes);
    else
    {
        QMessageBox::warning(this,tr("提示"),tr("借书成功！"),QMessageBox::Ok);
        refresh_borBookTable();
    }
}

void MainWindow::myInfo()
{
    qDebug()<<"hello!"<<endl;
}

void MainWindow::btnEnabled()
{
    ui->borBtn->setEnabled(true);
}

void MainWindow::clean_table(QTableWidget *tableWidget)
{
    int col = tableWidget->columnCount();
    int row = tableWidget->rowCount();
    for(int i=0;i<row;i++)
    {
        for (int j=0;j<col;j++)
        {
            tableWidget->setItem(i,j,new QTableWidgetItem(""));
        }
    }
}

void MainWindow::initial(QTableWidget *tableWidget)
{
    QTableWidgetItem *item;
    int col = tableWidget->columnCount();
    int row = tableWidget->rowCount();
    for(int i=0;i<row;++i)
    {
        for(int j=0;j<col;++j)
        {
            item = new QTableWidgetItem("");
            tableWidget->setItem(i,j,item);
        }
    }
}
