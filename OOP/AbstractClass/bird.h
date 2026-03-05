#ifndef BIRD_H
#define BIRD_H

#include <iostream>
using namespace std;

//  Abstract Base Class
class Bird
{
public:
    // Pure Virtual Functions
    virtual void eat() = 0;
    virtual void fly() = 0;

    // Virtual Destructor (Important)
    virtual ~Bird() {}
};

// Derived Class - Eagle
class eagle : public Bird
{
public:
    void eat()
    {
        cout << "Eagle is eating\n";
    }

    void fly() 
    {
        cout << "Eagle is flying\n";
    }
};

// Derived Class - Pigeon
class pigeon : public Bird
{
public:
    void eat() 
    {
        cout << "Pigeon is eating\n";
    }

    void fly()
    {
        cout << "Pigeon is flying\n";
    }
};

#endif