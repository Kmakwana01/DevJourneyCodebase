#include <iostream>
using namespace std;

int decimalTobinary(int decimal)
{
    int rem = 0, pow = 1, ans = 0;
    int original_decimal = decimal;

    while (decimal > 0)
    {
        rem = decimal % 2;
        decimal /= 2;
        ans = ans + (rem * pow);
        pow *= 10;
    }

    std::cout << "binary number for " << original_decimal << " is :: " << ans << endl;
}

int main()
{
    int n = 60;

    for (int i = 0; i <= n; i++)
    {
        decimalTobinary(i);
    }

    return 0;
}