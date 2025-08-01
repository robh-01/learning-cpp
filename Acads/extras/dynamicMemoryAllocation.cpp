#include <iostream>
using namespace std;

int main() {
  int *ptr = new int;
  *ptr = 5;
  cout << *ptr << "\n";
  delete ptr;
  int *arr = new int[5];
  for (int i = 0; i < 5; i++) {
    //*(arr + i) = (i + 1) * 10;
    arr[i] = (i + 1) * 10;
  }
  for (int i = 0; i < 5; i++) {
    // cout << *(arr + i) << "\n";
    cout << arr[i] << "\n";
  }
  delete[] arr;
  return 0;
}
