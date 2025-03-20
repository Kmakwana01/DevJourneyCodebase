#include <iostream>
using namespace std;

int main()
{
    int a = 8;

    for (int i = 1; i <= a; i++)
    {
        for (int k = a; k >= i; k--)
        {
            std::cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            //  std::cout << i;
            std::cout << j;
        }

        if (i != 1)
        {
            for (int l = i - 1; l >= 1; l--)
            {
                std::cout << l;
            }
        }

        std::cout << endl;
    }

    return 0;
}

//         1
//        121
//       12321
//      1234321
//     123454321
//    12345654321
//   1234567654321
//  123456787654321