#include <iostream>
using namespace std;
class BankAccount {
private:
    double balance;

public:
    // Constructor to initialize the balance
    BankAccount(double initialBalance) {
        balance = initialBalance;
    }

    // Method to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
             cout << "Deposited $" << amount << " into the account.\n";
        } else {
             cout << "Invalid deposit amount.\n";
        }
    }

    // Method to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
             cout << "Withdrawn $" << amount << " from the account.\n";
        } else {
             cout << "Invalid withdrawal amount or insufficient balance.\n";
        }
    }

    // Method to check the account balance
    double getBalance() {
        return balance;
    }
};

int main() {
    // Create a BankAccount object with an initial balance of $1000
    BankAccount myAccount(1000.0);

    // Perform some transactions
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0);

    // Check the account balance
     cout << "Account Balance: $" << myAccount.getBalance() <<  endl;

    return 0;
}
