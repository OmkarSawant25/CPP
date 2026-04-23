#include <iostream>
using namespace std;

namespace MockTeam
{
    class Interview
    {
    public:
       void schedule()
       {
        cout << "Mock Interview Scheduled at Emertxe" << endl;
       }
    };
}
namespace PlacementTeam
{
    class Interview
    {
    public:
       void schedule()
       {
        cout << "Real Interview Scheduled at XYZ" << endl;
       }
    };
}

namespace Loan
{
    double calculateInterest(int amount)
    {
        return amount * 0.10;
    }
}
namespace Saving
{
    double calculateInterest(int amount)
    {
        return amount * 0.04;
    }
}

int main()
{
    PlacementTeam::Interview pl;
    MockTeam::Interview m1;

    m1.schedule();
    pl.schedule();

    cout << "Saving Interest : " << Saving::calculateInterest(1000) << endl;
    cout << "Loan Interest : " << Loan::calculateInterest(1000) << endl;
    
}