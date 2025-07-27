// a program to overload a function area() to
// calculate the area of a circle, rectangle, triangle
// Author: Roshan Bhusal
#include <cmath>
#include <iostream>
using namespace std;

const float PI = 3.14;

// for circle
float findArea(float radius) {
  float area = PI * pow(radius, 2);
  return area;
}
// for rectangle
float findArea(float length, int breadth) {
  float area = length * breadth;
  return area;
}
// for triangle
float findArea(float base, float height) {
  float area = 0.5 * base * height;
  return area;
}

int main() {
  cout << "Area of circle: " << findArea(3) << "\n";
  cout << "Area of rectangle: " << findArea(5, 4) << "\n";
  cout << "Area of triangle: " << findArea(10, 0.6f) << "\n";
  return 0;
}
