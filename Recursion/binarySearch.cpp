#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int> &v, int s, int e, int key)
{
    // Base case
    if (s > e)
        return -1;

    // Key found
    int mid = s + (e - s) / 2;
    if (v[mid] == key)
        return mid;

    // v[mid] < key -> search in right
    if (v[mid] < key)
        return binarySearch(v, mid + 1, e, key);
    else
        return binarySearch(v, s, mid - 1, key);
}

int main()
{
    vector<int> v{10, 20, 30, 40, 50, 60, 70, 80, 99};
    int n = v.size();
    int s = 0;
    int e = n - 1;
    int key = 99;

    int ans = binarySearch(v, s, e, key);

    cout << "Answer is " << ans << endl;
}