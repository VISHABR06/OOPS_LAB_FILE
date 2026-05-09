#include <iostream>
using namespace std;

// Function with default arguments
float simpleInterest(float p, float r = 5, float t = 2)
{
    return (p * r * t) / 100;
}

int main()
{
    float principal;

    cout << "Enter Principal Amount: ";
    cin >> principal;

    // Using default values of rate and time
    cout << "Simple Interest (default rate & time): "
         << simpleInterest(principal) << endl;

    // Providing rate only
    cout << "Simple Interest (rate = 10): "
         << simpleInterest(principal, 10) << endl;

    // Providing all arguments
    cout << "Simple Interest (rate = 10, time = 3): "
         << simpleInterest(principal, 10, 3) << endl;

    return 0;
}