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
    return ((rand() % ((max+1)-min)) + min);
}

void MainWindow::on_btnAnswer_clicked()
{
    //ui->lblDisplay->setText(QString::number(generateRandomNumber(1,100))); //DEBUG
    displayProblem();
}

//int operand1, operand2, correctAnswer; //These are your integers.

void MainWindow::generateEasyAdditionProblem(){
    //Generate random 2 operands and create a correctAnswer using them
<<<<<<< HEAD
operand1 = generateRandomNumber(1,100);
operand2 = generateRandomNumber(1,100);
correctAnswer = operand1- operand2;
=======
    operand1 = generateRandomNumber(1,100);
    operand2 = generateRandomNumber(1,100);
    correctAnswer = operand1+operand2;
>>>>>>> dcfb15418c09e3ed27d585a8abc207f729f09a90
}

void MainWindow::generateEasySubtractionProblem(){

}
void MainWindow::generateEasyMultiplicationProblem(){

}

void MainWindow::generateEasyDivisionProblem(){
    while((operand1 % operand2) != 0){
        operand1 = generateRandomNumber(1,100);
        operand2 = generateRandomNumber(1,100);
    }
    correctAnswer = operand1 / operand2;
}

void MainWindow::displayProblem(){
    ui->lblDisplay->setText(operand1 + operatorSign + operand2);
}

void MainWindow::on_actionAddition_triggered()
{
    operatorSign = "+";
}

void MainWindow::on_actionSubstraction_triggered()
{
    operatorSign = "-";
}

void MainWindow::on_actionMultiplication_triggered()
{
    operatorSign = "*";
}

void MainWindow::on_actionDivision_triggered()
{
    operatorSign = "/";
}
