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
    QAction *actionStart_Game;
    QAction *actionEnd_Game;
    QWidget *centralWidget;
    QLabel *lblDisplay;
    QPlainTextEdit *txtAnswerInput;
    QPushButton *btnAnswer;
    QMenuBar *menuBarGame;
    QMenu *menuMenu;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(583, 207);
        actionStart_Game = new QAction(MainWindow);
        actionStart_Game->setObjectName(QStringLiteral("actionStart_Game"));
        actionEnd_Game = new QAction(MainWindow);
        actionEnd_Game->setObjectName(QStringLiteral("actionEnd_Game"));
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
        menuMenu = new QMenu(menuBarGame);
        menuMenu->setObjectName(QStringLiteral("menuMenu"));
        MainWindow->setMenuBar(menuBarGame);

        menuBarGame->addAction(menuMenu->menuAction());
        menuMenu->addAction(actionStart_Game);
        menuMenu->addSeparator();
        menuMenu->addAction(actionEnd_Game);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Math Game", Q_NULLPTR));
        actionStart_Game->setText(QApplication::translate("MainWindow", "Start Game", Q_NULLPTR));
        actionEnd_Game->setText(QApplication::translate("MainWindow", "End Game", Q_NULLPTR));
        lblDisplay->setText(QApplication::translate("MainWindow", "Please start a game with a selected difficulty in the menu.", Q_NULLPTR));
        btnAnswer->setText(QApplication::translate("MainWindow", "Answer", Q_NULLPTR));
        menuMenu->setTitle(QApplication::translate("MainWindow", "Menu", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
