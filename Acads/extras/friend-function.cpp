// Write a program to create a class named height with data members meter(int)
// and centimeter(int). Overload the binary + operator using friend function to
// add two heights.

#include <iostream>
using namespace std;

class Height {
  int meter = 0;
  int centimeter = 0;

public:
  Height() {}
  Height(int m, int c) {
    if (c > 99) {
      meter = m + (c / 100);
      centimeter = c % 100;
    } else {
      meter = m;
      this->centimeter = c;
    }
  }

  void show() {
    cout << "Height is " << meter << " meters " << centimeter
         << " centimeters.\n";
  }

  friend Height operator+(Height, Height);
};

Height operator+(Height h1, Height h2) {
  int newMeter = h1.meter + h2.meter;
  int newCentimeter = h1.centimeter + h2.centimeter;
  if (newCentimeter > 99) {
    newMeter = newMeter + newCentimeter / 100;
    newCentimeter = newCentimeter % 100;
  }
  return Height(newMeter, newCentimeter);
}

int main() {
  Height h1(5, 274);
  Height h2(10, 65);
  h1.show();
  h2.show();
  (h1 + h2).show();
  return 0;
}
