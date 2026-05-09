#include <iostream>
using namespace std;

class Demo
{
private:
    int num;

public:
    // Default Constructor
    Demo()
    {
        num = 0;
        cout << "Default Constructor Called" << endl;
        cout << "Value of num = " << num << endl;
    }

    // Parameterized Constructor
    Demo(int x)
    {
        num = x;
        cout << "Parameterized Constructor Called" << endl;
        cout << "Value of num = " << num << endl;
    }

    // Copy Constructor
    Demo(const Demo &d)
    {
        num = d.num;
        cout << "Copy Constructor Called" << endl;
        cout << "Copied Value of num = " << num << endl;
    }

    // Overloaded Constructor
    Demo(int x, int y)
    {
        num = x + y;
        cout << "Overloaded Constructor Called" << endl;
        cout << "Sum = " << num << endl;
    }
};

int main()
{
    // Default Constructor
    Demo d1;

    cout << endl;

    // Parameterized Constructor
    Demo d2(10);

    cout << endl;

    // Copy Constructor
    Demo d3(d2);

    cout << endl;

    // Overloaded Constructor
    Demo d4(20, 30);

    return 0;
}
