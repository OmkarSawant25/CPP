#include <iostream>
using namespace std;
class Animal
{
public:
    int age;
    int weight;
    string name;

    // default constructor
    Animal()
    {
        cout << "Default constructor called" << endl;
    }

    // Copy constructor
    Animal(Animal &obj)
    {
        this->age = obj.age;
        this->weight = obj.weight;
        this->name = obj.name;
        cout << "Copy constructor called" << endl;
    }

    void print()
    {
        cout << this->age << " " << this->weight << " " << this->name << endl;
    }

    ~Animal()
    {
        cout << "I am Inside Destructor" << endl;
    }
};
int main()
{
    Animal a;
    a.age = 25;
    a.weight = 80;
    a.name = "Omkar";

    Animal b = a;

    a.print();
    b.print();
    
    Animal *c = new Animal;
    c->age = 25;

    // Manually delete it
    delete c;
}