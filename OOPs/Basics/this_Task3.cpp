// "Develop a class BankCustomer to represent a customers account in a bank. Each customer has a name, account number, and current balance. Write a member function withdraw(double amount) that takes an amount to be withdrawn and uses the this pointer to deduct the specified amount from the customers balance."

#include<iostream>
#include<string>
using namespace std;

class BankCustomer {
private:
    string name;
    int accountNumber;
    double balance;

public:
    BankCustomer(string name, int accountNumber, double balance) {
        this->name = name;
        this->accountNumber = accountNumber;
        this->balance = balance;
    }

    //Member function to withdraw money
    void withdraw(double amount) {
        if(amount <= 0) {
            cout << "Invalid withdrawal amount, Please enter a positive amount." << endl;
        } else if(amount > balance) {
            cout << "Insufficient funds. You cannot withdraw more than your current balance." << endl;
        } else {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful. New balance: $" << balance << endl;
        }
    }

    //Member function to get the current balance
    double getBalance() {
        return balance;
    }

    //Member function to display the details of the customer
    void displayInfo() {
        cout << "Customer Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: $" << balance << endl;
        cout << endl;
    }
};

int main() {
    BankCustomer customer("Armaan", 123456, 10000);

    customer.displayInfo();
    customer.withdraw(5000);

    cout << "Get Balance: " << customer.getBalance();
}