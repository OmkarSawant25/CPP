#include <iostream>

using namespace std;

class Payment
{
    public:
    virtual void pay(int amount) = 0; // Pure Virtual Function
};

class CreditCard : public Payment
{
    public:
    void pay(int amount)
    {
        cout << "Paid " << amount << " using Credit Card " << endl;
    }
};

class Upi : public Payment
{
    public:
    void pay(int amount)
    {
        cout << "Paid " << amount << " using UPI" << endl;
    }
};

int main()
{
    Payment *p;
    CreditCard c;
    Upi u;

    p = &c;
    p->pay(500);
    
    p = &u;
    p->pay(100);   
}