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
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

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
    /*
     * recognize decimal (0-9) clicks in the GUI and forward them to the backend if needed
     */
    void decimalClicked();

    /*
     * starts the calculation
     */
    void equalClicked();

    /*
     * Celars the display of the current calculation
     */
    void clearClicked();
    
    /*
     * function gets always the last history of the calculation
     */
    void getLastHistoryAndPrintIt();
};