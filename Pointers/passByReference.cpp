#include <iostream>
using namespace std;
void solve(int &x)
{
    x++;
}
// void solve(int x)
// {
//     x++;
// }
int main()
{
    int a = 5;
    solve(a);
    cout << a << endl;
}