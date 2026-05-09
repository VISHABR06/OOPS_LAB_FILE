#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string name;
    float balance;

public:
    // Constructor
    BankAccount(int accNo, string n, float bal)
    {
        accountNumber = accNo;
        name = n;
        balance = bal;
    }

    // Deposit function
    void deposit(float amount)
    {
        balance += amount;
        cout << "Amount Deposited Successfully!" << endl;
    }

    // Withdraw function
    void withdraw(float amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal Successful!" << endl;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }

    // Display account details
    void display()
    {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    int accNo, choice;
    string name;
    float balance, amount;

    cout << "Enter Account Number: ";
    cin >> accNo;

    cout << "Enter Name: ";
    cin >> name;

    cout << "Enter Initial Balance: ";
    cin >> balance;

    BankAccount acc(accNo, name, balance);

    do
    {
        cout << "\n===== Bank Menu =====" << endl;
        cout << "1. Deposit Money" << endl;
        cout << "2. Withdraw Money" << endl;
        cout << "3. Display Account" << endl;
        cout << "4. Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            acc.deposit(amount);
            break;

        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            acc.withdraw(amount);
            break;

        case 3:
            acc.display();
            break;

        case 4:
            cout << "Thank you for using Bank System!" << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }

    } while (choice != 4);

    return 0;
}