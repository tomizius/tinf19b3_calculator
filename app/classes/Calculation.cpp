/* $Header: /app/classes/Calculation.cpp  */
/***********************************************************************************************
 *                                                                                             *
 *                 Project Name : Calculator                                                   *
 *                                                                                             *
 *                    File Name : Calculation.cpp                                              *
 *                                                                                             *
 *                   Programmer : Levin Baumann & Thomas Englert                               *
 *                                                                                             *
 *---------------------------------------------------------------------------------------------*
 * Functions:                                                                                  *
 *   Calculation::Calculation -- The constructor set all responsible variables for the history *
 *   Calculation::getResult -- Determines the region from a specified cell number              *
 *   Calculation::getFullCalculationString -- returns full string of a calculation             *
 *   Calculation::currentChar -- returns a pointer to the current char of the user input       *
 *   Calculation::nextChar -- returns a pointer to the next char of the user input             *
 *   Calculation::decimal -- returns the decimals after the ','                                *
 *   Calculation::number -- returns the decimals before the ','                                *
 *   Calculation::factor -- returns the operation character, like -, +, /, etc                 *
 *   Calculation::equation -- returns us the result of factor() and number()                   *
 *   Calculation::equate -- starts the equation for us and returns the result                  *
 *---------------------------------------------------------------------------------------------*
 */

#include "Calculation.h"
#include <cmath>
#include <iostream>

Calculation::Calculation(char *userInput)
{
    expressionToParse = userInput;
    calculationString.assign(userInput);
    endResult = this->equate();
}

double Calculation::getResult() {
    return endResult;
}

std::string Calculation::getFullCalculationString() {
    return calculationString;
}


//get the current character
char Calculation::currentChar()
{
    return *this->expressionToParse;
}

//progress through the string
char Calculation::nextChar()
{
    return *this->expressionToParse++;
}

//get the current decimals after the ','
double Calculation::decimal() {
    double cnt = 10;
    this->nextChar();
    double result = 0;
    while (this->currentChar() >= '0' && this->currentChar() <= '9' ) {
        result = result + (this->currentChar() - '0') / cnt;
        cnt *= 10;
        this->nextChar();
    }
    return result;
}

//get the current number
double Calculation::number()
{
    double result = this->nextChar() - '0';// subtract 0 as string, to correct the ascii-value to the corresponding doubleeger
    while (this->currentChar() >= '0' && this->currentChar() <= '9') {
        result = 10*result + this->nextChar() - '0';
    }
    if (this->currentChar() == ',') {
        result += this->decimal();
    }
    return result;
}

//get the current factor (for equations with *, /, ^, r)
double Calculation::factor()
{
    if (this->currentChar() >= '0' && this->currentChar() <= '9' || this->currentChar() == ',') {
        return this->number();
    } else if (this->currentChar() == '(') {
        this->nextChar(); // '('
        double result = this->equate();
        this->nextChar(); // ')'
        return result;
    } else if (this->currentChar() == '-') {
        this->nextChar();
        return -this->factor();
    }
    //fixme we wanna have exceptions here
    return NAN; // error
}

double Calculation::equation()
{
    double result = this->factor();
    while (this->currentChar() == '*' || this->currentChar() == '/' || this->currentChar() == ':' || this->currentChar() == '^' || this->currentChar() == 'r') {
        char operand = this->nextChar();
        double fac = this->factor();

        if (operand == '*') {
            result *= fac;
        } else if (operand == '^') {
            result = ::std::pow(result,fac);
        } else if (operand == '/' || this->currentChar() == ':') {
            // if division by 0 return error
            if (fac == 0) {
                std::cerr << "Division by zero is not allowed!" << std::endl;
                //fixme we wanna have exceptions here
                return NAN;
            }
            result /= fac;
        } else if (operand == 'r') {
            // if division by 0 return error
            if (result == 0) {
                std::cerr << "Exponent cannot be zero!" << std::endl;
                //fixme we wanna have exceptions here
                return NAN;
            }
            result = ::std::pow(fac, 1 / result);
        }
    }

    return result;
}

//starts the calculation
double Calculation::equate()
{
    double result = this->equation();
    while (this->currentChar() == '+' || this->currentChar() == '-') {
        if (this->nextChar() == '+') {
            result += this->equation();

        } else {
            result -= this->equation();
        }
    }

    return result;
}