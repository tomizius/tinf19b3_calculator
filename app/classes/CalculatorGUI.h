//
// Created by herrlevin_ on 6/12/20.
//

#include <QtWidgets>
#include "../ui/calculator.h"
#include "Calculator.h"

#ifndef CALCULATOR_CALCULATORGUI_H
#define CALCULATOR_CALCULATORGUI_H

#endif //CALCULATOR_CALCULATORGUI_H

class CalculatorGUI : public QWidget {
    Q_OBJECT

public:
    CalculatorGUI(QWidget *parent = nullptr);
    ~CalculatorGUI();

private:
    Ui::Form *ui;
    Calculator calc;
    bool m_equated = false;


private slots:
    void decimalClicked();
    void equalClicked();
/*    void commaClicked();
    void clearClicked();*/
};