#ifndef ADD_NEW_H
#define ADD_NEW_H

#include <QDialog>

namespace Ui {
class add_new;
}

class add_new : public QDialog
{
    Q_OBJECT

public:
    explicit add_new(QWidget *parent = 0);
    void prepare(int add_flag);
    ~add_new();

private:
    Ui::add_new *ui;

private slots:
    void on_book_save_clicked();
    void on_stu_save_clicked();
    void on_quit_clicked();
};

#endif // ADD_NEW_H
