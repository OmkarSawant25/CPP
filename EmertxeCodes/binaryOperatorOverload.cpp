#include <iostream>

using namespace std;

class Binary
{
public:
    int i;
    int i1;

    Binary(int i = 0, int i1 = 0) : i(i), i1(i1)
    {
    }
    void display()
    {
        cout << "i : " << i << endl;
        cout << "i1 : " << i1 << endl;
    }

    void operator+(int a)
    {
        cout << "Adding to constant" << endl;
        i += a;
        i1 += a;
    }

    void operator+(Binary b2)
    {
        cout << "Adding to another object" << endl;
        i += b2.i;
        i1 += b2.i1;
    }
};

int main()
{
    Binary B1(10, 5);
    Binary B2(5, 20);

    int a = 10;
    B1 + a;
    B1.display();

    B1 + B2;
    B1.display();
    B2.display();

    return 0;
}