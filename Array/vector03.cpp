#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;
    vector<int> brr(n, -1);

    cout << "Size of brr " << brr.size() << endl;
    cout << "Capacity of brr " << brr.capacity() << endl;

    // Printf
    for (int i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;

    cout << "Vector brr is empty or not " << brr.empty() << endl;
    vector<int> drr;
    cout << "Vector drr is empty or not " << drr.empty() << endl;

    // vector<int> crr{1, 2, 3, 4, 5};

    // for (int i = 0; i < crr.size(); i++)
    // {
    //     cout << crr[i] << " ";
    // }
    // cout << endl;
}