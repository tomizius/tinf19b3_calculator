//
// Created by thomas on 15.05.20.
//

#ifndef CALCULATOR_CALCULATION_H
#define CALCULATOR_CALCULATION_H


#include <iostream>

class Calculation {
private:
    const char * expressionToParse;
    char peek();
    char get();
    double number();
    double factor();
    double expression();
    double equation();

public:
    double Calculate(char *userInput);
};



#endif //CALCULATOR_CALCULATION_H