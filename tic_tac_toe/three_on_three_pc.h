#ifndef THREE_ON_THREE_PC_H
#define THREE_ON_THREE_PC_H

#include <QDialog>

namespace Ui {
class three_on_three_pc;
}

class three_on_three_pc : public QDialog
{
    Q_OBJECT
    int move=1;
    bool end=false;
public:
    bool is_over();
    int pc_move();//хід компютера
    explicit three_on_three_pc(QWidget *parent = nullptr);
    ~three_on_three_pc();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::three_on_three_pc *ui;
};

#endif // THREE_ON_THREE_PC_H
