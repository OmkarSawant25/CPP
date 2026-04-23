#include <bits/stdc++.h>

using namespace std;

class GFG
{
    public:
    virtual string output() = 0;
};

class Child : public GFG
{
    public:
    string output()
    {
        return "Omkar Ashok Sawant";
    }
};

int main()
{
    GFG *ptr;
    Child obj;

    ptr = &obj;
    cout << ptr->output() << endl;
}