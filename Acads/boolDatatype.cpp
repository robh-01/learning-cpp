#include <iostream>
using namespace std;

int main()
{
    bool isTrue;
    // in a bool datatype, we can use both true or 1 as its value same for (false or 0)
    isTrue = true;
    // isTrue = 1;
    while (isTrue)
    {
        cout << "It's running.\n";
    }
    return 0;
}
