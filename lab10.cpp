#include <iostream>
using namespace std;

// Abstract Class
class Shape
{
public:
    // Pure Virtual Function
    virtual void area() = 0;
};

// Derived Class - Circle
class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    void area()
    {
        float a = 3.14 * radius * radius;

        cout << "Area of Circle = " << a << endl;
    }
};

// Derived Class - Rectangle
class Rectangle : public Shape
{
private:
    float length, breadth;

public:
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    void area()
    {
        float a = length * breadth;

        cout << "Area of Rectangle = " << a << endl;
    }
};

int main()
{
    // Base class pointer
    Shape *ptr;

    Circle c(5);
    Rectangle r(10, 4);

    // Runtime Polymorphism
    ptr = &c;
    ptr->area();

    ptr = &r;
    ptr->area();

    return 0;
}