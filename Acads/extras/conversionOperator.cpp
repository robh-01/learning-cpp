#include <iostream>
using namespace std;

class Dollar;

class Rupee {
  float value = 0;

public:
  Rupee(float val) { value = val; }
  void show() { cout << value << "\n"; }
  operator Dollar();
};

class Dollar {
  float value = 0;

public:
  Dollar(float val) { value = val; }
  void show() { cout << value << "\n"; }

  operator Rupee() { return Rupee(value * 133); }
};

Rupee::operator Dollar() { return Dollar(value / 135); }

int main() {
  int choice;
  cout << "Enter 1 to convert Rupees to Dollars, 2 for Dollars to Rupees: ";
  cin >> choice;

  if (choice == 1) {
    float r;
    cout << "Enter amount in Rupees: ";
    cin >> r;
    Rupee ru(r);
    Dollar d = ru; // uses conversion operator
    ru.show();
    d.show();
  } else if (choice == 2) {
    float d;
    cout << "Enter amount in Dollars: ";
    cin >> d;
    Dollar dl(d);
    Rupee ru = dl; // uses conversion operator
    dl.show();
    ru.show();
  } else {
    cout << "Invalid choice." << endl;
  }

  return 0;
}
