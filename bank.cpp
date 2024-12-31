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
    }         cout << "Invalid withdrawal amount!" << endl;
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
}

  string name;
    int accountNum;
    double initialDeposit;

    
    
     // Welcome message
    cout << "Welcome to the Bank System!" << endl;

    
int main() {
    // Creating two bank accounts
    BankAccount account1("Alice", 1000.0);
    BankAccount account2("Bob", 500.0);

int choice;
    double amount;

    // Loop for user interaction
    while (true) {
        showMenu();
        cin >> choice;

         switch (choice) {
            case 1: // Deposit
                cout << "Enter deposit amount: $";
                cin >> amount;
                account1.deposit(amount);
                break;

                 case 2: // Withdraw
                cout << "Enter withdrawal amount: $";
                cin >> amount;
                account1.withdraw(amount);
                break;
