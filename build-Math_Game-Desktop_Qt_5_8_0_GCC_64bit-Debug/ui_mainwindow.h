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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
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
    QPushButton *btnAnswer;
    QLineEdit *txtAnswerInput;
    QLabel *lblCorrect;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(585, 155);
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
        lblDisplay->setGeometry(QRect(10, 10, 561, 61));
        QFont font;
        font.setPointSize(16);
        lblDisplay->setFont(font);
        lblDisplay->setAlignment(Qt::AlignCenter);
        lblDisplay->setWordWrap(true);
        btnAnswer = new QPushButton(centralWidget);
        btnAnswer->setObjectName(QStringLiteral("btnAnswer"));
        btnAnswer->setEnabled(false);
        btnAnswer->setGeometry(QRect(160, 70, 89, 25));
        txtAnswerInput = new QLineEdit(centralWidget);
        txtAnswerInput->setObjectName(QStringLiteral("txtAnswerInput"));
        txtAnswerInput->setEnabled(false);
        txtAnswerInput->setGeometry(QRect(10, 70, 141, 25));
        lblCorrect = new QLabel(centralWidget);
        lblCorrect->setObjectName(QStringLiteral("lblCorrect"));
        lblCorrect->setGeometry(QRect(260, 70, 211, 21));
        MainWindow->setCentralWidget(centralWidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actionEasy_5);
        toolBar->addAction(actionMedium_5);
        toolBar->addAction(actionHard_5);
        toolBar->addSeparator();
        toolBar->addAction(actionAddition);
        toolBar->addAction(actionSubstraction);
        toolBar->addAction(actionMultiplication);
        toolBar->addAction(actionDivision);

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
        lblCorrect->setText(QString());
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
