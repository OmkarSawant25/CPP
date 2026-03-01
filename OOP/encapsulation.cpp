#include <iostream>
using namespace std;

class Animal
{
    // Perfect Encapsulation
private:
    int age;

public:
    void eat()
    {
        cout << "Eating" << endl;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    void getAge()
    {
        cout << "Age = " << age << endl;
    }
};
int main()
{
    Animal a;
    a.setAge(10);
    a.getAge();
    return 0;
}