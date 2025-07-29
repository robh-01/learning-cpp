#include <iostream>
using namespace std;

class Base {
public:
   void show() { cout << "show function of base called\n"; }
};

class Derived : public Base {
public:
  void show() { cout << "show function of derived called\n"; }
};

int main() {
  Base *pointerOfTypeBase;
  Base b;
  Derived d;
  pointerOfTypeBase = &d;
  // cout << pointerOfTypeBase;
  (*pointerOfTypeBase).show();
  return 0;
}
