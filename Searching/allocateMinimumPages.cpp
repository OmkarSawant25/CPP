#include <bits/stdc++.h>
using namespace std;

bool isPossibleSolution(vector<int> &arr, int k, int sol)
{
    int pageSum = 0;
    int c = 1; // number of students

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > sol)
            return false;

        if (pageSum + arr[i] > sol)
        {
            c++;
            pageSum = arr[i];

            if (c > k)
                return false;
        }
        else
        {
            pageSum += arr[i];
        }
    }
    return true;
}

int findPages(vector<int> &arr, int k)
{
    if (k > arr.size())
        return -1;

    int start = 0;
    int end = accumulate(arr.begin(), arr.end(), 0);
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (isPossibleSolution(arr, k, mid))
        {
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {12, 34, 67, 90};
    int k = 2;

    cout << findPages(arr, k) << endl;

    return 0;
}
