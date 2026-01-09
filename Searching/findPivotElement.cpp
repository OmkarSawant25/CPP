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
        // Single Element
        if (s == e)
            return s;

        // mid = 10 , mid + 1 = 2
        if (mid + 1 <= e && arr[mid] > arr[mid + 1])
            return mid;

        // mid - 1 = 10 , mid = 2
        if (mid - 1 >= s && arr[mid - 1] > arr[mid])
            return mid - 1;

        if (arr[s] > arr[mid])
            e = mid - 1;
        else
            s = mid + 1;
    }
    return -1;
}

int main()
{
    vector<int> a{10, 2, 4, 6, 8, 9};
    int ans = findPivot(a);
    if (ans == -1)
        cout << "Kuch Gadbad Hai" << endl;
    else
    {
        cout << "Answer is at index " << ans << endl;
        cout << "Answer is " << a[ans] << endl;
    }
}