//
// Created by thomas on 15.05.20.
//

#ifndef CALCULATOR_CALCULATION_H
#define CALCULATOR_CALCULATION_H


#include <iostream>
class Calculation {
private:
    const char * expressionToParse;
    char * calculationString;
    char currentChar();
    char nextChar();
    double number();
    double factor();
    double equation();
    double equate();
    double endResult;

public:
    char * getFullCalculationString();
    double getResult();
    Calculation(char *userInput);
};

#endif //CALCULATOR_CALCULATION_H