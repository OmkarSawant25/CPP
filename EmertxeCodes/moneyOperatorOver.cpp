#include <iostream>

using namespace std;

class Money
{
    int rupees;
    int paise;

public:
    Money(int r = 0, int p = 0) : rupees(r), paise(p)
    {
    }
    Money operator+(Money m)
    {
        Money temp;
        temp.paise = paise + m.paise;
        temp.rupees = rupees + m.rupees;

        if (temp.paise >= 100)
        {
            temp.rupees += temp.paise / 100;
            temp.paise = temp.paise % 100;

        }
        return temp;
    }

    void display()
    {
        cout << "Amount is " << rupees << "." << paise << "/-"<< endl;
    }
};

int main()
{
    Money m1(10,25);
    Money m2(5,75);

    Money m3 = m1 + m2;
    m3.display();

    return 0;
}