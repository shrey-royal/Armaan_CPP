#include<iostream>
#include<string>
using namespace std;

class Student {
    // private:
    int roll;
    string name;

    public:
        Student(int r, string n) {
            roll = r;
            name = n;
        }
        void display() {
            cout << "Roll No.: " << roll << endl;
            cout << "Name: " << name << endl;
        }
};

int main() {
    Student s1(101, "Riya");
    Student s2(102, "Armaan");
    
    s1.display();
    s2.display();

    return 0;
}

/*
In Parametrized Constructor, we pass the values of the parameters while creating the object. then the constructor initializes the values of data members with the passed values.

Tasks:

1. **Library Book Management System:**
   Create a class for representing books in a library. The constructor should take parameters such as title, author, and ISBN. Implement methods for displaying book details and updating book information.

2. **Employee Information:**
   Design a class to store employee details such as name, employee ID, and salary. Implement methods for displaying employee information and updating salary.

3. **Geometric Shapes:**
   Define a class hierarchy for geometric shapes like circles and rectangles. Create constructors to initialize these shapes with appropriate attributes like dimensions and coordinates. Implement methods to calculate area and perimeter for each shape.

4. **Bank Account Management:**
   Develop a class to manage bank accounts, including attributes like account number, account holder name, and balance. Implement methods for depositing, withdrawing, and displaying balance.

5. **Student Record:**
   Design a class to represent student records, including attributes like name, roll number, and grades. Implement methods for calculating GPA and displaying student information.

6. **Car Rental System:**
   Create a class for managing car rentals, including details like car model, rental duration, and rental cost. Implement methods for calculating total cost and displaying rental information.

7. **Online Shopping Cart:**
   Develop a class to model an online shopping cart. Implement methods for adding items, calculating total cost, and displaying cart contents.

8. **Address Book:**
   Design a class to represent contacts in an address book. Implement methods for updating contact details and displaying contact information.

9. **Recipe Management:**
   Create a class for storing recipes, including details like recipe name, ingredients, and instructions. Implement methods for adding ingredients, displaying the recipe, and updating instructions.

10. **Flight Reservation System:**
    Develop a class for managing flight reservations. Include attributes like passenger name, flight number, and seat assignment. Implement methods for assigning seats, displaying reservation details, and updating passenger information.

*/