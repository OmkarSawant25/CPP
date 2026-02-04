#include <iostream>
using namespace std;

void solve(int *p)
{
    cout << "Address stored inside p is " << p << endl;
    cout << "Address of p is " << &p  << endl;  // here the p pointer is another location
    *p = *p + 10;
}

int main()
{
    int arr = 5;
    cout << "Address of a is " << &arr << endl;

    int *ptr = &arr;
    cout << "Address stored in ptr is " << ptr << endl;
    cout << "Address of ptr is " << &ptr << endl;

    solve(ptr);
    cout << "Value of a is " << arr << endl;
}