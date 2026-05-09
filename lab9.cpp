#include <iostream>
using namespace std;

// Base Class
class Animal
{
public:
    // Virtual function
    virtual void sound()
    {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived Class 1
class Dog : public Animal
{
public:
    // Function overriding
    void sound()
    {
        cout << "Dog barks" << endl;
    }
};

// Derived Class 2
class Cat : public Animal
{
public:
    // Function overriding
    void sound()
    {
        cout << "Cat meows" << endl;
    }
};

int main()
{
    // Base class pointer
    Animal *ptr;

    Dog d;
    Cat c;

    // Runtime Polymorphism
    ptr = &d;
    ptr->sound();

    ptr = &c;
    ptr->sound();

    return 0;
}