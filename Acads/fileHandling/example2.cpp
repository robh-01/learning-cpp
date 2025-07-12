#include<iostream>
#include<fstream>

using namespace std;

int main() {

  ofstream fout;
  fout.open("country");
  fout << "United States of America \n";
  fout << "United Kingdom\n";

  fout.close();

  fout.open("capital");
  fout << "Washigton\n";
  fout << "London\n";

  fout.close();

  // reading the files
  const int N = 80;
  char line[N];

  ifstream fin;
  fin.open("country");

  cout << "Content of the country file:\n";
  
  while(fin) {
    fin.getline(line, N);
    cout << line;
  }

  fin.close();
  fin.open("capital");

  cout << "Content of the capital file:\n";
  while(fin) {
    fin.getline(line, N);
    cout << line;
  }

  fin.close();

  return 0;

}
