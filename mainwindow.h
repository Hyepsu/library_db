#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTabWidget>
#include <QTableWidget>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT



public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void show_info(QString id);
    void show_stu_info(QString id);
private slots:
    void on_closeBtn_clicked();
    void on_searchBtn_clicked();
    void on_changePswdBtn_clicked();
    void myInfo();
    void on_borBtn_clicked();
    void on_returnBtn_clicked();
    //void on_pushButton_clicked();
    void btnEnabled();
private:
    Ui::MainWindow *ui;
    void clean_table(QTableWidget *tableWidget);
    void initial(QTableWidget *tableWidget);
    void refresh_borBookTable();
};

#endif // MAINWINDOW_H
