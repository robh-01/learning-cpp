// Write a program to use a friend function to access private data of two
// different classes and perform addition.
// Author: Roshan Bhusal

#include <iostream>
using namespace std;

class ClassB; // Forward declaration

class ClassA {
private:
  int valueA;

public:
  ClassA(int val) : valueA(val) {}

  // Declare friend function
  friend int addValues(ClassA, ClassB);
};

class ClassB {
private:
  int valueB;

public:
  ClassB(int val) : valueB(val) {}

  // Declare friend function
  friend int addValues(ClassA, ClassB);
};

// Friend function definition
int addValues(ClassA a, ClassB b) {
  // Accessing private members of both classes
  return a.valueA + b.valueB;
}

int main() {
  ClassA objA(10);
  ClassB objB(20);

  int sum = addValues(objA, objB);
  cout << "Sum: " << sum << endl;

  return 0;
}
