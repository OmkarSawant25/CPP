#include <iostream>
#include <string>

using namespace std;

int strStr(string haystack, string needle)
{
    int h = haystack.size();
    int n = needle.size();

    for (int i = 0; i <= h - n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (haystack[i + j] != needle[j])
                break;

            if (j == n - 1)
                return i;
        }
    }
    return -1;
}

int main()
{
    string haystack, needle;
    cin >> haystack >> needle;

    cout << strStr(haystack, needle) << endl;

    return 0;
}
