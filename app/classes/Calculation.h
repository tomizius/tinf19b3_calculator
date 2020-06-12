#ifndef CALCULATOR_CALCULATION_H
#define CALCULATOR_CALCULATION_H

#include <iostream>

/* $Header: /CounterStrike/BUILDING.H 1     3/03/97 10:24a Joe_bostic $ */
/***********************************************************************************************
 *                                                                                             *
 *                 Project Name : Calculator                                          *
 *                                                                                             *
 *                    File Name : Calculation.h                                                  *
 *                                                                                             *
 *                   Programmer : Levin Baumann & Thomas Englert                                              *
 *                                                                                             *
 *---------------------------------------------------------------------------------------------*
 * Functions:                                                                                  *
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

class Calculation {


public:
    /*
     * This function returns us just the full string of a calculation, which was given by the user input
     */
    std::string getFullCalculationString();
    /*
     * This function return us the result of one calculation.
     */
    double getResult();
    /*
     * The constructor set all responsible variables for the history
     */
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
    /*
     * This functon returns a pointer to the current char of the user input
     */
    char currentChar();
    /*
     * This function returns a pointer to the next char of the user input
     */
    char nextChar();
    /*
     * This function return us the digit, which we need for the calculation logic
     */
    double number();
    /*
     * This function return as the operation character which we have to calculate, like -, +, /, etc.
     */
    double factor();
    /*
     * This function returns us the result of factor() and number()
     */
    double equation();
    /*
     * This function starts the equation for us and returns the result
     */
    double equate();

};

#endif //CALCULATOR_CALCULATION_H