#include <iostream>
using namespace std;

namespace global
{
    int x = 10;
}
int main()
{
    double x = 35.60;
    cout << global::x << endl;
}