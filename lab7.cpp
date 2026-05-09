#include <iostream>
using namespace std;

class Number
{
private:
    int value;

public:
    // Constructor
    Number(int v = 0)
    {
        value = v;
    }

    // Overloading + operator
    Number operator +(Number n)
    {
        return Number(value + n.value);
    }

    // Overloading - operator
    Number operator -(Number n)
    {
        return Number(value - n.value);
    }

    // Overloading ++ operator (Pre-increment)
    Number operator ++()
    {
        ++value;
        return Number(value);
    }

    // Overloading == operator
    bool operator ==(Number n)
    {
        return (value == n.value);
    }

    // Overloading << operator
    friend ostream& operator <<(ostream &out, Number n);

};

// Definition of << operator
ostream& operator <<(ostream &out, Number n)
{
    out << n.value;
    return out;
}

int main()
{
    Number n1(20), n2(10), n3;

    // + operator
    n3 = n1 + n2;
    cout << "Addition: " << n3 << endl;

    // - operator
    n3 = n1 - n2;
    cout << "Subtraction: " << n3 << endl;

    // ++ operator
    ++n1;
    cout << "After Increment: " << n1 << endl;

    // == operator
    if (n1 == n2)
        cout << "Both numbers are Equal" << endl;
    else
        cout << "Both numbers are Not Equal" << endl;

    return 0;
}