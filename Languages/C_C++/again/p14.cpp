#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i; // Return the index if the target is found
        }
    }
    return -1; // Return -1 if the target is not found
}

int reverseArray(int arr[], int size)
{
    int start = 0, end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {60, 3, 44, 5, 90, 98, 1, 4, 78};
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    int target = 4; // The target value to search for
    int ans = linearSearch(arr, size, target);

    reverseArray(arr, size);

    if (ans != -1)
    {
        cout << "Your target is at index " << ans << endl;
    }
    else
    {
        cout << "Target not found!" << endl;
    }

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}
