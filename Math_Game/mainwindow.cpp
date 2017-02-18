#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    srand(time(NULL));
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::generateRandomNumber(int min, int max) const
{
    return ((rand() % max) + min);
}

void MainWindow::on_btnAnswer_clicked()
{
    //ui->lblDisplay->setText(QString::number(generateRandomNumber(1,100))); //DEBUG
}
