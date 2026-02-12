#include <iostream>
#include <vector>

using namespace std;

bool checkSorted(vector<int> &v, int &n, int i)
{
    // Base Case
    if (i == n - 1)
        return true;

    // condition
    if (v[i + 1] < v[i])
        return false;

    // Recursive Function
    return checkSorted(v, n, i + 1);
}

int main()
{
    vector<int> v{10, 20, 30, 40, 5};
    int n = v.size();
    int i = 0;

    bool isSorted = checkSorted(v, n, i);
    if (isSorted)
    {
        cout << "Array is sorted" << endl;
    }
    else
    {
        cout << "Array is not sorted" << endl;
    }
}