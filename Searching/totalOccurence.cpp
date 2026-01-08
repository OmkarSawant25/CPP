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

int firstOccurence(vector<int> v, int target)
{
    int s = 0;
    int e = v.size() - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while (s <= e)
    {
        if (v[mid] == target)
        {
            ans = mid;
            e = mid - 1;
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
    vector<int> v{2, 4, 4, 4, 4, 4, 4, 6, 8, 20};
    int target = 4;

    int indexOfLastOcc = lastOccurence(v, target);
    cout << "Last Occurence is at " << indexOfLastOcc << endl;
    int indexOfFirstOcc = firstOccurence(v, target);
    cout << "First Occurence is at " << indexOfFirstOcc << endl;

    cout << "Total Occurence is " << indexOfLastOcc - indexOfFirstOcc + 1 << endl;
}