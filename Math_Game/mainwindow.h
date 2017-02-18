#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <unistd.h>
#include <time.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int generateRandomNumber(int min, int max) const;
    void generateEasyAdditionProblem();
    void generateEasySubtractionProblem();
    void generateEasyMultiplicationProblem();
    void generateEasyDivisionProblem();
    void generateEasyExponentProblem();
    void generateMediumAdditionProblem();
    void generateMediumSubtractionProblem();
    void generateMediumMultiplicationProblem();
    void generateMediumDivisionProblem();
    void generateMediumExponentProblem();
    void generateHardAdditionProblem();
    void generateHardSubtractionProblem();
    void generateHardMultiplicationProblem();
    void generateHardDivisionProblem();
    void generateHardExponentProblem();
    void generateProblem();
    void displayProblem();
    void begin();

private slots:
    void on_btnAnswer_clicked();
    void on_actionAddition_triggered();
    void on_actionSubstraction_triggered();
    void on_actionMultiplication_triggered();
    void on_actionDivision_triggered();
    void on_actionEasy_5_triggered();
    void on_actionMedium_5_triggered();
    void on_actionHard_5_triggered();

    void on_btnNextProblem_clicked();

private:
    Ui::MainWindow *ui;



    int operand1, operand2, correctAnswer;
    QString difficulty, operatorSign;
};

#endif // MAINWINDOW_H
