#include <iostream>

using namespace std;

class Car
{
    private:
    void injectFuel()
    {
        cout << "Fuel injected into engine\n";
    }
    void startEngineInterval()
    {
        cout << "Engine Started\n";
    }

    public:
    void start()
    {
        injectFuel();
        startEngineInterval();
        cout << "Car is ready to drive" << endl;
    }

    void accelerate()
    {
        cout << "Car is accelerating" << endl;
    }
    void brakeApplied()
    {
        cout << "Car Stopped" << endl;
    }
};

int main()
{
    Car c;
    c.start();
    c.accelerate();
    c.brakeApplied();
}