#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

void checkKey(string &str, int i, int &n, char &key, vector<int> &ans)
{
    if (i >= n)
        return;

    if (str[i] == key)
    {
        ans.push_back(i);
    }

    checkKey(str, i + 1, n, key, ans);
}

int main()
{
    string str = "lovebabbar";
    int n = str.length();

    char key = 'b';

    int i = 0;
    vector<int> ans;

    checkKey(str, i, n, key, ans);

    cout << "Printing the answer " << endl;

    for (auto value : ans)
    {
        cout << value << " ";
    }

    cout << endl;
}