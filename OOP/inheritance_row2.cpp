// Row 2 base class Access Modifier is PROTECTED

#include <iostream>
using namespace std;

// Parent Class / Base Class  -> PROTECTED
class Animal
{
protected:
    int age;
};

// Child Class / Derived Class -> PUBLIC (mode of inheritance)
// class Dog : public Animal
// {
// public:
//     void print()
//     {
//         cout << this->age << endl; // Can be accessed inside the class
//     }
// };

// Child Class / Derived Class -> PROTECTED (mode of inheritance)
// class Dog : protected Animal   // We can only access protected inside the derived class or inside class
// {
// public:
//     void print()
//     {
//         cout << this->age << endl; // Can be accessed inside the class
//     }
// };

// Child Class / Derived Class -> PRIVATE (mode of inheritance)
class Dog : private Animal   // Bracket ke bich me kahipar bhi access kar sakte hai
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
    // cout << d.age << endl; // error: ‘int Animal::age’ is protected within this context
    d.print();
    return 0;
}
