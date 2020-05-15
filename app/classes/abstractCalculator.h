//
// Created by thomas on 15.05.20.
//

#ifndef CALCULATOR_ABSTRACTCALCULATOR_H
#define CALCULATOR_ABSTRACTCALCULATOR_H


class abstractCalculator {
private:
    double num1, num2;
    char operand;

public:
    double Calculate(double x, char operand, double y);
/*    double add(double addend1, double addend2);
    double subtract(double minuend, double subtrahend);
    double multiply(double factor1, double factor2);
    double divide(double dividend, double divisor);
    double root(double radical, double exponent);
    double exponent(double base, double exponent);*/

};



#endif //CALCULATOR_ABSTRACTCALCULATOR_H