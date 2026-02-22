#include <iostream>
#include <string>
using namespace std;

void removeOCCRE(string &s, string &part)
{
    int found = s.find(part);

    if (found != string::npos)
    {
        string left_part = s.substr(0, found);
        string right_part = s.substr(found + part.size(), s.size());

        s = left_part + right_part;

        removeOCCRE(s, part); // recursive call
    }
    else
    {
        return;
    }
}

string removeOccurrences(string s, string part)
{
    removeOCCRE(s, part);
    return s;
}

int main()
{
    string s, part;

    cout << "Enter main string: ";
    cin >> s;

    cout << "Enter part to remove: ";
    cin >> part;

    string result = removeOccurrences(s, part);

    cout << "After removing occurrences: " << result << endl;

    return 0;
}