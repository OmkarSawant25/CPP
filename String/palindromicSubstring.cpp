#include <iostream>
#include <string>

using namespace std;

int expandAroundIndex(string s, int right, int left)
{
    int count = 0;

    while (right >= 0 && left < s.length() && s[right] == s[left])
    {
        count++;
        right--;
        left++;
    }
    return count;
}

int countSubstrings(string s)
{
    int totalCount = 0;
    int n = s.length();

    for (int i = 0; i < n; i++)
    {
        // odd length palindromes
        totalCount += expandAroundIndex(s, i, i);

        // even length palindromes
        totalCount += expandAroundIndex(s, i, i + 1);
    }
    return totalCount;
}

int main()
{
    string s;
    cin >> s;

    cout << countSubstrings(s) << endl;

    return 0;
}
