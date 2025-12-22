#include <iostream>
using namespace std;

// Function Declaration + Defination
char marks(int n)
{
    switch(n / 10)
    {
        case 10 :
        case 9 : return 'A';
        case 8 : return 'B';
        case 7 : return 'C';
        case 6 : return 'D';
        default : return 'E';
    }
}

int main()
{
    int n;
    cin >> n;
    char grade = marks(n);
    cout << grade << endl;
    return 0;
}
