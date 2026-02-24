#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int numSquaresHelper(int n)
{
    if(n == 0)  return 1;
    if(n < 0)   return 0;

    int ans = INT_MAX;
    int i = 1;
    int end = sqrt(n);

    while(i <= end)
    {
        int perfectSquare = i * i;

        int numberOfPerfectSquare = 1 + numSquaresHelper(n - perfectSquare);

        if(numberOfPerfectSquare < ans)
            ans = numberOfPerfectSquare;

        i++;
    }

    return ans;
}

int numSquares(int n) {
    return numSquaresHelper(n) - 1;
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Minimum perfect squares: " << numSquares(n) << endl;

    return 0;
}