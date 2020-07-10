/* $Header: /app/classes/Calculator.cpp  */
/***********************************************************************************************
 *                                                                                             *
 *                 Project Name : Calculator                                                   *
 *                                                                                             *
 *                    File Name : Calculator.cpp                                              *
 *                                                                                             *
 *                   Programmer : Levin Baumann & Thomas Englert                               *
 *                                                                                             *
 *---------------------------------------------------------------------------------------------*
 * Functions:                                                                                  *
 *   Calculator::getFullHistory() -- returns the histroy of all calculations so far            *
 *   Calculator::calculation(char *userInput) -- starts the calculation, by given the string   *
 *                                               to the calculator                             *
 *---------------------------------------------------------------------------------------------*
 */

#include "Calculator.h"

std::vector<Calculation> Calculator::getFullHistory(){
    return history;
};

Calculation Calculator::calculation(char *userInput) {
    Calculation calc(userInput);
    history.push_back(calc);
    return calc;
};