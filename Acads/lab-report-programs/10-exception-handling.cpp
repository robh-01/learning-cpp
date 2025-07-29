// Write a program to handle:
// Divide by zero
// Array out-of-bound access
// Author: Roshan Bhusal

#include <iostream>
#include <stdexcept> // for std::out_of_range and std::runtime_error

using namespace std;

double divide(double numerator, double denominator) {
  if (denominator == 0) {
    throw runtime_error("Error: Division by zero is not allowed.");
  }
  return numerator / denominator;
}

int getArrayElement(int arr[], int size, int index) {
  if (index < 0 || index >= size) {
    throw out_of_range("Error: Array index out of bounds.");
  }
  return arr[index];
}

int main() {
  int arr[5] = {10, 20, 30, 40, 50};

  try {
    cout << "Divide 10 by 2: " << divide(10, 2) << endl;
    cout << "Divide 10 by 0: " << divide(10, 0) << endl; // This will throw

  } catch (const runtime_error &e) {
    cout << e.what() << endl;
  }

  try {
    cout << "Element at index 3: " << getArrayElement(arr, 5, 3) << endl;
    cout << "Element at index 10: " << getArrayElement(arr, 5, 10)
         << endl; // This will throw

  } catch (const out_of_range &e) {
    cout << e.what() << endl;
  }

  return 0;
}
