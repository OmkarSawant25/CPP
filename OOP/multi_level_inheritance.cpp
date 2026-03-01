#include <iostream>
using namespace std;

// Parent Class / Base Class
class Fruit
{
public:
    string name;
};

// Child Class / Derived Class
class Mango : public Fruit
{
public:
    int weight;
};

class Hapus : public Mango
{
public:
    int sugarLevel;
};

int main()
{
    Hapus aam;
    aam.name = "Kesar";
    aam.sugarLevel = 100;
    aam.weight = 50;
    cout << aam.name << " " << aam.sugarLevel << " " << aam.weight << endl;
    return 0;
}
