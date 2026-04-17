#include <iostream>
#include <string.h>

using namespace std;

class Student
{
    // Member
    int id;
    string name;
    string address;

public:
    // Student(int id = 0, string name = "Default", string address = "Default")
    // {
    //     cout << "Constructor Called" << endl;
    //     this->id = id;
    //     this->address = address;
    //     this->name = name;
    // }

    Student(int id = 0, string name = "Default", string address = "Default") : id(id), name(name), address(address)
    {
        cout << "Initializer List Constructor" << endl;
    }

    void display()
    {
        cout << id << " " << name << " " << address << endl;
    }
};

int main()
{
    Student str1(45, "Rohit", "Mumbai"), str2;
    str1.display();
    str2.display();
}