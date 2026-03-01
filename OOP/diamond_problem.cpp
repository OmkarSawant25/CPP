#include <iostream>
using namespace std;
class A
{
public:
    int chemistry;
    A()
    {
        chemistry = 50;
    }
};
class B
{
public:
    int chemistry;
    B()
    {
        chemistry = 100;
    }
};
class C : public A, public B
{
public:
    int maths;
};
int main()
{
    C obj;
    cout << obj.A::chemistry << endl; // Scope resolution fix
    cout << obj.B::chemistry << endl; // Scope resolution fix
    cout << obj.maths << endl;
    return 0;
}