#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool cmp(char first, char second)
{
    // return first < second;      // Ascending order
    return first > second; // Descending order
}

bool compare(int a, int b)
{
    return a > b;
}
int main()
{
    string s = "babbar";
    sort(s.begin(), s.end(), cmp);
    cout << s << endl;

    vector<int> v = {5, 1, 4, 3, 2};
    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // for (auto i : v)
    // {
    //     cout << i << " ";
    // }
    // cout << endl;
}