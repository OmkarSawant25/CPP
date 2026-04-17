#include <iostream>
#include <string.h>

using namespace std;

class Student
{
    public:
    void add(int n1, int n2)
    {
        cout << n1 + n2 << endl;
    }
    int add(int n1, int n2, int n3)
    {
        cout << n1 + n2 + n3 << endl;
        return n1 + n2 + n3;
    }
    void add(int n1, int n2, double n3)
    {
        cout << n1 + n2 + n3 << endl;
    }
};

int main()
{
    Student s1;
    s1.add(2, 3);
    s1.add(2, 5, 7);
    s1.add(2, 3, 7.5);
}