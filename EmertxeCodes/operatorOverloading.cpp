#include <iostream>
#include <string.h>

using namespace std;

class Student
{
public:
    int add(int n1, int n2)
    {
        return n1 + n2;
    }
    double add(double n1, double n2)
    {
        return n1 + n2;
    }
    string add(string n1, string n2)
    {
        // Operator Overloading
        return n1 + n2;
    }
};

int main()
{
    Student s1;
    cout << s1.add(10,5) << endl;
    cout << s1.add(10.3,5.5) << endl;
    cout << s1.add("Omkar ", "Sawant") << endl;
}