#include <iostream>
using namespace std;

int main()
{
    int a = 5;

    for (int i = 1; i <= a; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            std::cout << j << " ";
        }

        std::cout << endl;
        
    }

    return 0;
}

// 1 
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1
