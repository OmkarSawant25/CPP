#include <iostream>
#include <vector>
using namespace std;

// Method 1 Using Left to Right
void lastOccLTR(string &s, char x, int i, int &ans)
{
    if (i >= s.size())
    {
        return;
    }
    if (s[i] == x)
        ans = i;

    lastOccLTR(s, x, i + 1, ans);
}

// Method 2 Using Right to Left
void lastOccRTL(string &s, char x, int i, int &ans)
{
    if (i < 0)
    {
        return;
    }
    if (s[i] == x)
    {
        ans = i; 
        return;
    }

    lastOccRTL(s, x, i - 1, ans);
}

int main()
{
    string str;
    cin >> str;

    char x;
    cin >> x;

    int ans = -1;
    // lastOccLTR(str, x, 0, ans);
    lastOccRTL(str, x, str.size() - 1, ans);

    cout << "Last Occurence of char " << x << " in " << str << " is at " << ans << endl;
}