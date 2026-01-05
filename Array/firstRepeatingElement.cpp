#include <iostream>
#include <climits>
#include <unordered_map>

using namespace std;

// Returns the index
int findRepeated(int *arr, int n)
{
    // Method 1
    // for (int i = 0; i < n; i++)
    // {
    //     bool isRepeated = false;
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             isRepeated = true;
    //             return i + 1;
    //         }
    //     }
    // }
    // return -1;

    // Method 2
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (hash[arr[i]] > 1)
        {
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    int a[] = {1, 5, 3, 4, 3, 5, 6};
    n = sizeof(a) / sizeof(int);

    cout << findRepeated(a, n) << endl;
}