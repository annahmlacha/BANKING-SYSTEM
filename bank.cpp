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