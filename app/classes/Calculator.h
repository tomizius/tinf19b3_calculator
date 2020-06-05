//
// Created by thomas on 05.06.20.
//

#ifndef CALCULATOR_CALCULATOR_H
#define CALCULATOR_CALCULATOR_H

#include <iostream>
#include <vector>
#include "Calculation.h"

class Calculator {
private:
    std::vector<Calculation> history;

public:
    Calculation getHistory(int i);
    std::vector<Calculation> getFullHistory();
    Calculation calculation(char *userInput);
};


#endif //CALCULATOR_CALCULATOR_H
