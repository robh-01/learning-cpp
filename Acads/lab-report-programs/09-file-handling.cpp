// C++ program to manage student records using file handling
// Author: Roshan Bhusal

#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;

void add() {
    ofstream f("data.txt", ios::app);
    int roll; string name; float marks;
    cout << "Enter roll, name, marks: ";
    cin >> roll >> name >> marks;
    f << roll << " " << name << " " << marks << endl;
    cout << "Student added.\n";
}

void show() {
    ifstream f("data.txt");
    int roll; string name; float marks;
    cout << "\nStudent Records:\n";
    while (f >> roll >> name >> marks)
        cout << roll << " " << name << " " << marks << "\n";
}

void update() {
    int roll, r; string name, n; float marks, m;
    cout << "Enter roll to update: ";
    cin >> roll;
    ifstream in("data.txt");
    ofstream out("temp.txt");
    bool found = false;
    while (in >> r >> n >> m) {
        if (r == roll) {
            cout << "Enter new name and marks: ";
            cin >> name >> marks;
            out << r << " " << name << " " << marks << "\n";
            found = true;
        } else
            out << r << " " << n << " " << m << "\n";
    }
    in.close(); out.close();
    remove("data.txt"); rename("temp.txt", "data.txt");
    if (found) cout << "Record updated.\n";
    else cout << "Record not found.\n";
}

void del() {
    int roll, r; string name; float marks;
    cout << "Enter roll to delete: ";
    cin >> roll;
    ifstream in("data.txt");
    ofstream out("temp.txt");
    bool found = false;
    while (in >> r >> name >> marks) {
        if (r != roll)
            out << r << " " << name << " " << marks << "\n";
        else found = true;
    }
    in.close(); out.close();
    remove("data.txt"); rename("temp.txt", "data.txt");
    if (found) cout << "Record deleted.\n";
    else cout << "Record not found.\n";
}

int main() {
    int c;
    do {
        cout << "\nMenu:\n1-Add 2-Show 3-Update 4-Delete 5-Exit\nChoice: ";
        cin >> c;
        if (c == 1) add();
        else if (c == 2) show();
        else if (c == 3) update();
        else if (c == 4) del();
    } while (c != 5);
    cout << "Exiting program.\n";
}
