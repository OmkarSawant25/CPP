#include <iostream>
using namespace std;

int numRollsToTarget(int n, int k, int target) {

    if (target < 0)
        return 0;

    if (n == 0 && target == 0)
        return 1;

    if (n == 0 && target != 0)
        return 0;

    if (n != 0 && target == 0)
        return 0;

    int ans = 0;

    for (int i = 1; i <= k; i++) {
        ans = ans + numRollsToTarget(n - 1, k, target - i);
    }

    return ans;
}

int main() {
    int n, k, target;

    cout << "Enter n (dice), k (faces), target: ";
    cin >> n >> k >> target;

    cout << "Number of ways: " << numRollsToTarget(n, k, target) << endl;

    return 0;
}