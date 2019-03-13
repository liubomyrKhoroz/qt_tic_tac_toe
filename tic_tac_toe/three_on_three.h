#ifndef THREE_ON_THREE_H
#define THREE_ON_THREE_H

#include <QDialog>
#include<QMessageBox>
namespace Ui {
class three_on_three;
}

class three_on_three : public QDialog
{
    Q_OBJECT
    int move=0;//змінна для зміни гравця
    bool end=false;//змінна для перевірки чи гра закінчена

public:
    bool is_over();//функція для перевірки чи гра закінчена
    void whosturn();//змінна гравця
    explicit three_on_three(QWidget *parent = nullptr);
    ~three_on_three();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::three_on_three *ui;
};

#endif // THREE_ON_THREE_H
