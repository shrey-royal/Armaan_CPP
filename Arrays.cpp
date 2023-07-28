/*
i have a list of students and their grades in a class
i have given the work of storing the data and then printing it

using arrays i can store same type of data into a single variable


array index:    
    0   1   2   3   4   5   6   7   8   9
    |   |   |   |   |   |   |   |   |   |
    s   t   u   d   e   n   t   s   1   0

arrays index starts from 0

syntax:
datatype arrayname[size];

declare an array of 5 students
string students[5]; //declaration of array
string students[5] = {"john", "jane", "joe", "jim", "jill"}; //declaration-initialization of array

to access the elements of an array
students[0] = "john";

to print the elements of an array
cout << students[0] << endl;

for loop to print all the elements of an array
for(int i = 0; i < 5; i++) {
    cout << students[i] << endl;
}



*/


#include<iostream>
#include<string>    // for string class
using namespace std;

int main() {
    // string students[5] = {"john", "jane", "joe", "jim", "jill"};
    // int grades[5] = {90, 80, 70, 60, 50};

    int size;
    cout << "Enter the number of students: ";
    cin >> size;

    string students[size];
    int grades[size];

    // get the students and their grades
    for(int i = 0; i < size; i++) {
        cout << "Enter student " << i << ": ";
        cin >> students[i];
        cout << "Enter grades of " << students[i] << ": ";
        cin >> grades[i];
    }


    // print the students and their grades
    for(int i = 0; i < size; i++) {
        cout << students[i] << " got " << grades[i] << endl;
    }
    
    return 0;
}

/*
Tasks:
1. get the number of students from the user, get the students and their grades, print the students and their grades

2. make an array of eMployees which will store the name, age, salary of the employees, ask the user to enter the number of employees, get the details of the employees, print the details of the employees.

3. Make an array of numbers and ask user for a choice, ask the user to enter the number of numbers, get the numbers from the user, print the numbers based on the choice of the user 
    1. print even numbers 
    2. print odd numbers 
    3. print all numbers
*/