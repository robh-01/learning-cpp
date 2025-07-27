// a program to create a class student with data members name,
// roll and marks.
// Read and display the data with objects
// Author: Roshan Bhusal

#include <iostream>
using namespace std;

class Student {
  string name;
  int roll;
  float marks;

public:
  void getData(string name, int roll, float marks) {
    this->name = name;
    this->roll = roll;
    this->marks = marks;
  }
  void display() {
    cout << "Name: " << name << "\n";
    cout << "Roll Number: " << roll << "\n";
    cout << "Marks: " << marks << "\n";
  }
};

int main() {
  Student s1;
  s1.getData("Roshan Bhusal", 45, 59.50);
  s1.display();
  return 0;
}
