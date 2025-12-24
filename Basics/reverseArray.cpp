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

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = 8;
    int start = 0;
    int end = size - 1;

    cout << "Before Reversing" << endl;
    printArray(arr, size);

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    cout << "After Reversing" << endl;
    printArray(arr, size);

    return 0;
}