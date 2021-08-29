#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include <QString>

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();
    QString no;
    int flag = 0;
    void quit()
    {
        on_log_quit_clicked();
    }

private:
    Ui::login *ui;

private slots:
    void on_stu_log_clicked();

    void on_adm_log_clicked();

    void on_log_quit_clicked();

};

#endif // LOGIN_H
