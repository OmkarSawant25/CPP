// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

vector<int> twoPtrMethod(vector<int> &arr, int k, int x)
{
    int l = 0, h = arr.size() - 1;

    while (h - l >= k)
    {
        if (x - arr[l] > arr[h] - x)
            l++;
        else
            h--;
    }

    return vector<int>(arr.begin() + l, arr.begin() + h + 1);
    // vector<int> ans;
    // for (int i = l; i <= h; i++)
    //     ans.push_back(arr[i]);

    // return ans;
}

vector<int> findClosestElements(vector<int> &arr, int k, int x)
{
    return twoPtrMethod(arr, k, x);
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
