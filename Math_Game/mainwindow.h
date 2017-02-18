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

private slots:
    void on_btnAnswer_clicked();
    void startGame();
    void on_actionStart_Game_triggered();

private:
    Ui::MainWindow *ui;
    void addMenuOptions();



    int operand1, operand2, correctAnswer, secondsRemaining;
};

#endif // MAINWINDOW_H
