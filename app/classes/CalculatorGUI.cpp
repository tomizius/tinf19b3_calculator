/* $Header: /app/classes/CalculatorGUI.cpp  */
/***********************************************************************************************
 *                                                                                             *
 *                 Project Name : CalculatorGUI                                                *
 *                                                                                             *
 *                    File Name : CalculatorGUI.cpp                                            *
 *                                                                                             *
 *                   Programmer : Levin Baumann & Thomas Englert                               *
 *                                                                                             *
 *---------------------------------------------------------------------------------------------*
 * Functions:                                                                                  *
 *   CalculatorGUI::CalculatorGUI -- Connection between GUI (QT5) and backend, implements click*
 *   CalculatorGUI::~CalculatorGUI -- deletion of the GUI                                      *
 *   CalculatorGUI::decimalClicked -- recognize decimal clicks in the GUI                      *
 *   CalculatorGUI::equalClicked -- recognize the equal click to calculate something and prints*
 *                                  history in ListWidget                                      *
 *   CalculatorGUI::clearClicked -- clears the display                                         *
 *   CalculationGUI:: --                                        *
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

#include "CalculatorGUI.h"
#include "../ui/calculator.h"
#include "Calculator.h"
#include <QtWidgets>
#include <QDebug>
#include <iostream>

CalculatorGUI::CalculatorGUI(QWidget *parent)
    : QWidget(parent), ui(new Ui::Form)
    {
    ui->setupUi(this);

    connect(ui->button0, SIGNAL(released()), this, SLOT(decimalClicked()));
    connect(ui->button1, SIGNAL(released()), this, SLOT(decimalClicked()));
    connect(ui->button2, SIGNAL(released()), this, SLOT(decimalClicked()));
    connect(ui->button3, SIGNAL(released()), this, SLOT(decimalClicked()));
    connect(ui->button4, SIGNAL(released()), this, SLOT(decimalClicked()));
    connect(ui->button5, SIGNAL(released()), this, SLOT(decimalClicked()));
    connect(ui->button6, SIGNAL(released()), this, SLOT(decimalClicked()));
    connect(ui->button7, SIGNAL(released()), this, SLOT(decimalClicked()));
    connect(ui->button8, SIGNAL(released()), this, SLOT(decimalClicked()));
    connect(ui->button9, SIGNAL(released()), this, SLOT(decimalClicked()));
    connect(ui->buttonSQRT, SIGNAL(released()), this, SLOT(decimalClicked()));
    connect(ui->buttonEXP, SIGNAL(released()), this, SLOT(decimalClicked()));
    connect(ui->buttonDivision, SIGNAL(released()), this, SLOT(decimalClicked()));
    connect(ui->buttonMultiply, SIGNAL(released()), this, SLOT(decimalClicked()));
    connect(ui->buttonSubtract, SIGNAL(released()), this, SLOT(decimalClicked()));
    connect(ui->buttonAdd, SIGNAL(released()), this, SLOT(decimalClicked()));

    connect(ui->buttonClear, SIGNAL(released()), this, SLOT(clearClicked()));

    connect(ui->buttonResult, SIGNAL(released()), this, SLOT(equalClicked()));

}

CalculatorGUI::~CalculatorGUI() {
    delete ui;
}

void CalculatorGUI::decimalClicked() {
    QPushButton * button = (QPushButton*)sender();
    QString textEditString = ui->textEdit->toPlainText();
    QString buttonString = button->text();
    bool ok;
    buttonString.toDouble(&ok);

    qDebug() << textEditString;
    qDebug() << buttonString;
    qDebug() << "Equated: " << m_equated;
    qDebug() << "Number: " << ok;

    if (m_equated == true && ok) {
        textEditString = "";
    }

    m_equated = false;

    buttonString = buttonString == "÷" ? "/" : buttonString;
    buttonString = buttonString == "√" ? "r" : buttonString;
    buttonString = buttonString == "×" ? "*" : buttonString;

    textEditString = textEditString + buttonString;

    ui->textEdit->setText(textEditString);
}

void CalculatorGUI::equalClicked() {

    qDebug() << "=";

    QString inputStr = ui->textEdit->toPlainText();
    QByteArray inputBa = inputStr.toLocal8Bit();
    char *c_InputStr = inputBa.data();

    /*
     * starts the calculation in the backend of the Calculator
     */
    Calculation m_calculation = calc.calculation(c_InputStr);
    ui->textEdit->setText(QString::number(m_calculation.getResult()));

    /*
     * adds item to list history
     */

    ui->listHistory->addItem(QString::fromStdString(m_calculation.getFullCalculationString() + "=" ) + QString::number(m_calculation.getResult()));
    ui->listHistory->scrollToBottom();

    m_equated = true;
}

void CalculatorGUI::getLastHistoryAndPrintIt() {

}

void CalculatorGUI::clearClicked(){
    qDebug() << "AC";

    ui->textEdit->setText("");

}