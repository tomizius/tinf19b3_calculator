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