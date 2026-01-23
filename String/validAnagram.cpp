#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// bool isAnagram(string s, string t)
// {
//     if (s.length() != t.length())
//         return false;

//     sort(s.begin(), s.end());
//     sort(t.begin(), t.end());

//     return (s == t) ? true : false;
// }

bool isAnagram(string s, string t)
{
    int freqTable[256] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        freqTable[s[i]]++;
    }
    for (int i = 0; i < t.size(); i++)
    {
        freqTable[t[i]]--;
    }
    for (int i = 0; i < 256; i++)
    {
        if (freqTable[i] != 0)
            return false;
    }
    return true;
}

int main()
{
    string s, t;
    cin >> s >> t;

    if (isAnagram(s, t))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
