#include <iostream>
#include <string.h>

using namespace std;

class Student
{
    // Member
    int id;
    string name;

public:
    Student()
    {
        cout << "Default Constructor called\n";
        id = 10;
        name = "adc";
    }
    Student(int id, string name)
    {
        cout << "Parameterized Constructor called\n";
        this->id = id;
        this->name = name;
    }
    Student(int id)
    {
        cout << "Parameterized Constructor with one args\n";
        this->id = id;
    }
    void display()
    {
        cout << "ID : " << id << endl;
        cout << "Name : " << name << endl;
    }
};

int main()
{
    Student s1, s2(45, "Rohit"), s3(25);
    s1.display(); 
    s2.display(); 
    s3.display(); 
}