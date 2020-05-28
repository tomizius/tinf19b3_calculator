#include <iostream>
#include <cmath>
#include "app/classes/Calculation.cpp"

using namespace std;

int main()
{
    double result;

    cout << "Calculator Console Application" << endl << endl;
    cout << "Please enter the operation to perform." << endl;
    cout << "Allowed operators: a+b | a-b | a*b | a/b | a:b | a^b | arb (for a√b) | ( | )" << endl;

    while (true) {
        Calculation c;
        char input[50];
        cin.getline(input, 50);

        result = c.Calculate(input);
        cout << "Result is: " << result << endl;
    }



    return 0;
}
