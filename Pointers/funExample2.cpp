#include <iostream>
using namespace std;

void solve(int **q)
{
    // q = q + 1;

    // *q = *q + 1;

    **q = **q + 1;
}

int main()
{
    int x = 12;
    int *p = &x;
    int **q = &p;

    solve(q);

    cout << x << endl;
}