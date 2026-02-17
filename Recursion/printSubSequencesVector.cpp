#include <iostream>
#include <vector>
using namespace std;

void printSubsequences(string str, string output, int i, vector<string> &v)
{
    // Base case
    if (i >= str.length())
    {
        // cout << output << endl;
        v.push_back(output);
        return;
    }

    // exclude
    printSubsequences(str, output, i + 1, v);

    // include
    // below line is responsible for concantenation of output string ans ith character of str string
    output.push_back(str[i]);
    printSubsequences(str, output, i + 1, v);
}

int main()
{
    string str = "abc";
    string output = "";
    vector<string> v;

    int i = 0;
    printSubsequences(str, output, i, v);

    for (auto val : v)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << "Size of vector is : " << v.size() << endl;
}