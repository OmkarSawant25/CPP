#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {10, 44, 66, 77};
    int *ptr = arr;
    cout << sizeof(arr) << endl;
    cout << sizeof(ptr) << endl;

    cout << arr + 1 << endl;
    cout << arr << endl;
}