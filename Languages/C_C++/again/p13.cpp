#include <iostream>
using namespace std;

int main()
{
    int a = 8, b = 4;

    std::cout << (a & b) << endl;

    if (a & b)
    {
        cout << "Both bits are 1";

    } else {

        cout << "Both bits are 0";
        
    }

    return 0;
}