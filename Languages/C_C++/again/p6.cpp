#include <iostream>
using namespace std;

int main()
{
    int a = 4;

    for (int i = 1; i <= a; i++)
    {
        for (int k = a; k >= i; k--)
        {
            std::cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            //  std::cout << i;
            if (j == 1)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }

        if (i != 1)
        {
            for (int l = i - 1; l >= 1; l--)
            {
                if (l == 1)
                {
                    std::cout << "*";
                }
                else
                {
                    std::cout << " ";
                }
            }
        }

        std::cout << endl;
    }

    for (int i = a; i >= 1; i--)
    {
        for (int k = a; k >= i; k--)
        {
            std::cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            //  std::cout << i;
            if (j == 1)
            {
                std::cout << "*";
            }
            else
            {
                std::cout << " ";
            }
        }

        if (i != 1)
        {
            for (int l = i - 1; l >= 1; l--)
            {
                if (l == 1)
                {
                    std::cout << "*";
                }
                else
                {
                    std::cout << " ";
                }
            }
        }

        std::cout << endl;
    }

    return 0;
}