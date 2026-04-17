#include <iostream>

using namespace std;

class BankAccount
{
private:
    int balance; // Hidden Data

public:
    BankAccount(int b)
    {
        balance = b;
    }

    // Public method to deposit
    void deposit(int amt)
    {
        if (amt > 0)
        {
            balance += amt;
            cout << "Deposited : " << amt << endl;
        }
    }

    void withdraw(int amt)
    {
        if (amt <= balance)
        {
            balance -= amt;
            cout << "Withdrawn : " << amt << endl;
        }
        else
        {
            cout << "Insufficient Balance" << endl;
        }
    }

    void display()
    {
        cout << "Remaining Balance : " << balance << endl;
    }
};

int main()
{
    BankAccount b(1000);
    b.deposit(5000);
    b.withdraw(100);

    b.display();
}