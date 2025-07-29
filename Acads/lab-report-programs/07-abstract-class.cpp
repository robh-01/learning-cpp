// Define a class Shape with a pure virtual function area().
// Derive classes Rectangle, Circle and
// override the area() method.
// Author: Roshan Bhusal

#include <iostream>
using namespace std;

class Shape {
public:
  virtual float area() = 0;
};

class Rectangle : public Shape {
  float length, width;

public:
  Rectangle(float l, float w) : length(l), width(w) {}
  float area() override { return length * width; }
};

class Circle : public Shape {
  float radius;

public:
  Circle(float r) : radius(r) {}
  float area() override { return 3.14 * radius * radius; }
};

int main() {
  Rectangle rect(5.0, 3.0);
  Circle circ(2.0);

  Shape *shape1 = &rect;
  Shape *shape2 = &circ;

  cout << "Area of Rectangle: " << shape1->area() << endl;
  cout << "Area of Circle: " << shape2->area() << endl;

  return 0;
}
