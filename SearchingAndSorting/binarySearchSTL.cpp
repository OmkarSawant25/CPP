#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    // For Array
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int size = sizeof(arr) / sizeof(int);
    int target = 14;

    if (binary_search(arr, arr + size, target))
        cout << "Target found" << endl;
    else
        cout << "Target not found" << endl;

    // By using Vector
    int target = 10;
    vector<int> v{1, 2, 3, 4, 5, 6};
    if (binary_search(v.begin(), v.end(), target))
        cout << "Target found" << endl;
    else
        cout << "Target not found" << endl;
}