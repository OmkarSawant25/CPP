#include <iostream>
#include <vector>

using namespace std;

int countPrimes(int n)
{
    if (n == 0)
        return 0;

    int ans = 0;
    vector<bool> prime(n, true);

    prime[0] = false;
    prime[1] = false;

    for (int i = 2; i < n; i++)
    {
        if (prime[i])
            ans++;

        int j = 2 * i;
        while (j < n)
        {
            prime[j] = false;
            j += i;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;

    cout << countPrimes(n) << endl;

    return 0;
}
