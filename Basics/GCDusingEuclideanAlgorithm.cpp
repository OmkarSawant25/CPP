#include <iostream>

using namespace std;

// int gcd(int a, int b)
// {
//     if (a == 0)
//         return b;
//     if (b == 0)
//         return a;

//     while (b != 0)
//     {
//         int rem = a % b;
//         a = b;
//         b = rem;
//     }
//     return a;
// }

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    while (b > 0 && a > 0)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a == 0 ? b : a;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << gcd(a, b) << endl;

    return 0;
}
