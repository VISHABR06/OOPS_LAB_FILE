#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    string name;

    // Static data member
    static int count;

public:
    // Function to input data
    void setData(int r, string n)
    {
        rollNo = r;
        name = n;
        count++;   // Increment object count
    }

    // Function to display data
    void display()
    {
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }

    // Static member function
    static void showCount()
    {
        cout << "Total Students: " << count << endl;
    }
};

// Definition of static data member
int Student::count = 0;

int main()
{
    Student s1, s2, s3;

    s1.setData(1, "Rahul");
    s2.setData(2, "Aman");
    s3.setData(3, "Vishal");

    cout << "Student 1 Details:" << endl;
    s1.display();

    cout << "\nStudent 2 Details:" << endl;
    s2.display();

    cout << "\nStudent 3 Details:" << endl;
    s3.display();

    // Calling static member function
    Student::showCount();

    return 0;
}