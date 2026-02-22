#include <iostream>
#include <vector>
using namespace std;

int robHelper(vector<int> &nums, int i)
{
    if (i >= nums.size())
        return 0;

    int robAmt1 = nums[i] + robHelper(nums, i + 2);
    int robAmt2 = robHelper(nums, i + 1);

    return max(robAmt1, robAmt2);
}
int rob(vector<int> &nums)
{
    return robHelper(nums, 0);
}

int main()
{
    int n;
    cout << "Enter number of houses: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter money in houses: ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    cout << "Maximum money robbed: " << rob(nums) << endl;

    return 0;
}

// Input: prices = [7,1,5,3,6,4]
// Output: 5