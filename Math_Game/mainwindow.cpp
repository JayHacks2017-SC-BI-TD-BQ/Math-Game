#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    srand(time(NULL));  //This creates a random seed.
    ui->setupUi(this); //Sets up the UI
    //Initializes the variables
    correctNumber=0;
    wrongNumber=0;
    //Creates a new timer.
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(incrementSeconds()));
    timer->start(1000);
}

void MainWindow::incrementSeconds()
{
    //Updates the seconds elapsed.
    seconds++;
    statistics.displaySeconds(seconds);
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
        //Increment the correctNumber by 1 and update statistics
        correctNumber=correctNumber+1;
        statistics.labelUpdate(correctNumber,wrongNumber);
        //Make certain buttons usable/unusable
        ui->btnAnswer->setEnabled(false);
        ui->btnGetCorrectAnswer->setEnabled(false);
        ui->btnNextProblem->setEnabled(true);
    }else{
        //If the answer is Wrong, let the user know.
        ui->lblCorrect->setText("Wrong!");
        //Increment the wrongNumber by 1 and update statistics
        wrongNumber=wrongNumber+1;
        statistics.labelUpdate(correctNumber,wrongNumber);
        //disable and enable certain buttions
        ui->btnAnswer->setEnabled(false);
        ui->btnNextProblem->setEnabled(true);
    }
}

void MainWindow::on_btnNextProblem_clicked()
{
    //Generate and display new problem.
    generateProblem();
    displayProblem();
}

//int operand1, operand2, correctAnswer; //These are your integers.

//Generate random 2 operands and create a correctAnswer using them
//The division problems are generated in a way that prevents them from having remainders when divided
void MainWindow::generateEasyAdditionProblem(){
    operand1 = generateRandomNumber(0,100);
    operand2 = generateRandomNumber(0,100);
    correctAnswer = operand1+operand2;
}
void MainWindow::generateEasySubtractionProblem(){
    operand1 = generateRandomNumber(0,100);
    operand2 = generateRandomNumber(0,100);
    correctAnswer = operand1-operand2;
}
void MainWindow::generateEasyMultiplicationProblem(){
    operand1 = generateRandomNumber(0,10);
    operand2 = generateRandomNumber(0,10);
    correctAnswer = operand1*operand2;
}
void MainWindow::generateEasyDivisionProblem(){
    operand1 = generateRandomNumber(1,100);
    operand2 = generateRandomNumber(1,10);
    while((operand2 == 0) || (operand1 % operand2) != 0){
        operand1 = generateRandomNumber(1,100);
        operand2 = generateRandomNumber(1,10);
    }
    correctAnswer = operand1 / operand2;
}
void MainWindow::generateEasyExponentProblem(){
    operand1 = generateRandomNumber(1,9);
    operand2 = generateRandomNumber(2,3);
    correctAnswer = pow(operand1, operand2);
}
void MainWindow::generateMediumAdditionProblem(){
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
    operand1 = generateRandomNumber(0,100);
    operand2 = generateRandomNumber(0,10);
    correctAnswer = operand1 * operand2;
}
void MainWindow::generateMediumDivisionProblem(){
    operand1 = generateRandomNumber(1,1000);
    operand2 = generateRandomNumber(2,100);
    while((operand1 % operand2) != 0){
        operand1 = generateRandomNumber(1,1000);
        operand2 = generateRandomNumber(2,100);
    }
    correctAnswer = operand1 / operand2;
}
void MainWindow::generateMediumExponentProblem(){
    operand1 = generateRandomNumber(1,20);
    operand2 = generateRandomNumber(2,4);
    correctAnswer = pow(operand1, operand2);
}
void MainWindow::generateHardAdditionProblem(){
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
    operand1 = generateRandomNumber(1,100);
    operand2 = generateRandomNumber(1,100);
    correctAnswer = operand1 * operand2;
}
void MainWindow::generateHardDivisionProblem(){
    operand1 = generateRandomNumber(1,1000);
    operand2 = generateRandomNumber(11,100);
    while((operand1 % operand2) != 0){
        operand1 = generateRandomNumber(1,1000);
        operand2 = generateRandomNumber(11,100);
    }
    correctAnswer = operand1 / operand2;
}
void MainWindow::generateHardExponentProblem(){
    operand1 = generateRandomNumber(1,30);
    operand2 = generateRandomNumber(2,6);
    correctAnswer = pow(operand1, operand2);
}


void MainWindow::generateProblem(){
    //Problem generation will vary with the operator sign and difficulty
    //Follow the decision structure.
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

   //enable and disable certain buttons
   ui->btnAnswer->setEnabled(true);
   ui->btnGetCorrectAnswer->setEnabled(true);
   ui->btnNextProblem->setEnabled(false);

   //clear correct and answerInput.
   ui->lblCorrect->setText("");
   ui->txtAnswerInput->setText("");
}


void MainWindow::displayProblem(){
    //Displays the problem using the label display.
    ui->lblDisplay->setText("What is: " + QString::number(operand1) + " " + operatorSign + " " + QString::number(operand2));
}

//These actions modify the operationSign and the difficulty
void MainWindow::on_actionAddition_triggered()
{
    operatorSign = "+";
    if(difficulty != ""){
        begin();
    }
    ui->actionSubstraction->setChecked(false);
    ui->actionMultiplication->setChecked(false);
    ui->actionDivision->setChecked(false);
    ui->actionExponent->setChecked(false);
}
void MainWindow::on_actionSubstraction_triggered()
{
    operatorSign = "-";
    if(difficulty != ""){
        begin();
    }
    ui->actionAddition->setChecked(false);
    ui->actionMultiplication->setChecked(false);
    ui->actionDivision->setChecked(false);
    ui->actionExponent->setChecked(false);
}
void MainWindow::on_actionMultiplication_triggered()
{
    operatorSign = "*";
    if(difficulty != ""){
        begin();
    }
    ui->actionAddition->setChecked(false);
    ui->actionSubstraction->setChecked(false);
    ui->actionDivision->setChecked(false);
    ui->actionExponent->setChecked(false);
}
void MainWindow::on_actionDivision_triggered()
{
    //Sets the operator sign as division
    operatorSign = "/";
    if(difficulty != ""){
        begin();
    }
    ui->actionAddition->setChecked(false);
    ui->actionSubstraction->setChecked(false);
    ui->actionMultiplication->setChecked(false);
    ui->actionExponent->setChecked(false);
}
void MainWindow::on_actionExponent_triggered()
{
    operatorSign = "^";
    if(difficulty != ""){
        begin();
    }
    ui->actionAddition->setChecked(false);
    ui->actionSubstraction->setChecked(false);
    ui->actionMultiplication->setChecked(false);
    ui->actionDivision->setChecked(false);
}
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
    ui->actionEasy_5->setChecked(false);
    ui->actionHard_5->setChecked(false);
}
void MainWindow::on_actionHard_5_triggered()
{
    difficulty = "hard";
    if(operatorSign != ""){
        begin();
    }
    ui->actionMedium_5->setCheckable(false);
    ui->actionEasy_5->setCheckable(false);
}


void MainWindow::on_btnGetCorrectAnswer_clicked()
{
    //Set the text input as the correct answer.
    QString QstrCorrectAnswer = QString::number(correctAnswer);
    ui->txtAnswerInput->setText(QstrCorrectAnswer);
    if(ui->lblCorrect->text() != "Wrong!"){
        //increment wrongNumber and update statistics
        wrongNumber=wrongNumber+1;
        statistics.labelUpdate(correctNumber,wrongNumber);
        //The player did not get it wrong. They gave up.
        ui->lblCorrect->setText("Gave up!");
    }
    //Adjusts some button ableness.
    ui->btnGetCorrectAnswer->setEnabled(false);
    ui->btnAnswer->setEnabled(false);
    ui->btnNextProblem->setEnabled(true);

}
void MainWindow::on_btnStatistics_clicked()
{
    //Show the statistics
    statistics.show();
}
void MainWindow::begin()
{
    //Begins the process of problem generation
    generateProblem();
    displayProblem();
    ui->txtAnswerInput->setEnabled(true);

}
