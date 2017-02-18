#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    srand(time(NULL));
    ui->setupUi(this);
    operatorSign = "";
    difficulty = "";
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
    if(ui->txtAnswerInput->text() == QString::number(correctAnswer)){
        ui->lblCorrect->setText("Correct!");
    }else{
        ui->lblCorrect->setText("Wrong!");
    }
}

//int operand1, operand2, correctAnswer; //These are your integers.

void MainWindow::generateEasyAdditionProblem(){
    //Generate random 2 operands and create a correctAnswer using them
    operand1 = generateRandomNumber(1,100);
    operand2 = generateRandomNumber(1,100);
    correctAnswer = operand1+operand2;
}

void MainWindow::generateEasySubtractionProblem(){
    operand1 = generateRandomNumber(1,100);
    operand2 = generateRandomNumber(1,100);
    correctAnswer = operand1-operand2;
}
void MainWindow::generateEasyMultiplicationProblem(){
    operand1 = generateRandomNumber(1,100);
    operand2 = generateRandomNumber(1,100);
    correctAnswer = operand1*operand2;
}

void MainWindow::generateEasyDivisionProblem(){
    operand1 = generateRandomNumber(1,100);
    operand2 = generateRandomNumber(1,100);
    while((operand2 == 0) || (operand1 % operand2) != 0){
        operand1 = generateRandomNumber(1,100);
        operand2 = generateRandomNumber(1,100);
    }
    correctAnswer = operand1 / operand2;
}
void MainWindow::generateMediumAdditionProblem(){
    //Generate random 2 operands and create a correctAnswer using them
    operand1 = generateRandomNumber(1,1000);
    operand2 = generateRandomNumber(1,1000);
    correctAnswer = operand1+operand2;
}

void MainWindow::generateMediumSubtractionProblem(){
    operand1 = generateRandomNumber(1,1000);
    operand2 = generateRandomNumber(1,1000);
    correctAnswer = operand1- operand2;
}
void MainWindow::generateMediumMultiplicationProblem(){
    operand1 = generateRandomNumber(1,1000);
    operand2 = generateRandomNumber(1,1000);
    correctAnswer = operand1 * operand2;
}

void MainWindow::generateMediumDivisionProblem(){
    operand1 = generateRandomNumber(1,100);
    operand2 = generateRandomNumber(1,100);
    while((operand1 % operand2) != 0){
        operand1 = generateRandomNumber(1,1000);
        operand2 = generateRandomNumber(1,1000);
    }
    correctAnswer = operand1 / operand2;
}

void MainWindow::generateHardAdditionProblem(){
    //Generate random 2 operands and create a correctAnswer using them
    operand1 = generateRandomNumber(1,10000);
    operand2 = generateRandomNumber(1,10000);
    correctAnswer = operand1+operand2;
}
void MainWindow::generateHardSubtractionProblem(){
    operand1 = generateRandomNumber(1,10000);
    operand2 = generateRandomNumber(1,10000);
    correctAnswer = operand1- operand2;
}
void MainWindow::generateHardMultiplicationProblem(){
    operand1 = generateRandomNumber(1,10000);
    operand2 = generateRandomNumber(1,10000);
    correctAnswer = operand1 * operand2;
}

void MainWindow::generateHardDivisionProblem(){
    operand1 = generateRandomNumber(1,100);
    operand2 = generateRandomNumber(1,100);
    while((operand1 % operand2) != 0){
        operand1 = generateRandomNumber(1,10000);
        operand2 = generateRandomNumber(1,10000);
    }
    correctAnswer = operand1 / operand2;
}

void MainWindow::generateProblem(){
   if(operatorSign == "+"){
       if(difficulty == "easy"){
            generateEasyAdditionProblem();
       }else if(difficulty == "medium"){
            generateMediumAdditionProblem();
       }else if(difficulty == "hard"){
            generateHardAdditionProblem();
       }
   }else if(operatorSign == "-"){
       if(difficulty == "easy"){
            generateEasySubtractionProblem();
       }else if(difficulty == "medium"){
            generateMediumSubtractionProblem();
       }else if(difficulty == "hard"){
            generateHardSubtractionProblem();
       }
   }else if(operatorSign == "*"){
       if(difficulty == "easy"){
            generateEasyMultiplicationProblem();
       }else if(difficulty == "medium"){
            generateMediumMultiplicationProblem();
       }else if(difficulty == "hard"){
            generateHardMultiplicationProblem();
       }
   }else if(operatorSign == "/"){
       if(difficulty == "easy"){
            generateEasyDivisionProblem();
       }else if(difficulty == "medium"){
            generateMediumDivisionProblem();
       }else if(difficulty == "hard"){
            generateHardDivisionProblem();
       }
   }
}


void MainWindow::displayProblem(){
    ui->lblDisplay->setText("What is: " + QString::number(operand1) + " " + operatorSign + " " + QString::number(operand2));
}

void MainWindow::on_actionAddition_triggered()
{
    operatorSign = "+";
    if(difficulty != ""){
        begin();
    }
}

void MainWindow::on_actionSubstraction_triggered()
{
    operatorSign = "-";
    if(difficulty != ""){
        begin();
    }
}

void MainWindow::on_actionMultiplication_triggered()
{
    operatorSign = "*";
    if(difficulty != ""){
        begin();
    }
}

void MainWindow::on_actionDivision_triggered()
{
    operatorSign = "/";
    if(difficulty != ""){
        begin();
    }
}


void MainWindow::on_actionEasy_5_triggered()
{
    difficulty = "easy";
    if(operatorSign != ""){
        begin();
    }
}

void MainWindow::on_actionMedium_5_triggered()
{
    difficulty = "medium";
    if(operatorSign != ""){
        begin();
    }
}

void MainWindow::on_actionHard_5_triggered()
{
    difficulty = "hard";
    if(operatorSign != ""){
        begin();
    }
}

void MainWindow::begin()
{
    generateProblem();
    displayProblem();
    ui->txtAnswerInput->setEnabled(true);
    ui->btnAnswer->setEnabled(true);

}

void MainWindow::on_btnNextProblem_clicked()
{

}
