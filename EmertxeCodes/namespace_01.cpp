#include <iostream>
using namespace std;

namespace first
{
    int x = 10;
}
namespace second
{
    double x = 35.60;
}
int main()
{
    // double x = 0.60;

    using namespace second;
    cout << x << endl;
    cout << first::x << endl;
    cout << second::x << endl;
}