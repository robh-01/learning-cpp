#include<iostream>
#include<fstream>
using namespace std;

int main(){
  ofstream outputStream("ITEM");

  cout << "Enter item name:";
  char name[30];
  cin >> name;

  outputStream << name << "\n";

  cout << "Enter item cost:";
  float cost;
  cin >> cost;
  outputStream << cost << "\n";

  outputStream.close();

  ifstream inputStream("ITEM");

  char name2[30];
  inputStream >> name2;
  float cost2;
  inputStream >> cost2;
  cout << "\n";
  cout << "Item name: " << name2 << "\n";
  cout << "Item cost: " << cost << "\n";

  inputStream.close();

  return 0;
}
