#include <iostream>
using namespace std;

void updateIthBit(int n, int i, int target)
{
    cout << "Before Updating " << i << "th bit value with target " << target << " value is " << n << endl;

    // Step - 1 Clear the ith bit
    int maskC = ~(1 << i);
    n = n & maskC;

    // Step - 2 Create mask
    int mask = target << i;

    // Step - 3 Bitwise OR operation
    n = n | mask;

    cout << "After Updating " << i << "th bit value with target " << target << " value is " << n << endl;
    
}

int main()
{
    int n = 10;
    updateIthBit(n, 0, 1);
    return 0;
}