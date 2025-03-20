#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    for (int i = 1; i <= a; i++)
    {
        char ch = 'A';
        for (int j = 0; j <= a; j++)
        {
            std::cout << ch << " ";
            ch += 1;
        }
        std::cout << endl;
        
    }

    return 0;
}

// g++ -std=c++11 p1.cpp && ./a.exe


// A B C D E F 
// A B C D E F
// A B C D E F
// A B C D E F
// A B C D E F