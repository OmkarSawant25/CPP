#include <iostream>
#include <cstdlib>

using namespace std;

class ShallowCopy
{
public:
    int *ptr;

    ShallowCopy(int val)
    {
        ptr = new int(val);
    }
    ShallowCopy(ShallowCopy const &other)
    {
        ptr = other.ptr;
    }
    // ~ShallowCopy()
    // {
    //     delete ptr;
    // }
    void display()
    {
        cout << *ptr << endl;
    }
};

class DeepCopy
{
public:
    int *ptr;

    DeepCopy(int val)
    {
        ptr = new int(val);
    }
    DeepCopy(DeepCopy const &other)
    {
        ptr = new int(*other.ptr);
    }
    ~DeepCopy()
    {
        delete ptr;
    }
    void display()
    {
        cout << *ptr << endl;
    }
};

int main()
{
    ShallowCopy obj1(45);
    ShallowCopy obj2(obj1);
    obj1.display();
    obj2.display();

    DeepCopy obj3(18);
    DeepCopy obj4(obj3);
    obj3.display();
    obj4.display();
}