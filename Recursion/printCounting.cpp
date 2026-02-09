#include <iostream>
using namespace std;

void printCounting(int n)
{
    // Base condition
    if (n == 0)
        return;

    // processing
    cout << n << " ";

    // Recursive relation
    printCounting(n - 1);
}

void printCountingHeadRecursion(int n)
{
    // Base condition
    if (n == 0)
        return;

    // Recursive relation
    printCountingHeadRecursion(n - 1);

    // processing
    cout << n << " ";
}

void printCountingTailRecursion(int n)
{
    // Base condition
    if (n == 0)
        return;

    // processing
    cout << n << " ";

    // Recursive relation
    printCountingTailRecursion(n - 1);
}

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    // printCounting(n);
    cout << "Head Recursion" << endl;
    printCountingHeadRecursion(n);
    cout << endl;

    cout << "Tail Recursion" << endl;
    printCountingTailRecursion(n);
    cout << endl;
}