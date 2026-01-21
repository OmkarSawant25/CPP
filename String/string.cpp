#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    // string str;
    // // cin >> str;
    // getline(cin, str);
    // cout << str << endl;

    // cout << "Length is " << str.length() << endl;
    // cout << "isEmpty " << str.empty() << endl;
    // str.push_back('Z');
    // cout << str << endl;
    // str.pop_back();
    // cout << str << endl;
    // cout << str.substr(0, 3) << endl;

    // Compare
    // string a = "Omkar";
    // string b = "OmkarZ";
    // if(a.compare(b) == 0)
    // {
    //     cout << "a and b are exactly same strings " << endl;
    // }
    // else
    // {
    //     cout << "a and b are not same strings " << endl;
    // }

    // Find
    // string sentence = "Hello Jee Kaise Ho Aap sab log";
    // string target = "log";

    // if (sentence.find(target) == string ::npos)
    // {
    //     cout << "Not Found" << endl;
    // }
    // else
    // {
    //     cout << "Found " << target << " at " << sentence.find(target) << endl;
    // }

    // Replace
    // string str = "This is my first message";
    // string word = "Babbar";
    // string word1 = "Second";

    // cout << str << endl;
    // // str.replace(0, 4, word);
    // str.replace(11, 5, word1);
    // cout << str << endl;

    // Erase
    string str = "ABCDEFGHIJKLMNOPQRST";
    str.erase(10, 10);
    cout << str << endl;
}