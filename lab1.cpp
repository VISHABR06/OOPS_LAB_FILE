#include <iostream>
using namespace std;

// Inline functions
inline float add(float a, float b) {
    return a + b;
}

inline float subtract(float a, float b) {
    return a - b;
}

inline float multiply(float a, float b) {
    return a * b;
}

inline float divide(float a, float b) {
    if (b != 0)
        return a / b;
    else {
        cout << "Division by zero error!" << endl;
        return 0;
    }
}

int main() {
    float x, y;

    cout << "Enter two numbers: ";
    cin >> x >> y;

    cout << "Addition: " << add(x, y) << endl;
    cout << "Subtraction: " << subtract(x, y) << endl;
    cout << "Multiplication: " << multiply(x, y) << endl;
    cout << "Division: " << divide(x, y) << endl;

    return 0;
}g