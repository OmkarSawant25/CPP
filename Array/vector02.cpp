#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // vector<int> brr(10);
    // vector<int> brr(10,1);
    vector<int> brr(10,-1);

    cout << "Size of brr " << brr.size() << endl;
    cout << "Capacity of brr " << brr.capacity() << endl;

    // Printf
    for (int i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << " ";
    }
    cout << endl;
}