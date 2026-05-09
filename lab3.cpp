#include <iostream>
using namespace std;

// Function overloading for Sum
int calculate(int a, int b)
{
    return a + b;
}

int calculate(int a, int b, int c)
{
    return a + b + c;
}

// Function overloading for Area
float calculate(float radius)
{
    return 3.14 * radius * radius;   // Area of Circle
}

int calculate(int length, int breadth, bool area)
{
    return length * breadth;         // Area of Rectangle
}

// Function overloading for Volume
float calculate(float radius, float height)
{
    return 3.14 * radius * radius * height;   // Volume of Cylinder
}

int main()
{
    // Sum
    cout << "Sum of 2 numbers: "
         << calculate(10, 20) << endl;

    cout << "Sum of 3 numbers: "
         << calculate(10, 20, 30) << endl;

    // Area
    cout << "Area of Circle: "
         << calculate(5.0f) << endl;

    cout << "Area of Rectangle: "
         << calculate(10, 5, true) << endl;

    // Volume
    cout << "Volume of Cylinder: "
         << calculate(3.0f, 7.0f) << endl;

    return 0;
}
