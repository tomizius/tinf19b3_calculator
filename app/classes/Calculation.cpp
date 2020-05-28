//
// Created by thomas on 15.05.20.
//

#include "Calculation.h"
#include <cmath>
#include <iostream>

//get the current character
char Calculation::peek()
{
    return *this->expressionToParse;
}

//progress through the string
char Calculation::get()
{
    return *this->expressionToParse++;
}

//get the current number
double Calculation::number()
{
    double result = this->get() - '0'; // subtract 0 as string, to correct the ascii-value to the corresponding doubleeger
    while (this->peek() >= '0' && this->peek() <= '9') {
        result = 10*result + this->get() - '0';
    }
    return result;
}

//get the current factor (for equations with *, /, ^, r)
double Calculation::factor()
{
    if (this->peek() >= '0' && this->peek() <= '9') {
        return this->number();
    } else if (this->peek() == '(') {
        this->get(); // '('
        double result = this->equation();
        this->get(); // ')'
        return result;
    } else if (this->peek() == '-') {
        this->get();
        return -this->factor();
    }

    return NAN; // error
}

double Calculation::expression()
{
    double result = this->factor();
    while (this->peek() == '*' || this->peek() == '/' || this->peek() == ':' || this->peek() == '^' || this->peek() == 'r') {
        char operand = this->get();
        double fac = this->factor();

        if (operand == '*') {
            result *= fac;
        } else if (operand == '^') {
            result = ::std::pow(result,fac);
        } else if (operand == '/' || this->peek() == ':') {
            // if division by 0 return error
            if (fac == 0) {
                std::cerr << "Division by zero is not allowed!" << std::endl;
                return NAN;
            }
            result /= fac;
        } else if (operand == 'r') {
            // if division by 0 return error
            if (result == 0) {
                std::cerr << "Exponent cannot be zero!" << std::endl;
                return NAN;
            }
            result = ::std::pow(fac, 1 / result);
        }
    }

    return result;
}

double Calculation::equation()
{
    double result = this->expression();
    while (this->peek() == '+' || this->peek() == '-') {
        if (this->get() == '+') {
            result += this->expression();

        } else {
            result -= this->expression();
        }
    }

    return result;
}

double Calculation::Calculate(char *equ)
{
    this->expressionToParse = equ;
    return this->equation();
}


