// Row 2 base class Access Modifier is PRIVATE

#include <iostream>
using namespace std;

// Parent Class / Base Class  -> PRIVATE
class Animal
{
private:
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
// class Dog : protected Animal
// {
// public:
//     void print()
//     {
//         cout << this->age << endl;
//     }
// };

// Child Class / Derived Class -> PRIVATE (mode of inheritance)
// class Dog : private Animal  
// {
// public:
//     void print()
//     {
//         cout << this->age << endl; // Can be accessed inside the class
//     }
// };

int main()
{
    // Dog d;
    // cout << d.age << endl; // We cannot access the private data member
    // d.print();
    return 0;
}
