#include <iostream>
using namespace std;

int main()
{
    int choice;
    float amount;

    // Fixed conversion rates (approx values)
    const float INR_TO_USD = 0.012;
    const float USD_TO_INR = 83.0;
    const float INR_TO_EUR = 0.011;
    const float EUR_TO_INR = 90.0;

    do
    {
        cout << "\n===== Currency Converter Menu =====" << endl;
        cout << "1. INR to USD" << endl;
        cout << "2. USD to INR" << endl;
        cout << "3. INR to EUR" << endl;
        cout << "4. EUR to INR" << endl;
        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter amount in INR: ";
            cin >> amount;
            cout << "USD = " << amount * INR_TO_USD << endl;
            break;

        case 2:
            cout << "Enter amount in USD: ";
            cin >> amount;
            cout << "INR = " << amount * USD_TO_INR << endl;
            break;

        case 3:
            cout << "Enter amount in INR: ";
            cin >> amount;
            cout << "EUR = " << amount * INR_TO_EUR << endl;
            break;

        case 4:
            cout << "Enter amount in EUR: ";
            cin >> amount;
            cout << "INR = " << amount * EUR_TO_INR << endl;
            break;

        case 5:
            cout << "Exiting program..." << endl;
            break;

        default:
            cout << "Invalid choice! Try again." << endl;
        }

    } while (choice != 5);

    return 0;
}