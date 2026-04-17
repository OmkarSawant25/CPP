#include <iostream>
#include <string.h>

using namespace std;

class CabService
{
public:
    void bookRide(string location)
    {
        cout << "Booking ride to " << location << endl;
    }
    void bookRide(string location, string time)
    {
        cout << "Booking ride to " << location << " at " << time << endl;
    }
    void bookRide(string location, string time, string carType)
    {
        cout << "Booking " << carType << " ride to " << location << " at " << time << endl;
    }
};

int main()
{
    CabService c;
    c.bookRide("Airport");
    c.bookRide("Airport", "5 AM");
    c.bookRide("Airport", "10 PM", "Benz");
}