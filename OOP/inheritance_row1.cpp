// Row 1 base class Access Modifier -> PUBLIC

#include <iostream>
using namespace std;

// Parent Class / Base Class  -> PUBLIC
class Animal
{
public:
    int age;
};

// Child Class / Derived Class -> PUBLIC (mode of inheritance)
// class Dog : public Animal
// {
// };

// Child Class / Derived Class -> PROTECTED (mode of inheritance)
// class Dog : protected Animal
// {
// public:
//     void print()
//     {
//         cout << this->age << endl; // Can be accessed inside the class
//     }
// };

// Child Class / Derived Class -> PRIVATE (mode of inheritance)
class Dog : private Animal
{
public:
    void print()
    {
        cout << this->age << endl; // Can be accessed inside the class
    }
};

int main()
{
    Dog d;
    // cout << d.age << endl; // In public it is accessible else inaccessible within this context
    d.print();
    return 0;
}

// when base class is public and derived class is public then we can access the data member