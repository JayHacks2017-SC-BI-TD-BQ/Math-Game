#ifndef STATISTICS_H
#define STATISTICS_H

#include <QWidget>
#include <QLabel>


namespace Ui {
class Statistics;
}

class Statistics : public QWidget
{
    Q_OBJECT

public:
    explicit Statistics(QWidget *parent = 0);
    ~Statistics();
    void labelUpdate(int c, int w);
    void displaySeconds(int s);

private:
    Ui::Statistics *ui;
    int seconds;
};

#endif // STATISTICS_H
