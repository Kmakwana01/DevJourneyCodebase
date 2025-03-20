#include <iostream>
using namespace std;

int main()
{
    int a = 2, b = 1;

    std::cout << (a & b) << endl;

    if (a & b)
    {
        cout << "Both bits are 1";

    } else {

        cout << "Both bits are 0";
        
    }

    std::cout <<endl<< (4 ^ 1) << endl;
    // 100
    // ^
    // 001
    // ans 101
    std::cout <<endl<< (5 << 1) << endl;
    // 101 + 0 = 1010 = 10
    // ans 10
    std::cout <<endl<< (5 >> 1) << endl;
    // 101 - 1 = 10 = 2
    // ans 10
    return 0;
}