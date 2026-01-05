#include <iostream>
#include <climits>

using namespace std;

void findMissing(int *arr, int n)
{
    // Method 1
    // for (int i = 0; i < n; i++)
    // {
    //     int index = abs(arr[i]);
    //     if (arr[index - 1] > 0)
    //     {
    //         arr[index - 1] *= -1;
    //     }
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] > 0)
    //     {
    //         cout << i + 1 << " ";
    //     }
    // }
    // cout << endl;

    // Method 2
    // Sorting + Swapping
    int i = 0;
    while (i < n)
    {
        int index = arr[i] - 1;
        if (arr[i] != arr[index])
        {
            swap(arr[i], arr[index]);
        }
        else
        {
            i++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != i + 1)
        {
            cout << i + 1 << " ";
        }
    }
    cout << endl;
}

int main()
{
    int n;
    // int a[] = {1, 3, 5, 3, 4};
    int a[] = {1, 3, 3, 3, 4};
    n = sizeof(a) / sizeof(int);

    findMissing(a, n);
}