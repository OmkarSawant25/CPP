#include <iostream>
using namespace std;

class Animal
{
    // Access Specifiers
public:
    // States or Properties
    int age;
    string name;

    // Behaviour
    void eat()
    {
        cout << "Eating" << endl;
    }

    void sleep()
    {
        cout << "Sleeping" << endl;
    }
};

int main()
{
    // Object Creation

    // Static
    Animal a;
    a.age = 25;
    a.name = "Pluto";
    cout << "Age of the animal is " << a.age << endl;
    cout << "Name of the animal is " << a.name << endl;
    a.eat();
    a.sleep();

    // Dynamic

    return 0;
}
