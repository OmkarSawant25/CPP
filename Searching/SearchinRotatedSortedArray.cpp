#include <iostream>
#include <vector>
using namespace std;

int findPivot(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;

    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        // Single element
        if (s == e)
            return s;

        // Case 1: mid is pivot
        if (mid + 1 <= e && arr[mid] > arr[mid + 1])
            return mid;

        // Case 2: mid-1 is pivot
        if (mid - 1 >= s && arr[mid - 1] > arr[mid])
            return mid - 1;

        // Decide search space
        if (arr[s] > arr[mid])
            e = mid - 1;
        else
            s = mid + 1;
    }
    return -1;
}

int searchBinary(vector<int> arr, int start, int end, int target)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target)
            return mid;
        else if (target < arr[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

int search(vector<int> &nums, int target)
{
    int pivotIndex = findPivot(nums);
    int ans = -1;

    // If array is not rotated
    if (pivotIndex == -1)
        return searchBinary(nums, 0, nums.size() - 1, target);

    if (target >= nums[0] && target <= nums[pivotIndex])
        ans = searchBinary(nums, 0, pivotIndex, target);
    else
        ans = searchBinary(nums, pivotIndex + 1, nums.size() - 1, target);

    return ans;
}

int main()
{
    vector<int> nums = {10, 2, 4, 6, 8, 9};
    int target = 6;

    int result = search(nums, target);

    if (result == -1)
        cout << "Element not found" << endl;
    else
        cout << "Element found at index " << result << endl;

    return 0;
}
