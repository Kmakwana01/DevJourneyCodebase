#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int iterator = 1;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 0; j <= a; j++)
        {
            std::cout << iterator << " ";
            iterator += 1;
        }
        std::cout << endl;
        
    }

    return 0;
}

// 1 2 3 4 5 6 
// 7 8 9 10 11 12
// 13 14 15 16 17 18
// 19 20 21 22 23 24
// 25 26 27 28 29 30