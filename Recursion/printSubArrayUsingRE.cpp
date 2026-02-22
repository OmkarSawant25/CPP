#include <iostream>
#include <vector>

using namespace std;

void printSubarray_Util(vector<int> &nums, int start, int end)
{
    if (end == nums.size())
        return;

    for (int i = start; i <= end; i++)
    {
        cout << nums[i] << " ";
    }
    cout << endl;

    printSubarray_Util(nums, start, end + 1);
}

void printSubarray(vector<int> &nums)
{
    for (int start = 0; start < nums.size(); start++)
    {
        int end = start;
        printSubarray_Util(nums, start, end);
    }
}

int main()
{
    vector<int> v{10, 20, 30, 40, 50};
    printSubarray(v);
    return 0;
}