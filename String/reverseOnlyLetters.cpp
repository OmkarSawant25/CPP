#include <iostream>
#include <string>
#include <cctype>   // for isalpha
#include <utility>  // for swap

using namespace std;

string reverseOnlyLetters(string s)
{
    int i = 0;
    int j = s.length() - 1;

    while (i < j)
    {
        if (!isalpha(s[i]))
            i++;

        if (!isalpha(s[j]))
            j--;

        if (isalpha(s[i]) && isalpha(s[j]))
        {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }
    return s;
}

int main()
{
    string s;
    cin >> s;

    cout << reverseOnlyLetters(s) << endl;

    return 0;
}
