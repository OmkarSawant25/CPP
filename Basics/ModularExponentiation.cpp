#include <iostream>

using namespace std;

int powMod(int x, int n, int M)
{
    long long int ans = 1;

    while (n > 0)
    {
        if (n & 1) // if n is odd
            ans = (ans * x) % M;

        x = (1LL * x * x) % M; // square x safely using 64-bit
        n >>= 1;               // divide n by 2
    }
    return ans;
}

int main()
{
    int x, n, M;
    cin >> x >> n >> M;

    cout << powMod(x, n, M) << endl;

    return 0;
}
