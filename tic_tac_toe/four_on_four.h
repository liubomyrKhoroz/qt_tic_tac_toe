#ifndef FOUR_ON_FOUR_H
#define FOUR_ON_FOUR_H

#include <QDialog>

namespace Ui {
class four_on_four;
}

class four_on_four : public QDialog
{
    Q_OBJECT

public:
    explicit four_on_four(QWidget *parent = nullptr);
    ~four_on_four();

private:
    Ui::four_on_four *ui;
};

#endif // FOUR_ON_FOUR_H
