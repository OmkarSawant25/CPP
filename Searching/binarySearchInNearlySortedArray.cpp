#include <iostream>
#include <vector>
using namespace std;

int searchBinary(vector<int> a, int target)
{
    int s = 0;
    int e = a.size() - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        if (a[mid] == target)
            return mid;
        if (a[mid - 1] == target && mid - 1 >= s)
            return mid - 1;
        if (a[mid + 1] == target && mid + 1 < e)
            return mid + 1;
        if (a[mid] < target)
            s = mid + 2;
        else
            e = mid - 2;

        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    vector<int> a{10, 3, 40, 20, 50, 80, 70};
    int target = 40;

    int indexOfTarget = searchBinary(a, target);

    if (indexOfTarget == -1)
        cout << "Target not found" << endl;
    else
        cout << "Target " << target << " found " << indexOfTarget << " index" << endl;
}