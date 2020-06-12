/* $Header: /app/classes/Calculation.h  */
/***********************************************************************************************
 *                                                                                             *
 *                 Project Name : Calculator                                                   *
 *                                                                                             *
 *                    File Name : Calculation.h                                                *
 *                                                                                             *
 *                   Programmer : Levin Baumann & Thomas Englert                               *
 *                                                                                             *
 *---------------------------------------------------------------------------------------------*
 * Functions:                                                                                  *
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

#ifndef CALCULATOR_CALCULATION_H
#define CALCULATOR_CALCULATION_H

#include <iostream>

class Calculation {


public:

    std::string getFullCalculationString();
    /*
     * This function return us the result of one calculation.
     */
    double getResult();

    Calculation(char *userInput);

private:

    /*
     * This is the user input and the pointer of the string, which our logic is going trough to calculate
     */
    const char * expressionToParse;
    /*
     * This is the user input. The variable is responsible to safe the string for the history
     */
    std::string calculationString;
    /*
     * In this variable is stored the end result of one complete calculation. We need it to get it for the history
     */
    double endResult;

    char currentChar();
    char nextChar();
    double number();
    double factor();
    double equation();
    double equate();

};

#endif //CALCULATOR_CALCULATION_H