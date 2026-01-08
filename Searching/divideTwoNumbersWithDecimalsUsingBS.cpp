#include <iostream>
using namespace std;

int solve(int dividend, int divisor)
{
    int s = 0;
    int e = abs(dividend);

    int mid = s + (e - s) / 2;
    int ans = 0;

    while (s <= e)
    {
        // perfect solution
        if (abs(mid * divisor) == abs(dividend))
        {
            ans = mid;
            break;
        }

        // not perfect solution
        if (abs(mid * divisor) > abs(dividend))
            e = mid - 1;
        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }

    if ((dividend < 0 && divisor < 0) || (dividend > 0 && divisor > 0))
        return ans;
    else
        return -ans;
}

int main()
{
    int dividend = -22;
    int divisor = 7;

    int ans = solve(dividend, divisor);

    cout << "Answer is " << ans << endl;

    int precision;
    cout << "Enter the numbers of floating digits in precision " << endl;
    cin >> precision;

    double finalAns = ans;
    double step = 0.1;
 
    for (int i = 0; i < precision; i++)
    {
        for (double j = finalAns; abs(j * divisor) <= abs(dividend); j = j + step)
        {
            finalAns = j;
        }
        step = step / 10;
    }
    cout << "Final ans is " << finalAns << endl;
}