#include <iostream>
using namespace std;

int countSetBits(int n)
{
    int count = 0;
    while (n != 0)
    {
        int lastBit = (n & 1);
        if (lastBit)
            count++;
        n = n >> 1;
    }
    return count;
}

int countSetBitsFast(int n)
{
    int count = 0;
    while (n != 0)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

int main()
{
    cout << "Number of set bits : " << countSetBits(10) << endl;
    cout << "Number of set bits (Fast) : " << countSetBitsFast(10) << endl;
    return 0;
}