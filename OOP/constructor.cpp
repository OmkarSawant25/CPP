#include <iostream>
using namespace std;
class Animal
{
    int age;
    int weight;

public:
    // default constructor
    Animal()
    {
        cout << "Default constructor called" << endl;
    }

    // parameterized constructor
    Animal(int age)
    {
        this->age = age;
        cout << "Parameterized constructor called" << endl;
    }
    Animal(int age, int weight)
    {
        this->age = age;
        this->weight = weight;
        cout << "Parameterized constructor 2 called" << endl;
    }

    // Copy constructor
    Animal(Animal &obj)   // If not pass by refernce then it will run infinitely
    {
        this->age = obj.age;
        cout << "Copy constructor called" << endl;
    }
};
int main()
{
    Animal suresh;        // Default constructor
    Animal ramesh(30);    // Parameterized constructor
    Animal omkar(30, 25); // Parameterized constructor

    // Copy object
    Animal c = suresh;
    Animal copy(suresh);  // Copy constructor
    return 0;
}