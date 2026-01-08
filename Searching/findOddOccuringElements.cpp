#include <iostream>
#include <vector>

using namespace std;

int check(vector<int> a)
{
    int s = 0;
    int e = a.size() - 1;
    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        // Single element
        if (s == e)
            return s;

        // 2 cases : mid -> even or mid -> odd
        if (mid % 2 == 0)
        {
            if (a[mid] == a[mid + 1])
            {
                // Search in right
                s = mid + 2;
            }
            else
            {
                e = mid;
            }
        }
        else
        {
            if (a[mid] == a[mid - 1])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    vector<int> a{1, 1, 2, 2, 3, 3, 4, 4, 3, 600, 600, 4, 4};

    int ans = check(a);

    cout << "Index is " << ans << endl;
    cout << "Value is " << a[ans] << endl;
}