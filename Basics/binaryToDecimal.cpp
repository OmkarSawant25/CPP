#include <iostream>
#include <cmath>
using namespace std;

// Function Declaration + Defination
int binaryToDecimal(int n)
{
    // Division Method
    int decimal = 0;
    int i = 0;
    while (n > 0)
    {
        int bit = n % 10;
        decimal = bit * pow(2, i++) + decimal;
        n = n / 10;
    }
    return decimal;
}

int main()
{
    int n;
    cin >> n;
    int binary = binaryToDecimal(n);
    cout << binary << endl;
    return 0;
}
