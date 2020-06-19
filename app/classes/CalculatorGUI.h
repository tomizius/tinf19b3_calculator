/* $Header: /app/classes/Calculation.h  */
/***********************************************************************************************
 *                                                                                             *
 *                 Project Name : CalculatorGUI                                                   *
 *                                                                                             *
 *                    File Name : CalculatorGUI.h                                              *
 *                                                                                             *
 *                   Programmer : Levin Baumann & Thomas Englert                               *
 *                                                                                             *
 *---------------------------------------------------------------------------------------------*
 * Functions:                                                                                  *
 *   Calculation::Calculation -- The constructor set all responsible variables for the history *
 *   Calculation::getResult -- Determines the region from a specified cell number              *
 *   Calculation::getFullCalculationString -- returns full string of a calculation             *
 *   Calculation::currentChar -- returns a pointer to the current char of the user input       *
 *   Calculation::nextChar -- returns a pointer to the next char of the user input             *
 *   Calculation::number -- return us the digit, which we need for the calculation logic       *
 *   Calculation::factor -- returnS the operation character, like -, +, /, etc                 *
 *   Calculation::equation -- returns us the result of factor() and number()                   *
 *   Calculation::equate -- starts the equation for us and returns the result                  *
 */

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