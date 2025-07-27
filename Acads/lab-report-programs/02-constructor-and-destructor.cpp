// a program to demonstrate the use of
// default constructor, parameterized constructor,
// copy constructor and destructor
// Author: Roshan Bhusal

#include <iostream>
using namespace std;

class Teacher {
public:
  void teach() { cout << "Teaching my students"; }
  // destructor function
  ~Teacher() {
    cout << "Destructor function of teacher is being executed" << "\n";
  }
};

class Student {
  string name;

public:
  // parameterized constructor
  Student(string name) { this->name = name; }
  // copy constructor
  Student(Student &s) { this->name = s.name; }
  // destructor function
  ~Student() {
    cout << "Destructor function of student is being executed" << "\n";
  }

  void display() { cout << this->name << "\n"; }
};

int main() {
  // default constructor is called here
  Teacher t;
  Student s1("Roshan Bhusal");
  Student s2(s1);
  s1.display();
  s2.display();
  return 0;
}
