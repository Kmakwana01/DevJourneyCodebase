#include <iostream>
using namespace std;

bool fibonacci(int n)
{
    int a = 0, b = 1, c = 0;

    for (int i = 0; i <= n; i++)
    {
        std::cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
}

int main()
{
    int n = 15;

    fibonacci(n);

    return 0;
}