#include <iostream>
#include <string.h>
using namespace std;

void convertIntoLowerCase(char *name)
{
    int n = strlen(name);
    for (int i = 0; i < n; i++)
    {
        name[i] = name[i] - 'A' + 'a';
    }
}
int main()
{
    char name[50];
    cout << "Enter the sentence " << endl;
    cin >> name;
    convertIntoLowerCase(name);
    cout << name << endl;
}