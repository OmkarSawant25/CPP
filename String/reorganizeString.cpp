#include <iostream>
#include <string>
#include <climits> // for INT_MIN

using namespace std;

string reorganizeString(string s)
{
    int hash[26] = {0};

    // count frequency
    for (int i = 0; i < s.size(); i++)
        hash[s[i] - 'a']++;

    // find the most frequent character
    char most_freq_char;
    int max_freq = INT_MIN;

    for (int i = 0; i < 26; i++)
    {
        if (hash[i] > max_freq)
        {
            max_freq = hash[i];
            most_freq_char = i + 'a';
        }
    }

    int index = 0;

    // place the most frequent character at even indices
    while (max_freq > 0 && index < s.size())
    {
        s[index] = most_freq_char;
        max_freq--;
        index += 2;
    }

    // if not all occurrences placed, it's impossible
    if (max_freq != 0)
        return "";

    hash[most_freq_char - 'a'] = 0;

    // place remaining characters
    for (int i = 0; i < 26; i++)
    {
        while (hash[i] > 0)
        {
            index = (index >= s.size()) ? 1 : index;
            s[index] = i + 'a';
            hash[i]--;
            index += 2;
        }
    }

    return s;
}

int main()
{
    string s;
    cin >> s;

    cout << reorganizeString(s) << endl;

    return 0;
}
