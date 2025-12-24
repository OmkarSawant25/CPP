#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void incArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] + 10;
    }
    printArray(arr, n);
}
int main()
{
    int arr[] = {5, 6};
    int size = 2;

    incArr(arr, size);
    printArray(arr, size);

    return 0;
}