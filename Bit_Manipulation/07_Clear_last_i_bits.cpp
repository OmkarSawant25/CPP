#include <iostream>
using namespace std;

void clearLastIBit(int n, int i)
{
    int mask = (-1 << i);
    n = n & mask;
    cout << "After clearing last " << i << " i bits value is " << n << endl;
} 

int main()
{
    int n = 7;
    clearLastIBit(n, 2);
    return 0;
}