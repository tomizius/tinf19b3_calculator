#include <iostream>
#include "app/classes/Calculator.h"
#include "app/classes/Calculation.h"

using namespace std;

int main()
{
    double result;
    std::string equation;

    cout << "Calculator Console Application" << endl << endl;
    cout << "Please enter the operation to perform." << endl;
    cout << "Allowed operators: a+b | a-b | a*b | a/b | a:b | a^b | arb (for a√b) | ( | )" << endl;
    cout << "For the history type 'h' " << endl;

    Calculator calc;

    while (true) {
        char input[50];
        cin.getline(input, 50);
        //we will print the history if the user inputs an h
        if (input[0] == 'h'){
            for(int i=0; i < calc.getFullHistory().size(); i++){
                cout << "[" << i+1 << "]Die Rechnung " << calc.getFullHistory().at(i).getFullCalculationString() << " ergab: " << calc.getFullHistory().at(i).getResult() << endl;
            }
            continue;
        }
        //we will end the loop if the user enters an e
        if (input[0] == 'e'){
            break;
        }
        //creates a new calculation inspired by the user input
        Calculation m_calculation = calc.calculation(input);

        result = m_calculation.getResult();
        equation = m_calculation.getFullCalculationString();

        cout << "Result to " << equation << " is: " << result << endl;
    }
    return 0;
}