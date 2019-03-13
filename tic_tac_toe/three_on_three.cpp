#include "three_on_three.h"
#include "ui_three_on_three.h"
#include<QMessageBox>
three_on_three::three_on_three(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::three_on_three)
{
    ui->setupUi(this);
}

bool three_on_three::is_over(){
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
    if(move==9&&end==false){
        QMessageBox::information(this,"Game over","It is draw");
        return end=true;
    }
    return end =false;
}
void three_on_three::whosturn(){
    if(move%2==0){
        ui->label->setText("It is X player turn");
        move++;
    }
 else {
        ui->label->setText("It is 0 player turn");
        move++;
    }
}
three_on_three::~three_on_three()
{
    delete ui;
}

void three_on_three::on_pushButton_clicked()
{   whosturn();
    if(ui->label->text()=="It is X player turn"){
    ui->pushButton->setText("0");}
    if(ui->label->text()=="It is 0 player turn"){
    ui->pushButton->setText("X");}
    ui->pushButton->setDisabled(true);
    is_over();
    if (end==true){hide();}
}

void three_on_three::on_pushButton_2_clicked()
{       whosturn();
       if(ui->label->text()=="It is X player turn"){
       ui->pushButton_2->setText("0");}
       if(ui->label->text()=="It is 0 player turn"){
       ui->pushButton_2->setText("X");}
       ui->pushButton_2->setDisabled(true);
       is_over();
        if (end==true){hide();}
}

void three_on_three::on_pushButton_3_clicked()
{
    whosturn();
     if(ui->label->text()=="It is X player turn"){
     ui->pushButton_3->setText("0");}
     if(ui->label->text()=="It is 0 player turn"){
     ui->pushButton_3->setText("X");}
     ui->pushButton_3->setDisabled(true);
     is_over();
     if (end==true){hide();}
}

void three_on_three::on_pushButton_5_clicked()
{
     whosturn();
     if(ui->label->text()=="It is X player turn"){
     ui->pushButton_5->setText("0");}
     if(ui->label->text()=="It is 0 player turn"){
     ui->pushButton_5->setText("X");}
     ui->pushButton_5->setDisabled(true);
     is_over();
     if (end==true){hide();}
}

void three_on_three::on_pushButton_4_clicked()
{
     whosturn();
     if(ui->label->text()=="It is X player turn"){
     ui->pushButton_4->setText("0");}
     if(ui->label->text()=="It is 0 player turn"){
     ui->pushButton_4->setText("X");}
     ui->pushButton_4->setDisabled(true);
     is_over();
     if (end==true){hide();}
}

void three_on_three::on_pushButton_6_clicked()
{
     whosturn();
     if(ui->label->text()=="It is X player turn"){
     ui->pushButton_6->setText("0");}
     if(ui->label->text()=="It is 0 player turn"){
     ui->pushButton_6->setText("X");}
     ui->pushButton_6->setDisabled(true);
     is_over();
     if (end==true){hide();}
}

void three_on_three::on_pushButton_8_clicked()
{
     whosturn();
     if(ui->label->text()=="It is X player turn"){
     ui->pushButton_8->setText("0");}
     if(ui->label->text()=="It is 0 player turn"){
     ui->pushButton_8->setText("X");}
     ui->pushButton_8->setDisabled(true);
     is_over();
     if (end==true){hide();}
}

void three_on_three::on_pushButton_7_clicked()
{
     whosturn();
     if(ui->label->text()=="It is X player turn"){
     ui->pushButton_7->setText("0");}
     if(ui->label->text()=="It is 0 player turn"){
     ui->pushButton_7->setText("X");}
     ui->pushButton_7->setDisabled(true);
     is_over();
     if (end==true){hide();}
}

void three_on_three::on_pushButton_9_clicked()
{
    whosturn();
     if(ui->label->text()=="It is X player turn"){
     ui->pushButton_9->setText("0");}
     if(ui->label->text()=="It is 0 player turn"){
     ui->pushButton_9->setText("X");}
     ui->pushButton_9->setDisabled(true);
     is_over();
     if (end==true){hide();}
}
