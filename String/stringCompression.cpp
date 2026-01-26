#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int compress(vector<char> &chars)
{
    int index = 0;
    int count = 1;
    char prev = chars[0];

    for (int i = 1; i < chars.size(); i++)
    {
        if (chars[i] == prev)
        {
            count++;
        }
        else
        {
            chars[index++] = prev;

            if (count > 1)
            {
                int start = index;
                while (count)
                {
                    chars[index++] = (count % 10) + '0';
                    count /= 10;
                }
                reverse(chars.begin() + start, chars.begin() + index);
            }

            prev = chars[i];
            count = 1;
        }
    }

    // handle last character group
    chars[index++] = prev;

    if (count > 1)
    {
        int start = index;
        while (count)
        {
            chars[index++] = (count % 10) + '0';
            count /= 10;
        }
        reverse(chars.begin() + start, chars.begin() + index);
    }

    return index;
}

int main()
{
    int n;
    cin >> n;

    vector<char> chars(n);
    for (int i = 0; i < n; i++)
        cin >> chars[i];

    int newLength = compress(chars);

    for (int i = 0; i < newLength; i++)
        cout << chars[i] << " ";

    cout << endl;
    return 0;
}
