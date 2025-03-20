#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << i << " ";
        }

        std::cout << endl;
        
    }

    return 0;
}

// 1 
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5