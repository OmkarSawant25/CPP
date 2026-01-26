#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool mycomp(string a, string b)
{
    string t1 = a + b;
    string t2 = b + a;
    return t1 > t2;
}

string largestNumber(vector<int> &nums)
{
    vector<string> snums;

    for (auto n : nums)
        snums.push_back(to_string(n));

    sort(snums.begin(), snums.end(), mycomp);

    // Edge case: all zeros
    if (snums[0] == "0")
        return "0";

    string ans = "";
    for (auto str : snums)
        ans += str;

    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    cout << largestNumber(nums) << endl;

    return 0;
}
