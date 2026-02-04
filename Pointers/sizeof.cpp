#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *ptr = &a;
    cout << "Size of int ptr is " << sizeof(ptr) << endl;

    char b = 'A';
    char *ptr1 = &b;
    cout << "Size of char ptr is " << sizeof(ptr1) << endl;

    double c = 1212.211;
    double *ptr2 = &c;
    cout << "Size of double ptr is " << sizeof(ptr2) << endl;
}