#include <iostream>
#include <limits.h>
using namespace std;

void findMax(int arr[], int n, int i, int &maxi)
{
    // base case -> Stopping condition
    if (i >= n)
        return;

    // Check current element for max
    if (arr[i] > maxi)
        maxi = arr[i];

    // baki recursion sambhal lega
    findMax(arr, n, i + 1, maxi);
}

void findMin(int arr[], int n, int i, int &mini)
{
    // base case -> Stopping condition
    if (i >= n)
        return;

    // Check current element for min
    mini = min(mini, arr[i]);

    // baki recursion sambhal lega
    findMin(arr, n, i + 1, mini);
}

int main()
{
    int arr[] = {10, 20, 33, 44, 55, 66, 77, 88};
    int n = 8;

    int maxi = INT_MIN;
    int mini = INT_MAX;

    int i = 0;
    findMax(arr, n, i, maxi);
    findMin(arr, n, i, mini);

    cout << "Maximum element in array is " << maxi << endl;
    cout << "Minimum element in array is " << mini << endl;
}