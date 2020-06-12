//
// Created by herrlevin_ on 6/12/20.
//

#include "CalculatorGUI.h"
#include "../ui/calculator.h"
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

}

CalculatorGUI::~CalculatorGUI() {
    delete ui;
}

void CalculatorGUI::decimalClicked() {
    QPushButton * button = (QPushButton*)sender();

    QString textEditString;

    textEditString = (ui->textEdit->toPlainText() + button->text());

    ui->textEdit->setText(textEditString);
}