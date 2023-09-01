#include<iostream>
using namespace std;

class Employee {
    int id;
    string name;
    float salary;

public:
    Employee(int id, string name, float salary) {
        this->id = id;
        this->name = name;
        this->salary = salary;
    }

    void display() {
        cout << id << " " << name << " " << salary << endl;
    }
};

int main() {
    Employee e1 = Employee(101, "Sonu", 50000);
    Employee e2 = Employee(102, "Monu", 60000);
    e1.display();
    e2.display();
    return 0;
}

/*
This Pointer in cpp:

> this is a keyword in C++ that refers to the current instance of the class.
> There can be three main usage of this keyword in C++.

1. It can be used to pass the current object as a parameter to another method.
2. It can be used to refer current class instance variable.
3. It can be used to declare indexers.


TASSSK:

1. "Create a class 'Employee' to represent an employee in a company. Each employee has a unique ID and salary. Implement a member function 'compareSalary(Employee* other)' that takes another employee object as a parameter and uses the 'this' pointer to compare the salary of the current employee with the other employee."

2. "Design a class 'Car' to model different cars owned by individuals. Each car has a unique license plate number and a fuel level. Implement a member function 'refuel(double liters)' that takes the amount of fuel to be added and uses the 'this' pointer to update the fuel level of the current car."

3. "Develop a class 'BankCustomer' to represent a customer's account in a bank. Each customer has a name, account number, and current balance. Write a member function 'withdraw(double amount)' that takes an amount to be withdrawn and uses the 'this' pointer to deduct the specified amount from the customer's balance."

4. "Create a class 'Book' to represent a book in a library. Each book has a title, author, and availability status. Implement a member function 'borrowBook()' that uses the 'this' pointer to mark the current book as borrowed when a library user borrows it."

5. "Design a class 'MobilePhone' to model a mobile phone owned by a person. Each phone has a unique phone number and a contact list. Write a member function 'addContact(string name, string number)' that takes a name and phone number as parameters and uses the 'this' pointer to add the contact to the current phone's contact list."

Problem Statement:
Implement a C++ function to recursively find the largest prime palindrome within a given range [L, R]. The function should take two integer inputs, L and R (1 ≤ L ≤ R ≤ 10^6), and return the largest prime palindrome within the specified range. You are not allowed to use any external libraries or pre-built functions for prime checking or palindrome testing. Your solution should utilize recursion to efficiently search for the largest prime palindrome within the given range.


*/