#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main() {
  char string[80];

  cout << "Enter a string: ";
  cin >> string;

  int len = strlen(string);

  fstream file;
  cout << "\nOpening the 'TEXT' file and stroing the string in it. \n\n";

  file.open("TEXT", ios::in | ios::out | ios::trunc);

  for(int i = 0; i<len; i++) {
    file.put(string[i]);
  }

  file.seekg(0);

  char ch;
  cout << "Reading the file contents: ";
  while(file.get(ch)) {
    cout << ch;
  }
  cout << endl;
  return 0;
}
