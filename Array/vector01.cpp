#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr;

    cout << arr.size() << endl;
    cout << arr.capacity() << endl;

    // cout << sizeof(arr) / sizeof(int) << endl;  // Compiler Dependent

    // Insert
    arr.push_back(5);
    arr.push_back(10);

    // Printf
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    // Remove
    arr.pop_back();

    // Printf
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}