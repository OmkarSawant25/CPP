#include <iostream>

using namespace std;

class Operator
{
public:
    int n1;
    int n2;
    Operator(int n1 = 0, int n2 = 0) : n1(n1), n2(n2)
    {
    }
    void display()
    {
        cout << "n1 : " << n1 << endl;
        cout << "n2 : " << n2 << endl;
    }

    void operator-()
    {
        cout << "Unary minus" << endl;
        n1 = n1 * -1;
        n2 = n2 * -1;
    }
    // Consider as prefix operation default
    void operator++()
    {
        cout << "Prefix exp" << endl;
        ++n1;
        ++n2;
    }
    // Postfix operation -> operator comes after the operand.
    void operator++(int)
    {
        cout << "Postfix exp" << endl;
        n1++;
        n2++;
    }
};
int main()
{
    Operator op1(10,-20);

    op1.display();

    -op1;
    op1.display();

    ++op1;
    op1.display();

    op1++;
    op1.display();
    
    return 0;
}