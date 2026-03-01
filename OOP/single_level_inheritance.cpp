#include <iostream>
using namespace std;

// Parent Class / Base Class 
class Animal
{
public:
    string name;
    int weight;
    int age;

    void speedUp()
    {
        cout << "Speeding Up" << endl;
    }
    void breakMaro()
    {
        cout << "Breaks Applied" << endl;
    }
};

// Child Class / Derived Class
class Scorpio : public Animal
{
};

int main()
{
    Scorpio Omkar;
    Omkar.speedUp();
    return 0;
}
