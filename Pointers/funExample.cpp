#include <iostream>
using namespace std;

void util(int *p)
{
    // p = p + 1;
    *p = *p + 1;

}

int main()
{
    int a = 10;
    int *p = &a;

    cout << "Before" << endl;
    cout << a << endl;
    cout << p << endl;
    cout << *p << endl;

    util(p);

    cout << "\nAfter" << endl;
    cout << a << endl;
    cout << p << endl;
    cout << *p << endl;
}