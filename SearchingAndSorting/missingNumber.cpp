#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;

    while(start <= end)
    {
        int mid = start + (end - start) / 2;
        if(arr[mid] == mid)
            start = mid + 1;
        else
            end = mid - 1; 
    }
    return start;
}

int main()
{
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter sorted array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int missing = missingNumber(arr);
    cout << "Missing number is: " << missing << endl;

    return 0;
}
