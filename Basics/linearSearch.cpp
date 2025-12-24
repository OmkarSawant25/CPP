#include <iostream>
using namespace std;

bool find(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
            return true;
    }
    return false;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int size = 10;

    cout << "Enter the key to find " << endl;
    int key;
    cin >> key;

    if (find(arr, size, key))
        cout << "Found" << endl;
    else
        cout << "Not Found" << endl;

    return 0;
}