#include <iostream>

using namespace std;

class BaseClass
{
    public:
    virtual void display()
    {
        cout << "Function of Parent Class\n";
    }
};
class DerivedClass : public BaseClass
{
    public:
    void display()
    {
        cout << "Function of Child Class\n";
    }
};

int main()
{
    BaseClass *obj = new DerivedClass(); // ptr to base class
    obj->display();
    return 0;
}