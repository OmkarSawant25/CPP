#include <iostream>
using namespace std;

namespace MySpace
{
    class Employee
    {
    public:
        int id;
        string name;
        void display()
        {
            cout << "\nInside Namespace \n";
            cout << "ID : " << id << endl;
            cout << "Name : " << name << endl;
        }
    };
}
class Employee
{
public:
    int id;
    string name;
    void display()
    {

        cout << "ID : " << id << endl;
        cout << "Name : " << name << endl;
    }
};

int main()
{
    Employee emp1;
    MySpace::Employee emp2; // In namespace scope

    emp1.id = 25;
    emp1.name = "Omkar";

    emp2.id = 45;
    emp2.name = "Rohit";

    emp1.display();
    emp2.display();
}