#include <iostream>
using namespace std;

void solve(int *arr)
{
    cout << "Size inside solve function is " << sizeof(arr) << endl;
}

int main()
{
    int arr[10];
    cout << "Size inside main function is " << sizeof(arr) << endl;
    solve(arr);
}