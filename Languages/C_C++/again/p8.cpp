#include <iostream>
using namespace std;

int sum(double a, double b)
{
    return a + b;
}

int factorialN(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    double a, b;
    std::cout << "Enter a :: ";
    std::cin >> a;
    std::cout << endl;
    std::cout << "Enter b :: ";
    std::cin >> b;
    std::cout << endl;
    cout << "a + b is == " << sum(a, b) <<endl;
    cout<<"fact of a == " << factorialN(a);
    return 0;
}