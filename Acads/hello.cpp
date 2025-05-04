#include <iostream>
using namespace std;

int main()
{
    // without using namespace std
    //  std::cout << "Hello World!\n";

    // with using namespace std
    cout << "Hello World!" << endl;
    // endl is for immediate output and flushing the buffer (\n works the same in most cases.)
    return 0;
}