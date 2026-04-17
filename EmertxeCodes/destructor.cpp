#include <iostream>
#include <cstdlib>

using namespace std;

class Student
{
    int *ptr;
    int *ptr1;

public:
    Student()
    {
        cout << "Inside Constructor" << endl;
        ptr = new int[5]{10, 20, 30, 40, 50};
        ptr1 = new int(45);
    }
    ~Student()
    {
        cout << "Inside Destructor" << endl;
        delete ptr; // Same as free(ptr);
        delete ptr1; // Same as free(ptr);
    }
    void display()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << ptr[i] << "\t";
        }
        cout << endl << *ptr1 << endl;
    }
};

int main()
{
    Student st1;
    st1.display();
}