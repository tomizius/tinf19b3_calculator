/* $Header: /app/classes/Calculator.h  */
/***********************************************************************************************
 *                                                                                             *
 *                 Project Name : Calculator                                                   *
 *                                                                                             *
 *                    File Name : Calculator.h                                                *
 *                                                                                             *
 *                   Programmer : Levin Baumann & Thomas Englert                               *
 *                                                                                             *
 *---------------------------------------------------------------------------------------------*
 * Functions:                                                                                  *
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

#ifndef CALCULATOR_CALCULATOR_H
#define CALCULATOR_CALCULATOR_H

#include <iostream>
#include <vector>
#include "Calculation.h"

class Calculator {
private:
    /*
     * in this variable we store all objects of a Calculation
     */
    std::vector<Calculation> history;

public:
    //fixme maybe we need this function
    // Calculation getHistory(int i);
    std::vector<Calculation> getFullHistory();
    Calculation calculation(char *userInput);
};


#endif //CALCULATOR_CALCULATOR_H
