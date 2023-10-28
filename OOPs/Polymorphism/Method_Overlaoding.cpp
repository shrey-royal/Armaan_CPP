#include<iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    double add(double a, double b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator calc;

    cout << calc.add(5, 10) << endl;
    cout << calc.add(3.5, 2.7) << endl;
    cout << calc.add(5, 10, 15) << endl;

}

/*
Method Overloading: using same name for different methods

Method Overloading:

1. Basic Calculator Methods: Create a calculator class with overloaded methods for addition and subtraction, allowing them to accept two integers as well as two floating-point numbers.

2. Temperature Converter: Design a temperature conversion class with overloaded methods to convert temperatures between Celsius and Fahrenheit, accepting different data types as input.

3. String Manipulation: Develop a string manipulation class with overloaded methods to concatenate two strings, reverse a string, and count the occurrences of a specific character within a string.

4. Simple Math Operations: Build a MathOperations class with overloaded methods for basic math operations (addition, subtraction, multiplication, division) that can work with integers and floating-point numbers.

5. Print Overloading: Create a Printer class with overloaded methods to print messages to the console. The methods should accept strings, integers, and floating-point numbers as arguments.

Constructor Overloading:

6. Person Class Constructors: Define a Person class with overloaded constructors to initialize objects with just a name or both name and age.

7. Book Constructor: Create a Book class with overloaded constructors to set the book's title, author, and publication year with different combinations of parameters.

8. Employee Class Constructors: Design an Employee class with overloaded constructors to initialize employees with just a name or both name and salary.

9. Simple Bank Account Initialization: Implement a BankAccount class with overloaded constructors to handle account creation with different initial deposit amounts.

10. Geometric Shape Constructors: Develop a GeometryShape class with overloaded constructors to create geometric shapes with varying attributes such as shape type, dimensions, and color.

*/