/*
Static keyword or static modifier is used to create variables and functions that can be accessed without creating an object of the class.

> compiler allocates memory for static variables only once.

*/

#include<iostream>
#include<string>
using namespace std;

class Students {
public:
    string name;
    int age;
    int rollNo;
    static int totalStudents; // static variable

    Students() {}

    Students(string name, int age) {
        this->name = name;
        this->age = age;
        totalStudents++;
        this->rollNo = 10 + totalStudents;
    }

    void printStudentDetails() {
        cout << "Name: " << name << "\nAge: " << age << "\nRoll No: " << rollNo << endl << endl;
    }

    static int getTotalStudents() { // static function
        return totalStudents;
    }
};

// static variable initialization
int Students::totalStudents = 0;

int main() {
    // Students s1("Rahul", 20);
    // Students s2("Rohit", 21);
    // Students s3("Raj", 22);

    cout << "Enter the number of students: ";
    int n;
    cin >> n;

    Students s[n];  // array of objects

    string name;
    int age;
    for (int i = 0; i < n; i++) {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        s[i] = Students(name, age);
    }

    cout << "\n\n\n";

    cout << "Total Students: " << Students::totalStudents << endl << endl;
    cout << "Total Students: " << Students::getTotalStudents() << endl << endl;

    cout << "Student Details: " << endl;
    for (int i = 0; i < n; i++) {
        s[i].printStudentDetails();
    }
}

/*
Tasks:

1. Static Counter:
   Create a class called 'Counter' with a static member variable 'count' that keeps track of the number of instances of the class created. Implement a static method 'getCount' to return the current count. Demonstrate the usage of this class by creating multiple objects and accessing the count.

2. Static Math Utility:
   Implement a class 'MathUtils' with static methods for basic mathematical operations such as addition, subtraction, multiplication, and division. These methods should take two numbers as input and return the result. Create a program that uses these static methods for performing mathematical calculations.

3. Static Logger:
   Create a logging utility class called 'Logger' with a static method 'logMessage' that takes a message as input and logs it to a file. Ensure that only one instance of the log file is shared across all instances of the 'Logger' class. Demonstrate the usage of this logger in a multi-threaded environment.

4. Static Configuration:
   Develop a 'Configuration' class with a static member variable 'configData' that stores configuration settings as key-value pairs. Implement static methods to set and get configuration values. Ensure that the configuration data is shared among all instances of the class.

5. Static Singleton Pattern:
   Implement a Singleton design pattern using the 'static' keyword. Create a class called 'Singleton' with a private static instance variable and a static method 'getInstance' that returns the single instance of the class. Demonstrate how this Singleton pattern prevents multiple instances from being created.

Test Case Scenarios:

1. 'Static Counter Test Cases':
   - Create three 'Counter' objects.
   - Verify that the count returned by 'getCount' is equal to 3.
   - Create additional objects and check if the count increases accordingly.

2. 'Static Math Utility Test Cases':
   - Test addition, subtraction, multiplication, and division operations using various input values and verify the correctness of the results.
   - Ensure that the static methods in 'MathUtils' work correctly with both positive and negative numbers.

3. 'Static Logger Test Cases':
   - Log several messages using the 'Logger::logMessage' method.
   - Verify that the logged messages are correctly written to the log file.
   - Test the logger in a multi-threaded environment with concurrent log operations.

4. 'Static Configuration Test Cases':
   - Set and retrieve various configuration settings using the 'Configuration' class's static methods.
   - Ensure that the retrieved values match the values previously set.
   - Test edge cases, such as retrieving a configuration key that does not exist.

5. 'Static Singleton Pattern Test Cases':
   - Create multiple instances of the 'Singleton' class using 'getInstance'.
   - Verify that all instances refer to the same object (singleton pattern behavior).
   - Attempt to create instances of the 'Singleton' class using constructors (should not be possible due to the singleton pattern).


*/