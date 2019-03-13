#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"three_on_three.h"
#include"four_on_four.h"
#include"three_on_three_pc.h"
#include"rules.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_2_triggered()
{
    close();
}


void MainWindow::on_action_4_4_triggered()
{
    four_on_four window;
    window.setModal(true);
    window.exec();
    hide();
}

void MainWindow::on_action_4_triggered()
{
    three_on_three window;
    window.setModal(true);
    window.exec();
}




void MainWindow::on_action_triggered()
{
    three_on_three_pc window;
    window.setModal(true);
    window.exec();
}

void MainWindow::on_pushButton_clicked()
{
    three_on_three_pc window;
    window.setModal(true);
    window.exec();
}

void MainWindow::on_pushButton_3_clicked()
{
    close();
}

void MainWindow::on_pushButton_2_clicked()
{
    three_on_three window;
    window.setModal(true);
    window.exec();
}

void MainWindow::on_pushButton_4_clicked()
{
    four_on_four window;
    window.setModal(true);
    window.exec();
}

void MainWindow::on_action_3_triggered()
{
    four_on_four window;
    window.setModal(true);
    window.exec();
}
