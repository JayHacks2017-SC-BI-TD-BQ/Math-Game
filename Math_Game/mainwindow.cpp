#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    srand(time(NULL));  //This creates a random seed.
    ui->setupUi(this); //Sets up the UI
    //Initializes the correct and wrong count
    correctNumber=0;
    wrongNumber=0;
    counter=0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

int MainWindow::generateRandomNumber(int min, int max) const
{
    //Returns a random number between min and max.
    return ((rand() % ((max+1)-min)) + min);
}

void MainWindow::on_btnAnswer_clicked()
{
    if(ui->txtAnswerInput->text() == QString::number(correctAnswer)){
        //If the answer is correct, let the user know.
        ui->lblCorrect->setText("Correct!");
        //Increment the correctNumber by 1
        correctNumber=correctNumber+1;
        //Make certain buttons usable/unusable
        ui->btnNextProblem->setEnabled(true);
        ui->btnAnswer->setEnabled(false);
        ui->btnGetCorrectAnswer->setEnabled(false);
        ui->btnNextProblem->setEnabled(true);
    }else{
        //If the answer is Wrong, let the user know.
        ui->lblCorrect->setText("Wrong!");
        //Increment the wrongNumber by 1
        wrongNumber=wrongNumber+1;
        ui->btnAnswer->setEnabled(false);
        ui->btnNextProblem->setEnabled(true);
    }
}

void MainWindow::on_btnNextProblem_clicked()
{
    generateProblem();
    displayProblem();
    ui->lblCorrect->setText("");
    ui->txtAnswerInput->setText("");
    ui->btnNextProblem->setEnabled(false);
    ui->btnAnswer->setEnabled(true);
    ui->btnGetCorrectAnswer->setEnabled(true);
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
void MainWindow::generateEasyExponentProblem(){
    operand1 = generateRandomNumber(1,3);
    operand2 = generateRandomNumber(1,3);
    correctAnswer = pow(operand1, operand2);
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
void MainWindow::generateMediumExponentProblem(){
    operand1 = generateRandomNumber(1,5);
    operand2 = generateRandomNumber(1,5);
    correctAnswer = pow(operand1, operand2);
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
void MainWindow::generateHardExponentProblem(){
    operand1 = generateRandomNumber(1,10);
    operand2 = generateRandomNumber(1,10);
    correctAnswer = pow(operand1, operand2);
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
   }else if(operatorSign == "^"){
       if(difficulty == "easy"){
            generateEasyExponentProblem();
       }else if(difficulty == "medium"){
            generateMediumExponentProblem();
       }else if(difficulty == "hard"){
            generateHardExponentProblem();
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
        /*
    operatorSign = "^";
        if(difficulty != ""){
            begin();
        }
}
*/

void MainWindow::on_actionEasy_5_triggered()
{
    difficulty = "easy";
    if(operatorSign != ""){
        begin();
    }
    ui->actionMedium_5->setChecked(false);
    ui->actionHard_5->setChecked(false);
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
    ui->actionMedium_5->setCheckable(false);
    ui->actionEasy_5->setCheckable(false);
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
void MainWindow::on_btnGetCorrectAnswer_clicked()
{
    QString QstrCorrectAnswer = QString::number(correctAnswer);
    ui->txtAnswerInput->setText(QstrCorrectAnswer);
    wrongNumber=wrongNumber+1;
}


void MainWindow::on_actionExponent_triggered()
{
    operatorSign = "^";
    if(difficulty != ""){
        begin();
    }
}
void MainWindow::on_btnStatistics_clicked()
{
    statistics.show();
    statistics.labelUpdate(correctNumber,wrongNumber);
}
