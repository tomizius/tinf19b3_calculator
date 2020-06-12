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
 *                                               to the calculator                                *
 */

#include "Calculator.h"
//so far i think we dont need this
/*
Calculation Calculator::getHistory(int i){

};
*/
std::vector<Calculation> Calculator::getFullHistory(){
    return history;
};

Calculation Calculator::calculation(char *userInput) {
    Calculation c(userInput);
    history.push_back(c);
    return c;
};