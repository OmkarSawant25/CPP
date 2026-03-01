#include <iostream>
using namespace std;

// Parent Class / Base Class
class A
{
public:
    int physics = 2;
};

class B
{
public:
    int chemistry = 5;
};

// Child Class / Derived Class

class C : public A, public B
{
public:
    int maths = 10;
};

int main()
{
    C obj;
    cout << obj.chemistry << " " << obj.maths << " " << obj.physics << endl;
    return 0;
}
