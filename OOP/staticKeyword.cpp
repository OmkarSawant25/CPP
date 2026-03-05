#include <iostream>
using namespace std;

class abc
{
public:
    int x, y;

    // Default constructor
    abc() : x(0), y(0) {}

    // Static member function
    static void print()
    {
        cout << "I am in Static " << __FUNCTION__ << endl;
    }
};

int main()
{
    abc obj1;     // object created
    abc::print(); // calling static function using class name

    abc obj2; // another object
    abc::print();
    abc::print();

    return 0;
}