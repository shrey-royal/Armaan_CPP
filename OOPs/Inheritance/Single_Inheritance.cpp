#include<iostream>
using namespace std;

class Parent {
    string name;
    int age;
    
public:
    Parent(string name, int age) : name(name), age(age) {};    

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Child : public Parent {
    string school;  //instance variable
    int grade;

public:
    Child(string name, int age, string school, int grade) : Parent(name, age) {
        this->school = school;
        this->grade = grade;
    }

    void display() {
        Parent::display();
        cout << "School: " << school << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Child c("Armaan", 17, "High School", 12);
    c.display();
    
    return 0;
}

/*
Employee Class

Attributes (public):
    id
    name
    age
    salary
    department

Display Class:

Methods:
    display()
    incrementSalary()
    changeDepartment()
    changeName()
    changeAge()
    changeSalary()

*/