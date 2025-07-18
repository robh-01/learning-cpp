// introduction to pointers
#include <iostream>
#include <ostream>
using namespace std;

int main() {
  int someIntergerVariable = 20;
  int *pointerToThatVariable = &someIntergerVariable;
  // these declaractions are same as the above line (the positin of '*')
  // &<variable> gives the memory address of that <variable>
  int *anotherPointerToThatVariable = &someIntergerVariable;
  int *anotherPointerToThatVariable2 = &someIntergerVariable;
  cout << *pointerToThatVariable << "\n";
  cout << *anotherPointerToThatVariable << "\n";
  cout << *anotherPointerToThatVariable2 << "\n";
  // output:
  // 20
  // 20
  // 20

  // this is just address of the variable 'someIntergerVariable'
  cout << pointerToThatVariable << endl;
  // output:
  // 0x7ffc4fd95d0c
  return 0;
}
