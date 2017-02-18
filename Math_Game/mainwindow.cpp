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
    if(ui->txtAnswerInput->toPlainText() == QString::number(correctAnswer)){
        ui->lblDisplay->setText("Correct!");
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
    correctAnswer = operand1- operand2;
}
void MainWindow::generateEasyMultiplicationProblem(){
    operand1 = generateRandomNumber(1,100);
    operand2 = generateRandomNumber(1,100);
    correctAnswer = operand1 * operand2;
}

void MainWindow::generateEasyDivisionProblem(){
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
    while((operand1 % operand2) != 0){
        operand1 = generateRandomNumber(1,10000);
        operand2 = generateRandomNumber(1,10000);
    }
    correctAnswer = operand1 / operand2;
}

void MainWindow::generateProblem(){
   if(operatorSign == "+"){
       if(difficulty == "easy"){

       }else if(difficulty == "medium"){

       }else if(difficulty == "hard"){

       }
   }else if(operatorSign == "-"){
       if(difficulty == "easy"){

       }else if(difficulty == "medium"){

       }else if(difficulty == "hard"){

       }
   }else if(operatorSign == "*"){
       if(difficulty == "easy"){
            generateEasyMultiplicationProblem();
       }else if(difficulty == "medium"){
            generateMediumMultiplicationProblem();
       }else if(difficulty == "hard"){

       }
   }else if(operatorSign == "/"){
       if(difficulty == "easy"){
            generateEasyDivisionProblem();
       }else if(difficulty == "medium"){
            generateMediumDivisionProblem();
       }else if(difficulty == "hard"){

       }
   }
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
    while ((operand1 == 0) || (operand2 == 0) || (operand1%10 == 0) || (operand2%10 == 0)) {
        operand1 = generateRandomNumber(10,1000);
        operand2 = generateRandomNumber(10,1000);
        correctAnswer = operand1 * operand2;
    }
}

void MainWindow::generateMediumDivisionProblem(){
    while((operand2 == 0) || (operand1 % operand2) != 0){
        operand1 = generateRandomNumber(1,1000);
        operand2 = generateRandomNumber(1,1000);
    }
    correctAnswer = operand1 / operand2;
}

<<<<<<< HEAD

void MainWindow::generateHardAdditionProblem(){
    operand1 = generateRandomNumber(1,10000);
    operand2 = generateRandomNumber(1,10000);
    correctAnswer = operand1+operand2;
}

void MainWindow::generateHardMultiplicationProblem() {
    while ((operand1 == 0) || (operand2 == 0) || (operand1%10 == 0) || (operand2%10 == 0)){
        operand1 = generateRandomNumber(100,1000);
    }
}
=======
>>>>>>> b429bf622e259543ce1bebf584a9c909ef213753

void MainWindow::displayProblem(){
    ui->lblDisplay->setText(QString::number(operand1) + operatorSign + QString::number(operand2));
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
