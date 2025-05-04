// a simple program to take two number input from the user, add them ,show the result and also show if the first entered number is even or odd

#include <iostream>
using namespace std;

int main()
{
    int num1, num2;

    // take inputs
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // calculate and display sum
    cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";

    // check if the first entered number is even or odd
    cout << num1 << " is an" << ((num1 % 2 == 0) ? " even number" : " odd number") << ".\n";
    return 0;
}