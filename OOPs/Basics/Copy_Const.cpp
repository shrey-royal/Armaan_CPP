#include<iostream>
using namespace std;

class Point {
    private:
        int x, y;
    public:
        Point(int x1, int y1) {
            x = x1;
            y = y1;
        }
        
        // Copy constructor
        Point(const Point &old_obj) {
            x = old_obj.x;
            y = old_obj.y;
        }

        int getX()  {
            return x;
        }
        
        int getY()  {
            return y;
        }
};

int main() {
    Point p1(10, 15); // Normal constructor is called here
    Point p2 = p1; // Copy constructor is called here

    // Let us access values assigned by constructors
    cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();
    cout << "\np2.x = " << p2.getX() << ", p2.y = " << p2.getY();

    return 0;
}


/*
Copy Constructor: A copy constructor is a member function which initializes an object using another object of the same class. A copy constructor has the following general function prototype:

ClassName (const ClassName &old_obj);

Here, old_obj is an object of old class and old_obj is passed as a const reference. The constructor can access all the data members of the class and initialize them using old_obj.

Copy constructor is called when a new object is created from an existing object, as a copy of the existing object. Assignment operator is called when an already initialized object is assigned a new value from another existing object.

Tasks: 

Problem 1: **Copy Constructor for a Simple Class**
Create a class called `Person` with attributes `name` and `age`. Implement a copy constructor to copy the contents of one `Person` object to another.

Problem 2: **Copy Constructor for Student Class**
Create a class called `Student` with attributes `studentID`, `name`, and `gpa`. Implement a copy constructor to copy the details of one `Student` object to another.

Problem 3: **Copy Constructor for Book Class**
Design a class `Book` with attributes `title`, `author`, and `publicationYear`. Implement a copy constructor that copies the information from one `Book` object to another.

Problem 4: **Copy Constructor for BankAccount Class**
Develop a class `BankAccount` with attributes `accountNumber`, `accountHolder`, and `balance`. Implement a copy constructor to duplicate the data from one `BankAccount` object to another.

Problem 5: **Copy Constructor for Employee Class**
Build a class `Employee` with attributes `employeeID`, `name`, and `salary`. Implement a copy constructor to correctly copy the details of one `Employee` object to another.

*/