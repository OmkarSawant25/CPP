#include <iostream>
#include <string.h>

using namespace std;

class Student
{
    // Member
    int age;
    string name;
    string course;

public:
    Student()
    {
        age = 0;
        name = "Not Registered";
        course = "Not Registered";
    }
    Student(string name)
    {
        this->age = 0;
        this->name = name;
        course = "Not Registered";
    }
    Student(int age, string name)
    {
        this->age = age;
        this->name = name;
        course = "Not Registered";
    }

    Student(int age, string name, string course)
    {
        this->age = age;
        this->name = name;
        this->course = course;
    }
    void display()
    {
        cout << "\nName : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Course : " << course << endl;
    }
};

int main()
{
    Student s1;
    Student s2(22, "Omkar", "ECE");
    Student s3(25,"Sainath");
    Student s4("Ghantan");

    s1.display();
    s2.display();
    s3.display();
    s4.display();
}