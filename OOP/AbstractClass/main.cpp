#include <iostream>
#include "bird.h"
using namespace std;

void birddoesSomething(Bird *bird)
{
    bird->eat();
    bird->fly();
    bird->eat();
    bird->fly();
    bird->eat();
}

int main()
{
    // Runtime Polymorphism
    Bird *bird1 = new pigeon();
    birddoesSomething(bird1);
    delete bird1;

    cout << "------------------\n";

    Bird *bird2 = new eagle();
    birddoesSomething(bird2);
    delete bird2;

    return 0;
}