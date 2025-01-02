#include <iostream>
#include <vector>
using namespace std;
// digit sum
vector<pair<int, int>> pairSum(vector<int> arr, int target)
{
    vector<pair<int, int>> ans;
    int n = arr.size();

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                ans.push_back({i, j});
            }
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 0, 9, 4, 5, 6, 7};
    int target = 7;

    vector<pair<int, int>> result = pairSum(arr, target);
    
    for (auto &p : result)
    {
        cout << "(" << arr[p.first] << ", " << arr[p.second] << ")" << endl;
    }

    return 0;
}