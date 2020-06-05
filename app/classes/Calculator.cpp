//
// Created by thomas on 05.06.20.
//

#include "Calculator.h"
#include <iostream>

Calculation Calculator::getHistory(int i){

};

std::vector<Calculation> Calculator::getFullHistory(){
    return history;
};

Calculation Calculator::calculation(char *userInput) {
    Calculation c(userInput);
    history.push_back(c);
    return c;
};