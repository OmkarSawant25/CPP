#include <iostream>
using namespace std;

class abc
{
public:
    int x;
    int *y;

    abc(int _x, int _y) : x(_x), y(new int(_y)) {}

    // default dumb copy constructor: It does SHALLOW COPY
    // abc(const abc &obj)
    // {
    //     x = obj.x;
    //     y = obj.y;
    // }

    //  Our Smart DEEP COPY
    abc(const abc &obj)
    {
        x = obj.x;
        y = new int(*obj.y);
    }

    void print()
    {
        cout << "X : " << x << endl
             << "PTR Y : " << y << endl
             << "Content of Y : " << *y << endl
             << endl;
    }

    ~abc()
    {
        delete y;
    }
};

int main()
{
    cout << "Printing a : " << endl;
    abc a(1, 2);
    a.print();

    // abc b(a);
    cout << "Printing b : " << endl;
    abc b = a; // Copy constructor call hota hai
    b.print();

    cout << "Printing b : " << endl;
    *b.y = 25;
    b.print();

    cout << "Printing a : " << endl;
    a.print();
    return 0;
}