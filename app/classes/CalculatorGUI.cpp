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
 *   CalculatorGUI::stringButtonClicked -- recognize button clicks in the GUI                  *
 *   CalculatorGUI::equalClicked -- recognize the equal click to calculate something and prints*
 *                                  history in ListWidget                                      *
 *   CalculatorGUI::clearClicked -- clears the display                                         *
 *   CalculationGUI::prefixChange -- changes the prefix of the whole calculation string        *
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

#include "CalculatorGUI.h"
#include "../ui/calculator.h"
#include "Calculator.h"
#include <QtWidgets>
#include <QMessageBox>
#include <QDebug>
#include <iostream>

CalculatorGUI::CalculatorGUI(QWidget *parent)
    : QWidget(parent), ui(new Ui::Form)
    {
    ui->setupUi(this);

    connect(ui->button0, SIGNAL(released()), this, SLOT(stringButtonClicked()));
    connect(ui->button1, SIGNAL(released()), this, SLOT(stringButtonClicked()));
    connect(ui->button2, SIGNAL(released()), this, SLOT(stringButtonClicked()));
    connect(ui->button3, SIGNAL(released()), this, SLOT(stringButtonClicked()));
    connect(ui->button4, SIGNAL(released()), this, SLOT(stringButtonClicked()));
    connect(ui->button5, SIGNAL(released()), this, SLOT(stringButtonClicked()));
    connect(ui->button6, SIGNAL(released()), this, SLOT(stringButtonClicked()));
    connect(ui->button7, SIGNAL(released()), this, SLOT(stringButtonClicked()));
    connect(ui->button8, SIGNAL(released()), this, SLOT(stringButtonClicked()));
    connect(ui->button9, SIGNAL(released()), this, SLOT(stringButtonClicked()));
    connect(ui->buttonSQRT, SIGNAL(released()), this, SLOT(stringButtonClicked()));
    connect(ui->buttonEXP, SIGNAL(released()), this, SLOT(stringButtonClicked()));
    connect(ui->buttonDivision, SIGNAL(released()), this, SLOT(stringButtonClicked()));
    connect(ui->buttonMultiply, SIGNAL(released()), this, SLOT(stringButtonClicked()));
    connect(ui->buttonSubtract, SIGNAL(released()), this, SLOT(stringButtonClicked()));
    connect(ui->buttonAdd, SIGNAL(released()), this, SLOT(stringButtonClicked()));
    connect(ui->buttonBracketClose, SIGNAL(released()), this, SLOT(stringButtonClicked()));
    connect(ui->buttonBracketOpen, SIGNAL(released()), this, SLOT(stringButtonClicked()));
    connect(ui->buttonDecimal, SIGNAL(released()), this, SLOT(stringButtonClicked()));

    connect(ui->buttonPrefix, SIGNAL(released()), this, SLOT(prefixChange()));

    connect(ui->buttonClear, SIGNAL(released()), this, SLOT(clearClicked()));

    connect(ui->buttonResult, SIGNAL(released()), this, SLOT(equalClicked()));

}

CalculatorGUI::~CalculatorGUI() {
    delete ui;
}

void CalculatorGUI::stringButtonClicked() {
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
    try{
        Calculation m_calculation = calc.calculation(c_InputStr);
        qDebug() << m_calculation.getResult();
        ui->textEdit->setText(QString::number(m_calculation.getResult()));

        /*
         * adds item to list history
         */

        ui->listHistory->addItem(QString::fromStdString(m_calculation.getFullCalculationString() + "=" ) + QString::number(m_calculation.getResult(), 'g', 6));
        ui->listHistory->scrollToBottom();
    } catch(const std::invalid_argument exception) {
        ui->textEdit->setText("ERROR");
        QMessageBox messageBox;
        messageBox.critical(0,"Error: Invalid argument", exception.what());
        messageBox.setFixedSize(500,200);
    } catch(const std::overflow_error exception) {
        ui->textEdit->setText("ERROR");
        QMessageBox messageBox;
        messageBox.critical(0,"Error: Overflow Error", exception.what());
        messageBox.setFixedSize(500,200);
    }


    m_equated = true;
}

void CalculatorGUI::clearClicked(){
    qDebug() << "AC";

    ui->textEdit->setText("");

}

void CalculatorGUI::prefixChange() {

    QString textEditString = ui->textEdit->toPlainText();

    if (textEditString.at(0) == '-'){
        textEditString.remove(0,1);
    }else{
        textEditString.prepend('-');
    }

    ui->textEdit->setText(textEditString);
}

void CalculatorGUI::keyReleaseEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Enter || event->key() == Qt::Key_Return)
    {
        this->equalClicked();
    }
}