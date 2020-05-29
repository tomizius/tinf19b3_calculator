#include <iostream>
#include "app/classes/Calculation.h"

using namespace std;

int main()
{
    double result;
    char * equation;

    cout << "Calculator Console Application" << endl << endl;
    cout << "Please enter the operation to perform." << endl;
    cout << "Allowed operators: a+b | a-b | a*b | a/b | a:b | a^b | arb (for a√b) | ( | )" << endl;

    while (true) {
        char input[50];
        cin.getline(input, 50);
        Calculation c(input);

        result = c.getResult();
        equation = c.getFullCalculationString();

        cout << "Result to " << equation << " is: " << result << endl;
    }



    return 0;
}
