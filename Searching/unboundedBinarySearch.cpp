#include <iostream>
using namespace std;

int binarySearch(int a[], int start, int end, int x)
{
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (a[mid] == x)
            return mid;
        else if (x < a[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }
    return -1;
}

int unboundedBS(int *a, int n, int x)
{
    if (a[0] == x)
        return 0;
    int i = 0;
    int j = 1;
    while (j < n && a[j] < x)
    {
        i = j;
        j = j * 2;
    }
    if (j >= n)
        j = n - 1;

    return binarySearch(a, i, j, x);
}

int main()
{
    int arr[] = {2, 5, 7, 10, 14, 18, 21, 25, 30, 35, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 25;

    int ans = unboundedBS(arr, n, target);
    cout << "Found at index " << ans << endl;
    cout << "Element at index " << arr[ans] << endl;

    return 0;
}
