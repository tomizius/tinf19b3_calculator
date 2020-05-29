//
// Created by thomas on 15.05.20.
//

#ifndef CALCULATOR_CALCULATION_H
#define CALCULATOR_CALCULATION_H


#include <iostream>
class Calculation {
private:
    const char * expressionToParse;
    const char * calculationString;
    char currentChar();
    char nextChar();
    double number();
    double factor();
    double expression();
    double equation();
    double endResult;

public:
    char getFullCalculationString();
    double getResult();
    double calculate(char *userInput);
};

#endif //CALCULATOR_CALCULATION_H