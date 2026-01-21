#include <iostream>
#include <string.h>
using namespace std;

int getLength(char name[])
{
    int i = 0;
    int length = 0;
    while (name[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}

void reverseCharArray(char *name)
{
    int i = 0;
    int n = getLength(name);
    int j = n - 1;

    while (i <= j)
    {
        swap(name[i], name[j]);
        i++;
        j--;
    }
}
int main()
{
    char name[50];
    cout << "Enter your name " << endl;
    cin >> name;

    cout << "Length of " << name << " is " << getLength(name) << endl;
    cout << "Length of " << name << " is " << strlen(name) << endl;
    cout << "Before reversing " << name << endl;
    reverseCharArray(name);
    cout << "After reversing " << name << endl;
}