#include <iostream>
using namespace std;

// Parent Class / Base Class
class Animal
{
public:
    int age;
    int weight;

    void eat()
    {
        cout << "Eating" << endl;
    }
};

// Child Class / Derived Class
class Dog : public Animal
{
};
int main()
{
    Dog d;
    d.eat();

    return 0;
}