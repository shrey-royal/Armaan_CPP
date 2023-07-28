/*
Multi Dimensional Arrays:
------------------------

Multi Dimensional Arrays are arrays of arrays.

Syntax:
-------
datatype arrayname[size1][size2];   // 2 Dimensional Array

size1 = Number of rows
size2 = Number of columns

arr = {1, 2, 3, 4, 5, 6} // just rows

arr = {
    {1, 2, 3, 4, 5, 6},
    {7, 8, 9, 10, 11, 12},
    {13, 14, 15, 16, 17, 18},
    {19, 20, 21, 22, 23, 24},
    {25, 26, 27, 28, 29, 30}
    }; // 5 rows and 6 columns


Accessing Elements:

arr[0][0] = 1
*/

#include<iostream>
using namespace std;

int main() {
    // int arr[5][6] = {
    //     {1, 2, 3, 4, 5, 6},
    //     {7, 8, 9, 10, 11, 12},
    //     {13, 14, 15, 16, 17, 18},
    //     {19, 20, 21, 22, 23, 24},
    //     {25, 26, 27, 28, 29, 30}
    // };

    int arr[3][3];

    
    for(int i = 0; i < 3; i++) {    // responsible for rows
        for(int j = 0; j < 3; j++) {    // responsible for columns
            cout << "Enter the value of arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }


    for(int i = 0; i < 3; i++) {    // responsible for rows
        for(int j = 0; j < 3; j++) {    // responsible for columns
            cout << arr[i][j] << ", ";
        }
        cout << endl;
    }


    return 0;
}


// now you have to perform arithmetic operations on the array elements. (+, -, *, /)