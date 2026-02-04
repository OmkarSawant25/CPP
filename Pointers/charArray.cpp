#include <iostream>
using namespace std;

int main()
{
    // Example 1
    // char ch[10] = "babbar";
    // char *c = ch;

    // cout << ch << endl;    // babbar
    // cout << &ch << endl;   // address of ch[0]
    // cout << ch[0] << endl; // b
    // cout << &c << endl;    // address of pointer
    // cout << *c << endl;    // b
    // cout << c << endl;     // babbar

    // Example 2
    // char name[10] = "SherBano";
    // char *cptr = &name[0];

    // cout << name << endl;        // SherBano
    // cout << &name << endl;       // address of array
    // cout << *(name + 3) << endl; // r
    // cout << cptr << endl;        // SherBano
    // cout << &cptr << endl;       // address of cptr
    // cout << *(cptr + 3) << endl; // r
    // cout << cptr + 2 << endl;    // erBano
    // cout << *cptr << endl;       // s
    // cout << cptr + 8 << endl;    // segmentation fault

    // Example 3 Special Case
    char ch = 'k';
    char *cptr = &ch;
    cout << cptr << endl;
}