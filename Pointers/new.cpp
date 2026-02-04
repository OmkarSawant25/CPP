#include <iostream>
using namespace std;

int main()
{
    // int a = 5;
    // int b = 10;
    // cout << a << endl;
    // cout << &a << endl;
    // cout << &b << endl;

    int a = 4;
    // Create pointer
    int *ptr = &a;
    cout << "Address of a is " << &a << endl;
    cout << "Value stored in ptr is " << ptr << endl;
    cout << "Value ptr is pointing to is " << *ptr << endl;
}