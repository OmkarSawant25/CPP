#include <iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(const vector<int> &arr)
{
    int s = 0;
    int e = arr.size() - 1;

    while (s < e)
    {
        int mid = s + (e - s) / 2;

        if (arr[mid] < arr[mid + 1])
            s = mid + 1; // increasing slope
        else
            e = mid; // decreasing slope
    }

    return s; // peak index
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter mountain array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int peakIndex = peakIndexInMountainArray(arr);

    cout << "Peak index is: " << peakIndex << endl;
    cout << "Peak element is: " << arr[peakIndex] << endl;

    return 0;
}
