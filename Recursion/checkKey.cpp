#include <iostream>
#include <limits.h>
using namespace std;

// bool checkKey(string str, int i, int n, char key)
// {
//     // base case
//     if (i >= n)
//         return false;

//     if (str[i] == key)
//         return true;

//     // Recursive relation
//     return checkKey(str, i + 1, n, key);
// }

// By reference
// bool checkKey(string &str, int i, int &n, char &key)
// {
//     // base case
//     if (i >= n)
//         return false;

//     if (str[i] == key)
//         return true;

//     // Recursive relation
//     return checkKey(str, i + 1, n, key);
// }

int checkKey(string &str, int i, int &n, char &key)
{
    // base case
    if (i >= n)
        return -1;

    if (str[i] == key)
        return i;

    // Recursive relation
    return checkKey(str, i + 1, n, key);
}

int main()
{
    string str = "OmkarAshokSawant";
    int n = str.length();

    char key = 't';

    int i = 0;

    // bool ans = checkKey(str, i, n, key);
    int ans = checkKey(str, i, n, key);

    cout << "Answer is " << ans << endl;
}