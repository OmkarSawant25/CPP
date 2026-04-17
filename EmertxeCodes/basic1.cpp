#include <iostream>
using namespace std;

int main()
{
    int var;
    float f;
    char c;
    string str;

    cout << "Enter integer value : ";
    cin >> var;
    cout << "Enter float value : ";
    cin >> f;
    cout << "Enter char : ";
    cin >> c;
    cout << "Enter string : ";
    // cin >> str;
    cin.ignore();  // used to ignore or skip characters in the input buffer
    getline(cin, str); // read the input char untill newline is encountered

    cout << "\nValue in var : " << var << endl;
    cout << "Value in float : " << f << endl;
    cout << "Value in char : " << c << endl;
    cout << "Value in string : " << str << endl;
}