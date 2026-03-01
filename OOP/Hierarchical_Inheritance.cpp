#include <iostream>
using namespace std;

class Car
{
public:
    int age;
    void speedUp()
    {
        cout << "Speeding up " << endl;
    }
};

class scorpio : public Car
{
};
class gwagon : public Car
{
};
int main()
{
    scorpio s11;
    s11.speedUp();

    gwagon g11;
    g11.speedUp();

    return 0;
}