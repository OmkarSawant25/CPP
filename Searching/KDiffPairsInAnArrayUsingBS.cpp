#include <bits/stdc++.h>
using namespace std;

int searchBinary(vector<int> &arr, int start, int target)
{
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        int element = arr[mid];
        if (element == target)
            return mid;
        else if (target < element)
            end = mid - 1;
        else
            start = mid + 1;

        mid = start + (end - start) / 2;
    }
    return -1;
}

int findPairs(vector<int> &nums, int k)
{
    sort(nums.begin(), nums.end());
    set<pair<int, int>> ans;

    for (int i = 0; i < nums.size(); i++)
    {
        if (searchBinary(nums, i + 1, nums[i] + k) != -1)
        {
            ans.insert({nums[i], nums[i] + k});
        }
    }

    return ans.size();
}

int main()
{
    vector<int> nums = {3, 1, 4, 1, 5};
    int k = 2;

    cout << findPairs(nums, k) << endl;

    return 0;
}
