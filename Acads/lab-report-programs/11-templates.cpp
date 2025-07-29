// Create a class/function template to perform a 
// generic operation(swap)
// Author: Roshan Bhusal

#include <iostream>
using namespace std;

template <typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 5, y = 10;
    cout << "Before swap: x = " << x << ", y = " << y << "\n";
    swapValues(x, y);
    cout << "After swap: x = " << x << ", y = " << y << "\n";

    double a = 1.1, b = 2.2;
    cout << "Before swap: a = " << a << ", b = " << b << "\n";
    swapValues(a, b);
    cout << "After swap: a = " << a << ", b = " << b << "\n";

    return 0;
}
