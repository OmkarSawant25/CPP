#include <iostream>
using namespace std;

void clearithBit(int n, int i)
{
    cout << "Before Clearing " << i << "th bit value is " << n << endl;
    int mask = ~(1 << i);
    int ans = n & mask;
    cout << "After Clearing " << i << "th bit value is " << ans << endl;
}

int main()
{
    clearithBit(10, 1);
    return 0;
}