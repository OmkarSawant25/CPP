#include <iostream>
using namespace std;

int factorial(int n)
{
    // Base condition
    if (n == 0 || n == 1)
        return 1;

    // Recursive relation
    int ans = n * factorial(n - 1);
    return ans;
}

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    int ans = factorial(n);
    cout << "Factorial of " << n << " is " << ans << endl;
}