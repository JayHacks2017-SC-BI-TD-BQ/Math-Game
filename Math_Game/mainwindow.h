#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <cstdlib>
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

private slots:
    void on_btnAnswer_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
