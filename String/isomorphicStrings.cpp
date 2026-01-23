#include <iostream>
#include <string>

using namespace std;

bool isIsomorphic(string s, string t)
{
    int hash[256] = {0};            // mapping from s -> t
    bool istCharsMapped[256] = {0}; // tracks mapped characters in t

    for (int i = 0; i < s.size(); i++)
    {
        if (hash[s[i]] == 0 && istCharsMapped[t[i]] == 0)
        {
            hash[s[i]] = t[i];
            istCharsMapped[t[i]] = true;
        }
    }

    for (int i = 0; i < s.size(); i++)
    {
        if ((char)hash[s[i]] != t[i])
            return false;
    }

    return true;
}

int main()
{
    string s, t;
    cin >> s >> t;

    if (isIsomorphic(s, t))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
