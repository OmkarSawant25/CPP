#include <iostream>
#include <string.h>
using namespace std;

void replaceSpaces(char *name)
{
    int i = 0;
    int n = strlen(name);

    for(int i = 0; i < n; i++)
    {
        if(name[i] == ' ')
        {
            name[i] = '@';
        }
    }
}
int main()
{
    char name[50];
    cout << "Enter the sentence " << endl;
    cin.getline(name, 100);

    replaceSpaces(name);
    cout << "Printing Sentence " << endl << name << endl;

}