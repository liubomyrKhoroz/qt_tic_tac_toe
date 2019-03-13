#include "four_on_four.h"
#include "ui_four_on_four.h"

four_on_four::four_on_four(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::four_on_four)
{
    ui->setupUi(this);
}

four_on_four::~four_on_four()
{
    delete ui;
}
