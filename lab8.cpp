#include <iostream>
using namespace std;

// ---------------- SINGLE INHERITANCE ----------------
class A
{
public:
    void showA()
    {
        cout << "Single Inheritance - Class A" << endl;
    }
};

class B : public A
{
public:
    void showB()
    {
        cout << "Derived Class B" << endl;
    }
};

// ---------------- MULTIPLE INHERITANCE ----------------
class X
{
public:
    void showX()
    {
        cout << "Class X" << endl;
    }
};

class Y
{
public:
    void showY()
    {
        cout << "Class Y" << endl;
    }
};

class Z : public X, public Y
{
public:
    void showZ()
    {
        cout << "Multiple Inheritance - Class Z" << endl;
    }
};

// ---------------- MULTILEVEL INHERITANCE ----------------
class P
{
public:
    void showP()
    {
        cout << "Class P" << endl;
    }
};

class Q : public P
{
public:
    void showQ()
    {
        cout << "Class Q" << endl;
    }
};

class R : public Q
{
public:
    void showR()
    {
        cout << "Multilevel Inheritance - Class R" << endl;
    }
};

// ---------------- HIERARCHICAL INHERITANCE ----------------
class Parent
{
public:
    void display()
    {
        cout << "Parent Class" << endl;
    }
};

class Child1 : public Parent
{
public:
    void showChild1()
    {
        cout << "Child1 Class" << endl;
    }
};

class Child2 : public Parent
{
public:
    void showChild2()
    {
        cout << "Hierarchical Inheritance - Child2 Class" << endl;
    }
};

// ---------------- HYBRID INHERITANCE ----------------
class M
{
public:
    void showM()
    {
        cout << "Class M" << endl;
    }
};

class N : public M
{
public:
    void showN()
    {
        cout << "Class N" << endl;
    }
};

class O
{
public:
    void showO()
    {
        cout << "Class O" << endl;
    }
};

class Hybrid : public N, public O
{
public:
    void showHybrid()
    {
        cout << "Hybrid Inheritance Class" << endl;
    }
};

int main()
{
    // Single Inheritance
    B obj1;
    obj1.showA();
    obj1.showB();

    cout << endl;

    // Multiple Inheritance
    Z obj2;
    obj2.showX();
    obj2.showY();
    obj2.showZ();

    cout << endl;

    // Multilevel Inheritance
    R obj3;
    obj3.showP();
    obj3.showQ();
    obj3.showR();

    cout << endl;

    // Hierarchical Inheritance
    Child1 c1;
    c1.display();
    c1.showChild1();

    Child2 c2;
    c2.display();
    c2.showChild2();

    cout << endl;

    // Hybrid Inheritance
    Hybrid h;
    h.showM();
    h.showN();
    h.showO();
    h.showHybrid();

    return 0;
}