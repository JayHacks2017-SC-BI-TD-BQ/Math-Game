#include "statistics.h"
#include "ui_statistics.h"

Statistics::Statistics(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Statistics)
{
    ui->setupUi(this);
    labelUpdate(0, 0);
}

Statistics::~Statistics()
{
    delete ui;
}
void Statistics::labelUpdate(int c, int w)
{
    //Updates the labels of the statistics form
    ui->lblCorrectCount->setText("Correct Answers: " + QString::number(c));
    ui->lblIncorrectCount->setText("Incorrect Answers: " + QString::number(w));
}
