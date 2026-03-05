#include <iostream>
using namespace std;

int main()
{
    int n = 50;
    if (n & 1)
    {
        cout << "Odd number" << endl;
    }
    else
    {
        cout << "Even number" << endl;
    }
    return 0;
}