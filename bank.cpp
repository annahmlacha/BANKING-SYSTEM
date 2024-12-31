#include <iostream>
#include <string>
using namespace std;

// Class for the Bank Account
class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:
    // Constructor to initialize the account with an account holder name, number, and initial balance
    BankAccount(string name, int accountNum, double initialBalance) {
        accountHolder = name;
        accountNumber = accountNum;
        balance = initialBalance;
    }
        // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: $" << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }
     // Function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrew: $" << amount << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }
    // Function to check balance
    void checkBalance() {
        cout << "Account Balance: $" << balance << endl;
    }
    // Function to display account details
    void displayAccountDetails() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Balance: $" << balance << endl;
    }
};

int main() {
    string name;
    int accountNum;
    double initialDeposit;


     // Welcome message
    cout << "Welcome to the Bank System!" << endl;

     // Input account details
    cout << "Enter account holder's name: ";
    getline(cin, name);
    cout << "Enter account number: ";
    cin >> accountNum;
    cout << "Enter initial deposit amount: ";
    cin >> initialDeposit;
