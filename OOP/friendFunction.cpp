#include <iostream>
using namespace std;

class A
{
private:
    int x;

public:
    A(int _val) : x(_val) {}

    int getX() const { return x; }
    void setX(int _val) { x = _val; }

    friend class B;               // Friend class
    friend void print(const A &); // Friend function
};

class B
{
public:
    void print(const A &a)
    {
        cout << a.x << endl; // Accessing private member
    }
};

void print(const A &a)
{
    cout << a.x << endl; // Accessing private member
}

int main()
{
    A a(5);
    B b;

    b.print(a); // Friend class function
    print(a);   // Friend function

    return 0;
}