#include <iostream>
using namespace std;

int getithBit(int n, int i)
{
    int mask = 1 << i;
    int ans = n & mask;
    if (ans == 0)
        return 0;
    else
        return 1;
}
int main()
{
    int ans = getithBit(10, 1);
    cout << ans << endl;
    return 0;
}