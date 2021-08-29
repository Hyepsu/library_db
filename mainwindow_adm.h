#ifndef MAINWINDOW_ADM_H
#define MAINWINDOW_ADM_H

#include <QMainWindow>
#include <QWidget>
#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVector>
#include <QLineEdit>
#include <QLayout>
#include <QComboBox>
#include <QLabel>
#include <QFrame>
#include <QGroupBox>
#include <QPushButton>
#include <QTabWidget>
#include <QTreeWidget>
#include <QTextBrowser>
#include <QPalette>
#include <QBrush>
#include <QPixmap>
#include <QtSql>
#include <QStringList>
#include <QPluginLoader>
#include <QMessageBox>
#include <QCheckBox>
#include <QTableWidget>
#include <QString>
#include <QFileDialog>
#include <QDebug>

namespace Ui {
class MainWindow_adm;
}

class MainWindow_adm : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow_adm(QWidget *parent = 0);
    ~MainWindow_adm();
     void initial(QString id);

private:
    Ui::MainWindow_adm *ui;
    void initial_stu_table();
    void initial_book_table();
    void clean_table(QTableWidget *tableWidget);
    int last_col,last_row;
    QString ToStr(int number, int size)
    {
        return QString("%1").arg(number, size, 10, QChar('0'));
    }
private slots:
    void on_quitButton_clicked();
    void on_book_search_clicked();
    void on_book_add_clicked();
    void on_book_save_clicked();
    void on_stu_search_clicked();
    void on_stu_add_clicked();
    void on_stu_save_clicked();
    void on_book_rec_clicked();
    void on_stu_rec_clicked();
    void on_update_password_clicked();
    void svalue_changed(int i,int j);
    void bvalue_changed(int i,int j);
};

#endif // MAINWINDOW_ADM_H
