#include<iostream>
using namespace std;

int main(void) {
    // anything that represents 0 is a falsy value in cpp
    // ex:
    // int x = 0;
    // float or double x = 0
    // bool isTrue = false => false is a boolean literal for 0
    // int* ptr = nullptr => nullptr is a special keyword that represents a
    // null pointer — effectively a pointer with the value 0.
    // char ch = '\0' => The null character is a character with ASCII value 0.

    //anything that is not 0 is considered truthy
    // ex:
    // int x = 1;
    // float or double x = 1.0
    // bool isTrue = true => true is a boolean literal for 1
    // int* ptr = &x => a pointer that points to the address of x
    // char ch = 'a' => The character 'a' has an ASCII value of 97, which is not 0.
    // string str = "hello" => A non-empty string is considered truthy.
    // disclaimer: string are not inherently truthy or falsy in C++, they are objects(that's what gpt said at least).

    // char value = 'a'; //truthy
    // char value = '\0'; // falsy
    // char value = "hello"; // cannot evaluate a string as a boolean, we have to use value.length() > 0 to get a boolean value
    // int value = 0; //falsy
    // int value = 1; //truthy
    // float value = 5.5; //truthy
    float value = 0.0; //falsy
    if(value) {
        cout << "The value is truthy.\n";
    } else {
        cout << "The value is falsy.\n" ;
    }

    return 0;
}