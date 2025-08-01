#include <iostream>
using namespace std;

class Actor {
  string name;
  float rating;

public:
  Actor(string n, float r) {
    name = n;
    rating = r;
  }

  void display() const {
    if (rating >= 5) {
      cout << name << "\n";
    }
  }
};

int main() {
  const Actor a1("Nikhil Upreti", 5);
  const Actor a2("Rajesh Hamal", 6969);
  const Actor a3("Hari Sharma", 4.9);
  a1.display();
  a2.display();
  a3.display();
  return 0;
}
