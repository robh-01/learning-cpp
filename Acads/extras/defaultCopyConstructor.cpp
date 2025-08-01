#include <iostream>
using namespace std;

class someClass {
public:
  int x;

  // no explicitly defined copy constructor
};

int main() {
  someClass obj1;
  obj1.x = 10;
  someClass obj2(obj1);                 // default copy constructor is called
  cout << "obj2.x = " << obj2.x << endl; // should print 10
  obj2.x = 20;                           // modifying obj2 does not affect obj1
  cout << "obj1.x = " << obj1.x << endl; // should still print 10
  cout << "obj2.x = " << obj2.x << endl;
  // should print 20
  // This demonstrates that the default copy constructor creates a shallow copy.
  // If the class had dynamically allocated memory, this could lead to issues
  // like double deletion. To avoid such issues, a user-defined copy constructor
  // should be implemented. For example: someClass(const someClass &other) {
  //   x = other.x;
  // }
  return 0;
}
