// a program to overload +(addition) to add two complex numbers objects
// Author: Roshan Bhusal

#include <iostream>
using namespace std;

class Complex {
  float real = 0, imaginary = 0;

public:
  Complex() {};
  Complex(float real, float imaginary) {
    this->real = real;
    this->imaginary = imaginary;
  }
  Complex operator+(Complex c) {
    Complex temp;
    temp.real = this->real + c.real;
    temp.imaginary = this->imaginary + c.imaginary;
    return temp;
  };

  void display() { cout << real << " + " << imaginary << "j\n"; }
};

int main() {
  Complex c1(3, 4);
  Complex c2(7, 1);
  Complex c3 = c1 + c2;
  c1.display();
  c2.display();
  c3.display();
  return 0;
}
