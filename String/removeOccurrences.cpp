#include <iostream>
#include <string>

using namespace std;

string removeOccurrences(string s, string part)
{
    size_t pos = s.find(part);

    while (pos != string::npos)
    {
        s.erase(pos, part.length());
        pos = s.find(part);
    }
    return s;
}

int main()
{
    string s, part;
    cin >> s >> part;

    cout << removeOccurrences(s, part) << endl;

    return 0;
}
