#include <iostream>
using namespace std;

//method to scan multi-dimensional array
void ScanArray(int arr[3][3]) {
    int i, j;
    
    cout << "Enter the elements of the array: " << endl;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            cout << "\nEnter the element at index [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }
}

//method to print multi-dimensional array
void PrintArray(int arr[3][3]) {
    int i, j;
    system("cls");
    
    cout << "\nThe elements of the array are: " << endl;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            cout << arr[i][j] << ", ";
        }
        cout << endl;
    }
}

//method to print multi-dimensional array in reverse
void PrintArrayReverse(int arr[3][3]) {
    int i, j;
    
    cout << "\nThe elements of the array are: " << endl;
    for(i = 2; i >= 0; i--) {
        for(j = 2; j >= 0; j--) {
            cout << arr[i][j] << ", ";
        }
        cout << endl;
    }
}

//method to insert an element in multi-dimensional array
void InsertArray(int arr[3][3]) {
    int i, j, element, row, col;

    cout << "\nThe elements of the array are: " << endl;
    PrintArray(arr);
    
    cout << "\nEnter the element to be inserted: ";
    cin >> element;
    
    cout << "\nEnter the row and column index: ";
    cin >> row >> col;
    
    arr[row][col] = element;

    cout << "\nThe elements of the array after updating the values are: " << endl;
    PrintArray(arr);
}

//method to delete an element in multi-dimensional array
void DeleteArray(int arr[3][3]) {
    int i, j, row, col;

    cout << "\nThe elements of the array are: " << endl;
    PrintArray(arr);
    
    cout << "\nEnter the row and column index: ";
    cin >> row >> col;
    
    arr[row][col] = 0;  //or arr[row][col] = NULL;  //or arr[row][col] = '\0';

    cout << "\nThe elements of the array after updating the values are: " << endl;
    PrintArray(arr);
}

//method to search an element in multi-dimensional array
void SearchArray(int arr[3][3], int key) {
    int i, j, flag = 0;
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(arr[i][j] == key) {
                flag = 1;
                break;
            }
        }
    }
    
    if(flag == 1) {
        cout << "\nThe element " << key << " is present in the array at index [" << i << "][" << j << "]" << endl;
    } else {
        cout << "\nThe element " << key << " is not present in the array" << endl;
    }
}

//method to sort an array in ascending order
void sortArray(int arr[3][3]) {
    int i, j, k, l, tmp;

    for (i = 0; i < 3; i++) {   // this loop is for columns
        for (j = 0; j < 3; j++) {   // this loop is for rows
            tmp = arr[i][j];
            l = j + 1;  //l = 0;
            for (k = i; k < 3; k++) {   // this loop is for rows
                while (l < 3) {
                    /* swapping the data */
                    if (tmp < arr[k][l]) {
                        tmp = arr[k][l];
                        arr[k][l] = arr[i][j];
                        arr[i][j] = tmp;
                    }
                    l++;
                }
                l = 0;
            }
        }
    }

    cout << "\nThe elements of the array after sorting in ascending order are: " << endl;
    PrintArray(arr);
}

//method to find occurence of an element in multi-dimensional array
void findOccurence(int arr[3][3], int key) {
    int i, j, count = 0;
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(arr[i][j] == key) {
                count++;
            }
        }
    }
    
    cout << "\nThe element " << key << " is present " << count << " times in the array" << endl;
}

//method to find maximum element in multi-dimensional array
void findMax(int arr[3][3]) {
    int i, j, max = arr[0][0];
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    
    cout << "\nThe maximum element in the array is: " << max << endl;
}

//method to find minimum element in multi-dimensional array
void findMin(int arr[3][3]) {
    int i, j, min = arr[0][0];
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(arr[i][j] < min) {
                min = arr[i][j];
            }
        }
    }
    
    cout << "\nThe minimum element in the array is: " << min << endl;
}

//method to find second maximum element in multi-dimensional array
void findSecondMax(int arr[3][3]) {
    int i, j, max = arr[0][0], secondMax = arr[0][0];
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(arr[i][j] > max) {
                secondMax = max;
                max = arr[i][j];
            }
        }
    }
    
    cout << "\nThe second maximum element in the array is: " << secondMax << endl;
}

//method to find second minimum element in multi-dimensional array
void findSecondMin(int arr[3][3]) {
    int i, j, min = arr[0][0], secondMin = arr[0][0];
    
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(arr[i][j] < min) {
                secondMin = min;
                min = arr[i][j];
            }
        }
    }
    
    cout << "\nThe second minimum element in the array is: " << secondMin << endl;
}




int main() {
    int arr[3][3];// = {{4, 5, 6}, {1, 2, 3}, {7, 8, 9}};
    
    // cout << "Enter number of rows, columns: ";
    // cin >> row >> col;
    
    ScanArray(arr);
    PrintArray(arr);

    //searching an element in the array
    // int key;
    // cout << "\nEnter the element to be searched: ";
    // cin >> key;
    // SearchArray(arr, key);

    //sorting an array in ascending order
    // sortArray(arr);

    //sorting an array in descending order

    // InsertArray(arr);

    // DeleteArray(arr);

    //finding occurence of an element in the array
    // int key;
    // cout << "\nEnter the element to be searched: ";
    // cin >> key;
    // findOccurence(arr, key);

    //finding maximum element in the array
    // findMax(arr);

    //finding minimum element in the array
    // findMin(arr);

    //finding second maximum element in the array
    findSecondMax(arr);

    //finding second minimum element in the array
    findSecondMin(arr);


    
    return 0;
}

/*
Task:

You have to make a switch case of the following operations and call the respective methods...

*/

/*

Basic Operations on Multi-dimensional Arrays
--------------------------------------------

1. Traversing (Printing) -> forward or backward
2. Insertion
3. Deletion
4. Searching
5. Sorting
6. Finding Occurence
7. Finding Maximum
8. Finding Minimum
9. Finding Sum - cw/hw
10. Finding Average - cw/hw
11. Finding Second Maximum
12. Finding Second Minimum
*/