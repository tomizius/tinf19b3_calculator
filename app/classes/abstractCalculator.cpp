//
// Created by thomas on 15.05.20.
//

#include "abstractCalculator.h"
#include <cmath>
#include <iostream>

double abstractCalculator::Calculate(double x, char operand, double y) {
    switch (operand) {
        case '+':
            return x + y;

        case '-':
            return x - y;

        case '*':
            return x * y;

        case '/':
            // if division by 0 return error
            if (y == 0) {
                std::cerr << "Division by zero!" << std::endl;
                return NAN;
            }
            return x / y;

        case '^':
            return ::std::pow(x, y);

        case 'r':
            // if division by 0 return error
            if (x == 0) {
                std::cerr << "Exponent cannot be zero!" << std::endl;
                return NAN;
            }
            return ::std::pow(y, 1 / x);

        default:
            return 0;

    }
}
