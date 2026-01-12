#include <iostream>
#include <vector>
using namespace std;

int lowerBound(vector<int> &arr, int x)
{
    int start = 0;
    int end = arr.size() - 1;
    int ans = end;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] >= x)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (x > arr[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
    return ans;
}

vector<int> binarySearchMethod(vector<int> &arr, int k, int x)
{
    int h = lowerBound(arr, x);
    int l = h - 1;
    while (k--)
    {
        if (l < 0)
            h++;
        else if (h >= arr.size())
            l--;
        else if (x - arr[l] > arr[h] - x)
            h++;
        else
            l--;
    }
    return vector<int>(arr.begin() + l + 1, arr.begin() + h);
}

vector<int> findClosestElements(vector<int> &arr, int k, int x)
{
    return binarySearchMethod(arr, k, x);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 4;
    int x = 3;

    vector<int> result = findClosestElements(arr, k, x);

    for (int val : result)
        cout << val << " ";

    cout << endl;
    return 0;
}
