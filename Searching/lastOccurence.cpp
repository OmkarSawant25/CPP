#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int lastOccurence(vector<int> v, int target)
{
    int s = 0;
    int e = v.size() - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (v[mid] == target)
        {
            // Ans store
            ans = mid;
            // right search
            s = mid + 1;
        }
        else if (target < v[mid])
            e = mid - 1;
        else if (target > v[mid])
            s = mid + 1;
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    vector<int> v{1, 3, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 9};
    int target = 7;
    int indexOfLastOcc = lastOccurence(v, target);
    cout << "Last Occurence is at " << indexOfLastOcc << endl;

    auto ans = upper_bound(v.begin(), v.end(), target);
    cout << "Last Occurence is at " << ans - v.begin() - 1 << endl;
}