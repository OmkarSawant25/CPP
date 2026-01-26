#include <iostream>
#include <string>
#include <climits> // for INT_MAX, INT_MIN
#include <cctype>  // for isdigit

using namespace std;

int myAtoi(string s)
{
    int num = 0;
    int i = 0;
    int sign = 1;

    // Skip leading spaces
    while (i < s.size() && s[i] == ' ')
        i++;

    // Check sign
    if (i < s.size() && (s[i] == '+' || s[i] == '-'))
    {
        sign = (s[i] == '+') ? 1 : -1;
        i++;
    }

    // Convert digits
    while (i < s.size() && isdigit(s[i]))
    {
        if (num > INT_MAX / 10 || (num == INT_MAX / 10 && s[i] > '7'))
            return (sign == 1) ? INT_MAX : INT_MIN;

        num = num * 10 + (s[i] - '0');
        i++;
    }

    return num * sign;
}

int main()
{
    string s;
    getline(cin, s);

    cout << myAtoi(s) << endl;

    return 0;
}
