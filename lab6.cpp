#include <iostream>
using namespace std;

class Interest
{
private:
    float principal, rate, time, SI;

public:
    // Constructor for dynamic initialization
    Interest(float p, float r, float t)
    {
        principal = p;
        rate = r;
        time = t;

        SI = (principal * rate * time) / 100;
    }

    // Function to display result
    void display()
    {
        cout << "Principal Amount : " << principal << endl;
        cout << "Rate of Interest : " << rate << "%" << endl;
        cout << "Time Period      : " << time << " years" << endl;
        cout << "Simple Interest  : " << SI << endl;
    }
};

int main()
{
    float p, r, t;

    cout << "Enter Principal Amount: ";
    cin >> p;

    cout << "Enter Rate of Interest: ";
    cin >> r;

    cout << "Enter Time Period: ";
    cin >> t;

    // Dynamic initialization of object
    Interest obj(p, r, t);

    cout << "\n--- Interest Details ---" << endl;
    obj.display();

    return 0;
}