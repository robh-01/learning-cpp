// one interesting thing about array and pointer

#include <iostream>
using namespace std;

int main() {
  // the array variable 'num' or array-name whatever you would like to call that
  // is just a pointer to the first element of the array.
  // wowwwwwwww
  int num[] = {69, 56, 1000, 45, 74};
  cout << num << endl;
  cout << *num << endl;
  // output:
  // 0x7fff1d614290
  // 69

  // we can increment that pointer "num" to get other elements of the array. Up Next: example 5(pointer arithmetic 
  return 0;
}
