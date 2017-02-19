#include "statistics.h"
#include "ui_statistics.h"

Statistics::Statistics(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Statistics)
{
    ui->setupUi(this);
    seconds = 0;
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
void Statistics::displaySeconds(int s)
{
    //Updates the seconds elapsed.
    ui->lblSecondsElapsed->setText("Seconds Elapsed: " + QString::number(s));
}
