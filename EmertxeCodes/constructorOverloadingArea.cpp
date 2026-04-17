#include <iostream>
#include <string.h>

using namespace std;

class Construct
{
    // Member
    int area;

public:
    Construct()
    {
        cout << "Default Constructor with 0 args\n";
        area = 0;
    }
    Construct(int a, int b)
    {
        cout << "Parameterized Constructor with 2 args\n";
        area = a * b;
    }

    void display()
    {
        cout << "Area : " << area << endl;
    }
};

int main()
{
    Construct c;
    c.display();

    Construct c1(10, 20);
    c1.display();
}