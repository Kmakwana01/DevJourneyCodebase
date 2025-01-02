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