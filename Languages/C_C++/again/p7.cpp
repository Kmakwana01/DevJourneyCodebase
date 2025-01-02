#include <iostream>
using namespace std;

int main()
{
    int a = 5;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << "*";
        }

        for (int j = i; j <= 5; j++)
        {
            std::cout << " ";
        }

        for (int k = a - 1; k >= i; k--)
        {
            std::cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            //  std::cout << i;
            std::cout << "*";
        }

        std::cout << endl;
    }

    for (int i = a; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << "*";
        }

        for (int j = i; j <= 5; j++)
        {
            std::cout << " ";
        }

        for (int k = a - 1; k >= i; k--)
        {
            std::cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            //  std::cout << i;
            std::cout << "*";
        }

        std::cout << endl;
    }

    return 0;
}