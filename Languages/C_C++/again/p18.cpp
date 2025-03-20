#include <iostream>
using namespace std;
#include <vector>
#include <climits> // For INT_MIN
// digit sum
int main()
{
    int n = 7;
    int arr[7] = {3, -4, 5, 4, -1, 7, -8};
    int sum = 0;
    int max_sum = INT_MIN;

    for (int st = 0; st < n; st++)
    {
        for (int end = st; end < n; end++)
        {
            for (int i = st; i < end; i++)
            {
                std::cout << arr[i];
                sum += arr[i];
            }

            if (max_sum < sum)
            {
                max_sum = sum;
            }
            sum = 0;
            std::cout << " ";
        }
        std::cout << endl;
    }

        std::cout << "max_sum = " << max_sum;
    // std::cout << (25 << 2) << std::endl;

    return 0;
}