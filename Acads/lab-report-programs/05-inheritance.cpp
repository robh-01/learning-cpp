// a program to demonstrate
// single inheritance(employee => manager)
// multilevel inheritance(employee => manager => director)
// Author: Roshan Bhusal

#include <iostream>
using namespace std;

class Employee {
public:
  void show() { cout << "I am an Employee" << endl; }
};

class Manager : public Employee {
public:
  void show() { cout << "I am a Manager derived from Employee" << endl; }
};

class Director : public Manager {
public:
  void show() { cout << "I am a Director derived from Manager" << endl; }
};

int main() {
  cout << "Single Inheritance:" << endl;
  Manager m;
  m.Employee::show(); // Accessing base class method
  m.Manager::show();  // From Manager

  cout << "\nMultilevel Inheritance:" << endl;
  Director d;
  d.Employee::show(); // From Employee
  d.Manager::show();  // From Manager
  d.show();           // From Director

  return 0;
}
