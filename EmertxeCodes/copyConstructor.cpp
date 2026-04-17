#include <iostream>

using namespace std;

class Student
{
public:
    int id;
    string name;
    string address;

    Student(int id = 0, string name = "Default", string address = "Default") : id(id), name(name), address(address)
    {
        cout << "Constructor 1 called\n";
    }

    Student(Student const &var)
    {
        cout << "My Copy Constructor called\n";
        id = var.id;
        name = var.name;
        address = var.address;
    }

    void display()
    {
        cout << id << " " << name << " " << address << endl;
    }
};
int main()
{
    Student st1, st2(45, "Rohit", "Mumbai");
    Student st3 = st1;
    Student st4(st2);

    st1.display();
    st2.display();
    st3.display();
    st4.display();
}