#include <bits/stdc++.h>
using namespace std;

bool isPossibleSolution(vector<int> &stalls, int k, int mid)
{
    // can we place k cows, with at least mid distance between cows
    int c = 1;           // first cow placed
    int pos = stalls[0]; // position of last placed cow

    for (int i = 1; i < stalls.size(); i++)
    {
        if (stalls[i] - pos >= mid)
        {
            c++; // One more cow has been placed
            pos = stalls[i];
        }
        if (c == k)
            return true;
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());

    int start = 0;
    int end = stalls[stalls.size() - 1] - stalls[0];
    int ans = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (isPossibleSolution(stalls, k, mid))
        {
            ans = mid;       // valid distance
            start = mid + 1; // try larger distance
        }
        else
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> stalls = {1, 2, 4, 8, 9};
    int k = 3;

    cout << aggressiveCows(stalls, k) << endl;

    return 0;
}
