#include <iostream>
using namespace std;
// digit sum
int main()
{
    int a = 578;
    int sum = 0;
    
    do
    {
        int lastDigit = a % 10;
        sum += lastDigit;
        a = a / 10;

    } while (a != 0);

    std::cout << sum << std::endl;

    return 0;
}