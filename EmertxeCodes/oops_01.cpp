#include <iostream>

using namespace std;

class Employee
{
private:
    // Member
    int id;
    string name, address;

public:
    // Method
    void get_data()
    {
        cout << "Enter ID No: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Address: ";
        cin >> address;
    }
    void print_data()
    {
        cout << "The ID is: " << id << endl;
        cout << "The Name is: " << name << endl;
        cout << "The Address is: " << address << endl;
    }
};

int main()
{
    Employee emp1;

    emp1.get_data();
    emp1.print_data();
}