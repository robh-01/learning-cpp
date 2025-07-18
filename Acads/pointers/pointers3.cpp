// manipulating the content of the <variable> using pointer variable
#include <iostream>
using namespace std;

int main() {
  int someIntergerVariable = 20;
  int *pointerToThatVariable = &someIntergerVariable;

  // we can manipulate the content of the
  // original <variable> using pointer variable
  *pointerToThatVariable = *pointerToThatVariable + 190;
  // mental model to think about the above line:
  // contentOfVariable = contentOfVariable + 190
  // it's equivalent to: 
  // someIntergerVariable = someIntergerVariable + 190
  cout << someIntergerVariable << endl;
  // output:
  // 210
  return 0;
}
