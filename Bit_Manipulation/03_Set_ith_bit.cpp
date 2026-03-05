#include <iostream>
using namespace std;

void setithBit(int n, int i)
{
    cout << "Before Setting " << i << "th bit value is " << n << endl;
    int mask = 1 << i;
    int ans = n | mask;
    cout << "After Setting " << i << "th bit value is " << ans << endl;
}
int main()
{
    setithBit(10, 2);
    return 0;
}