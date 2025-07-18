// one info about creating pointer variables
#include <iostream>
using namespace std;

int main() {
  char someChracterVariable = 'a';
  // int *pointerToThatCharacterVariable = &someChracterVariable;
  // this gives error
  // error: cannot convert ‘char*’ to ‘int*’ in initialization

  // pointer to a particular <data-type> must be also of type <data-type>
  // now this is good
  char *pointerToThatCharVariable = &someChracterVariable;
  // we can get the content of a <variable> that a pointer
  // variable is pointing to by using indirection(or said as derefrencing
  // operator)
  cout << *pointerToThatCharVariable << "\n";
  // output:
  // a
  return 0;
}
