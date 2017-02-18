/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionEasy_5;
    QAction *actionMedium_5;
    QAction *actionHard_5;
    QAction *actionAddition;
    QAction *actionSubstraction;
    QAction *actionMultiplication;
    QAction *actionDivision;
    QWidget *centralWidget;
    QLabel *lblDisplay;
    QPlainTextEdit *txtAnswerInput;
    QPushButton *btnAnswer;
    QMenuBar *menuBarGame;
    QMenu *menuDifficulty;
    QMenu *menuMenu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(583, 207);
        actionEasy_5 = new QAction(MainWindow);
        actionEasy_5->setObjectName(QStringLiteral("actionEasy_5"));
        actionMedium_5 = new QAction(MainWindow);
        actionMedium_5->setObjectName(QStringLiteral("actionMedium_5"));
        actionHard_5 = new QAction(MainWindow);
        actionHard_5->setObjectName(QStringLiteral("actionHard_5"));
        actionAddition = new QAction(MainWindow);
        actionAddition->setObjectName(QStringLiteral("actionAddition"));
        actionSubstraction = new QAction(MainWindow);
        actionSubstraction->setObjectName(QStringLiteral("actionSubstraction"));
        actionMultiplication = new QAction(MainWindow);
        actionMultiplication->setObjectName(QStringLiteral("actionMultiplication"));
        actionDivision = new QAction(MainWindow);
        actionDivision->setObjectName(QStringLiteral("actionDivision"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        lblDisplay = new QLabel(centralWidget);
        lblDisplay->setObjectName(QStringLiteral("lblDisplay"));
        lblDisplay->setGeometry(QRect(10, 10, 561, 20));
        txtAnswerInput = new QPlainTextEdit(centralWidget);
        txtAnswerInput->setObjectName(QStringLiteral("txtAnswerInput"));
        txtAnswerInput->setGeometry(QRect(130, 130, 211, 25));
        btnAnswer = new QPushButton(centralWidget);
        btnAnswer->setObjectName(QStringLiteral("btnAnswer"));
        btnAnswer->setGeometry(QRect(350, 130, 89, 25));
        MainWindow->setCentralWidget(centralWidget);
        menuBarGame = new QMenuBar(MainWindow);
        menuBarGame->setObjectName(QStringLiteral("menuBarGame"));
        menuBarGame->setGeometry(QRect(0, 0, 583, 22));
        menuDifficulty = new QMenu(menuBarGame);
        menuDifficulty->setObjectName(QStringLiteral("menuDifficulty"));
        menuMenu = new QMenu(menuBarGame);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        MainWindow->setMenuBar(menuBarGame);

        menuBarGame->addAction(menuMenu->menuAction());
        menuBarGame->addAction(menuDifficulty->menuAction());
        menuDifficulty->addAction(actionEasy_5);
        menuDifficulty->addAction(actionMedium_5);
        menuDifficulty->addAction(actionHard_5);
        menuMenu->addAction(actionAddition);
        menuMenu->addAction(actionSubstraction);
        menuMenu->addAction(actionMultiplication);
        menuMenu->addAction(actionDivision);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Math Game", Q_NULLPTR));
        actionEasy_5->setText(QApplication::translate("MainWindow", "Easy", Q_NULLPTR));
        actionMedium_5->setText(QApplication::translate("MainWindow", "Medium", Q_NULLPTR));
        actionHard_5->setText(QApplication::translate("MainWindow", "Hard", Q_NULLPTR));
        actionAddition->setText(QApplication::translate("MainWindow", "Addition", Q_NULLPTR));
        actionSubstraction->setText(QApplication::translate("MainWindow", "Substraction", Q_NULLPTR));
        actionMultiplication->setText(QApplication::translate("MainWindow", "Multiplication", Q_NULLPTR));
        actionDivision->setText(QApplication::translate("MainWindow", "Division", Q_NULLPTR));
        lblDisplay->setText(QApplication::translate("MainWindow", "Please start a game with a selected difficulty in the menu.", Q_NULLPTR));
        btnAnswer->setText(QApplication::translate("MainWindow", "Answer", Q_NULLPTR));
        menuDifficulty->setTitle(QApplication::translate("MainWindow", "Difficulty", Q_NULLPTR));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Operator Sign", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
