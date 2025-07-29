// a program using base class pointer to call overridden function in derived
// class
// Author: Roshan Bhusal

#include <iostream>
using namespace std;

class Base {
public:
  virtual void show() { cout << "Base class show function" << endl; }
};

class Derived : public Base {
public:
  void show() override { cout << "Derived class show function" << endl; }
};

int main() {
  Base *basePtr; // base class pointer
  Derived d;     // derived class object
  basePtr = &d;  // base pointer points to derived object

  (*basePtr).show(); // calls Derived::show() due to virtual function

  return 0;
}
