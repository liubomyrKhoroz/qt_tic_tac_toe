#include "three_on_three_pc.h"
#include "ui_three_on_three_pc.h"
#include<QMessageBox>
#include<ctime>
#include <cstdlib>
#include<windows.h>
three_on_three_pc::three_on_three_pc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::three_on_three_pc)
{   srand(time(NULL));
    ui->setupUi(this);
}

three_on_three_pc::~three_on_three_pc()
{
    delete ui;
}
bool three_on_three_pc::is_over(){
    if(ui->pushButton->text()==ui->pushButton_2->text()&&ui->pushButton_2->text()==ui->pushButton_3->text()&&ui->pushButton_3->text()=="X"){
    QMessageBox::information(this,"Game over","X player won");
    return end=true;
    }
    if(ui->pushButton->text()==ui->pushButton_2->text()&&ui->pushButton_2->text()==ui->pushButton_3->text()&&ui->pushButton_3->text()=="0"){
    QMessageBox::information(this,"Game over","0 player won");
    return end=true;
    }
    if(ui->pushButton->text()==ui->pushButton_5->text()&&ui->pushButton_5->text()==ui->pushButton_9->text()&&ui->pushButton_9->text()=="X"){
    QMessageBox::information(this,"Game over","X player won");
    return end=true;
    }
    if(ui->pushButton->text()==ui->pushButton_5->text()&&ui->pushButton_5->text()==ui->pushButton_9->text()&&ui->pushButton_9->text()=="0"){
    QMessageBox::information(this,"Game over","0 player won");
    return end=true;
    }
    if(ui->pushButton_4->text()==ui->pushButton_5->text()&&ui->pushButton_5->text()==ui->pushButton_6->text()&&ui->pushButton_6->text()=="0"){
    QMessageBox::information(this,"Game over","0 player won");
    return end=true; }
    if(ui->pushButton_4->text()==ui->pushButton_5->text()&&ui->pushButton_5->text()==ui->pushButton_6->text()&&ui->pushButton_6->text()=="X"){
    QMessageBox::information(this,"Game over","X player won");
    return end=true;
    }
    if(ui->pushButton_7->text()==ui->pushButton_8->text()&&ui->pushButton_8->text()==ui->pushButton_9->text()&&ui->pushButton_9->text()=="X"){
    QMessageBox::information(this,"Game over","X player won");
    return end=true;
    }
    if(ui->pushButton_7->text()==ui->pushButton_8->text()&&ui->pushButton_8->text()==ui->pushButton_9->text()&&ui->pushButton_9->text()=="0"){
    QMessageBox::information(this,"Game over","0 player won");
    return end=true;
    }
    if(ui->pushButton->text()==ui->pushButton_4->text()&&ui->pushButton_4->text()==ui->pushButton_7->text()&&ui->pushButton_7->text()=="X"){
    QMessageBox::information(this,"Game over","X player won");
    return end=true;
    }
    if(ui->pushButton->text()==ui->pushButton_4->text()&&ui->pushButton_4->text()==ui->pushButton_7->text()&&ui->pushButton_7->text()=="0"){
    QMessageBox::information(this,"Game over","0 player won");
    return end=true;
    }
    if(ui->pushButton_2->text()==ui->pushButton_5->text()&&ui->pushButton_5->text()==ui->pushButton_8->text()&&ui->pushButton_8->text()=="X"){
    QMessageBox::information(this,"Game over","X player won");
    return end=true;
    }
    if(ui->pushButton_2->text()==ui->pushButton_5->text()&&ui->pushButton_5->text()==ui->pushButton_8->text()&&ui->pushButton_8->text()=="0"){
    QMessageBox::information(this,"Game over","0 player won");
    return end=true;
    }
    if(ui->pushButton_3->text()==ui->pushButton_6->text()&&ui->pushButton_6->text()==ui->pushButton_9->text()&&ui->pushButton_9->text()=="X"){
    QMessageBox::information(this,"Game over","X player won");
    return end=true;
    }
    if(ui->pushButton_3->text()==ui->pushButton_6->text()&&ui->pushButton_6->text()==ui->pushButton_9->text()&&ui->pushButton_9->text()=="0"){
    QMessageBox::information(this,"Game over","0 player won");
    return end=true;
    }
    if(ui->pushButton_3->text()==ui->pushButton_5->text()&&ui->pushButton_5->text()==ui->pushButton_7->text()&&ui->pushButton_7->text()=="X"){
    QMessageBox::information(this,"Game over","X player won");
    return end=true;
    }
    if(ui->pushButton_3->text()==ui->pushButton_5->text()&&ui->pushButton_5->text()==ui->pushButton_7->text()&&ui->pushButton_7->text()=="0"){
    QMessageBox::information(this,"Game over","0 player won");
    return end=true;
    }
    if(move==10&&end==false){
        QMessageBox::information(this,"Game over","It is draw");
        return end=true;

    }
}
int three_on_three_pc::pc_move(){

    if (move%2==0&&move!=10){

        if(ui->pushButton_5->isEnabled()==true){
            ui->pushButton_5->setText("0");
            ui->pushButton_5->setDisabled(true);
        }
        else
        {

            int btnN=1+rand()%9;//змінна для вибору кнопки яку буде обрано компютером
            switch (btnN) {
            case 1:
                if(ui->pushButton->isEnabled()==true){
                    ui->pushButton->setText("0");
                    ui->pushButton->setDisabled(true);
                }
                else {
                    return pc_move();
                }
                break;
            case 2:
                if(ui->pushButton_2->isEnabled()==true)
                {ui->pushButton_2->setText("0");
                    ui->pushButton_2->setDisabled(true);}
                else {
                    return pc_move();
                }
                break;
            case 3:
                if(ui->pushButton_3->isEnabled()==true)
                {ui->pushButton_3->setText("0");
                    ui->pushButton_3->setDisabled(true);}
                else {
                    return pc_move();
                }
                break;
            case 4:
                if(ui->pushButton_4->isEnabled()==true)
                {ui->pushButton_4->setText("0");
                    ui->pushButton_4->setDisabled(true);}
                else {
                    return pc_move();
                }
                break;
            case 5:
                if(ui->pushButton_5->isEnabled()==true)
                {ui->pushButton_5->setText("0");
                    ui->pushButton_5->setDisabled(true);}
                else {
                    return pc_move();
                }
                break;
            case 6:
                if(ui->pushButton_6->isEnabled()==true)
                {ui->pushButton_6->setText("0");
                    ui->pushButton_6->setDisabled(true);}
                else {
                    return pc_move();
                }
                break;
            case 7:
                if(ui->pushButton_7->isEnabled()==true)
                {ui->pushButton_7->setText("0");
                    ui->pushButton_7->setDisabled(true);}
                else {
                    return pc_move();
                }
                break;
            case 8:
                if(ui->pushButton_8->isEnabled()==true)
                {ui->pushButton_8->setText("0");
                    ui->pushButton_8->setDisabled(true);}
                else {
                    return pc_move();
                }
                break;
            case 9:
                if(ui->pushButton_9->isEnabled()==true)
                {ui->pushButton_9->setText("0");
                    ui->pushButton_9->setDisabled(true);
                  }
                else {
                    return pc_move();
                }
                break;
            }
        }
    }
    else{
        return 0;
    }
}
void three_on_three_pc::on_pushButton_clicked()
{

    ui->label->setText("It is X player turn");
     if(move%2!=0){
     ui->pushButton->setText("X");}
     ui->pushButton->setDisabled(true);
     move++;
     pc_move();
     is_over();
     if (end==true){hide();}
     move++;
}

void three_on_three_pc::on_pushButton_2_clicked()
{

    ui->label->setText("It is X player turn");
     if(move%2!=0){
     ui->pushButton_2->setText("X");}
     ui->pushButton_2->setDisabled(true);
     move++;
     pc_move();
     is_over();
     if (end==true){hide();}
     move++;
}

void three_on_three_pc::on_pushButton_3_clicked()
{


    ui->label->setText("It is X player turn");
     if(move%2!=0){
     ui->pushButton_3->setText("X");}
     ui->pushButton_3->setDisabled(true);
     move++;
     pc_move();
     is_over();
     if (end==true){hide();}
     move++;

}

void three_on_three_pc::on_pushButton_4_clicked()
{

    ui->label->setText("It is X player turn");
     if(move%2!=0){
     ui->pushButton_4->setText("X");}
     ui->pushButton_4->setDisabled(true);
     move++;
     pc_move();
    is_over();
    if (end==true){hide();}
     move++;
}

void three_on_three_pc::on_pushButton_5_clicked()
{

    ui->label->setText("It is X player turn");
     if(move%2!=0){
     ui->pushButton_5->setText("X");}
     ui->pushButton_5->setDisabled(true);
     move++;
     pc_move();
     is_over();
     if (end==true){hide();}
     move++;
}

void three_on_three_pc::on_pushButton_6_clicked()
{

    ui->label->setText("It is X player turn");
     if(move%2!=0){
     ui->pushButton_6->setText("X");}
     ui->pushButton_6->setDisabled(true);
     move++;
     pc_move();
     is_over();
     if (end==true){hide();}
     move++;
}

void three_on_three_pc::on_pushButton_7_clicked()
{

    ui->label->setText("It is X player turn");
     if(move%2!=0){
     ui->pushButton_7->setText("X");}
     ui->pushButton_7->setDisabled(true);
     move++;
     pc_move();
     is_over();
     if (end==true){hide();}
     move++;
}

void three_on_three_pc::on_pushButton_8_clicked()
{

    ui->label->setText("It is X player turn");
     if(move%2!=0){
     ui->pushButton_8->setText("X");}
     ui->pushButton_8->setDisabled(true);
     move++;
     pc_move();
     is_over();
     if (end==true){hide();}
     move++;
}

void three_on_three_pc::on_pushButton_9_clicked()
{

    ui->label->setText("It is X player turn");
     if(move%2!=0){
     ui->pushButton_9->setText("X");}
     ui->pushButton_9->setDisabled(true);
     move++;
     pc_move();
     is_over();
     if (end==true){hide();}
     move++;
}
