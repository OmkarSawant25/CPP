#include <iostream>
using namespace std;

int main()
{
    int *ptr = 0;  // old
    // int *ptr = NULL; // old
    // int *ptr = nullptr; // new method
    if(ptr == NULL)
    {
        cout << "ptr is a NULL pointer" << endl;
    }
    // cout << *ptr << endl;  // Segmentation fault (core dumped)
}