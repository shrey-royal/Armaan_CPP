#include<iostream>
using namespace std;

class Shape {   //abstract class
public:
    virtual void draw() = 0;    //pure virtual function
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "drawing Rectangle..." << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "drawing Circle..." << endl;
    }
};

int main() {
    
    Shape *s;
    Rectangle rect;
    Circle cir;

    s = &rect;
    s->draw();  //the s will now work like rect

    s = &cir;
    s->draw();

    s = &rect;
    s->draw();


    return 0;
}

/*
Abstraction is the ability to hide unneccessary code and showing only functionality to the user.

Tasks:
1. Geometric Shapes Area Calculator
Create an abstract class 'Shape' with a pure virtual function 'calculateArea()'. Implement classes like 'Rectangle', 'Circle', and 'Triangle' inheriting from 'Shape' and provide specific implementations for calculating area. Use these classes to calculate and display the areas of various shapes.

2. Employee Management System
Design an abstract class 'Employee' with pure virtual functions like 'calculateSalary()' and 'displayDetails()'. Create subclasses 'Manager', 'Engineer', and 'Intern' inheriting from 'Employee' and implement these functions according to their roles. Use these classes to manage different types of employees within a company.

3. Vehicle Rental System
Develop an abstract class 'Vehicle' with virtual functions like 'calculateRent()', 'displayDetails()', and 'rentVehicle()'. Subclasses like 'Car', 'Motorcycle', and 'Truck' inherit from 'Vehicle' and implement these functions for their specific rental calculations and details.

*/