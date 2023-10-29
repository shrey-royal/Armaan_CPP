#include<iostream>
using namespace std;

class Shape {
public:
    void draw() {
        cout << "Drawing Shape" << endl;
    }

    double calculateArea() {
        return 0.0;
    }
};

class Rectangle : public Shape {
private:
    int length;
    int width;

public:
    Rectangle(int length, int width) {
        this->length = length;
        this->width = width;
    }

    void draw() {
        cout << "Drawing Rectangle" << endl;
    }

    double calculateArea() {
        return length * width;
    }
};

class Circle : public Shape {
private:
    int radius;

public:
    Circle(int radius) {
        this->radius = radius;
    }

    void draw() {
        cout << "Drawing Circle" << endl;
    }

    double calculateArea() {
        return 3.14 * radius * radius;
    }
};

int main() {
    Rectangle rectangle(10, 20);
    Circle circle(10);

    rectangle.draw();
    cout << "Area of Rectangle: " << rectangle.calculateArea() << endl;

    circle.draw();
    cout << "Area of Circle: " << circle.calculateArea() << endl;

    return 0;
}

/*
Method Overriding:

1. Library Management System: Build a library management system that allows users to add, search, and manage books in a library.
> Library Management System:

   Classes:
   - 'Library' class for managing the library itself.
   - 'Book' class for individual books with attributes like title, author, ISBN, etc.
   - 'Member' class for library members.

   Methods:
   - 'Library::addBook(Book book)' to add a new book to the library.
   - 'Library::removeBook(Book book)' to remove a book from the library.
   - 'Library::searchBook(string title)' to search for a book by its title.
   - 'Member::checkOutBook(Book book)' to allow a member to check out a book.
   - 'Member::returnBook(Book book)' to return a checked-out book.
   - 'Library::generateReport()' to generate a report of all books and their availability.

2. Student Grade Tracker: Create a program that manages student records and calculates their grades. It should allow adding students, entering their scores, and generating reports.

> Student Grade Tracker:

   Classes:
   - 'Student' class for managing student records.
   - 'Course' class to represent individual courses and their grades.

   Methods:
   - 'Student::addCourse(Course course)' to add a new course with grades for a student.
   - 'Student::calculateGPA()' to calculate the student's GPA.
   - 'Student::generateTranscript()' to create a transcript with all course details.
   - 'Student::displayDetails()' to display basic student information.



3. Employee Payroll System: Design a program for managing employee information, calculating salaries, and generating paychecks.

> Employee Payroll System:

   Classes:
   - 'Employee' class for managing employee information.
   - 'Payroll' class to calculate salaries and generate paychecks.

   Methods:
   - 'Employee::addEmployee(Employee employee)' to add a new employee to the system.
   - 'Employee::removeEmployee(Employee employee)' to remove an employee.
   - 'Payroll::calculateSalary(Employee employee)' to calculate the salary of an employee.
   - 'Payroll::generatePaycheck(Employee employee)' to generate a paycheck for an employee.
   - 'Payroll::generatePayrollReport()' to create a payroll report for all employees.

*/