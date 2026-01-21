#include <iostream>
#include <string.h>
using namespace std;

bool checkPalindrome(char *name)
{
    int i = 0;
    int n = strlen(name);
    int j = n - 1;

    while (i <= j)
    {
        if (name[i] != name[j])
            return false;
        i++;
        j--;
    }
    return true;
}
int main()
{
    char name[50];
    cout << "Enter the sentence " << endl;
    cin >> name;

    cout << "Palindrome check : " << checkPalindrome(name) << endl;
}