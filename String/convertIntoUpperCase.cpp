#include <iostream>
#include <string.h>
using namespace std;

void convertIntoUpperCase(char *name)
{
    int n = strlen(name);
    for (int i = 0; i < n; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
            name[i] = name[i] - 'a' + 'A';
    }
}
int main()
{
    char name[50];
    cout << "Enter the sentence " << endl;
    cin >> name;
    convertIntoUpperCase(name);
    cout << name << endl;
}