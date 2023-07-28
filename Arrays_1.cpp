/*
We will make a program in cpp that will take an array as input and will perform the following operations:

1. ScanArray() - This function will scan the array from the user.
2. PrintArray() - This function will print the array.
3. SearchArray() - This function will search an element in the array.
4. SortArray() - This function will sort the array in ascending order.
5. ReverseArray() - This function will reverse the array.
6. UpdateArray() - This function will update an element in the array.
7. FindOccurence() - This function will find the occurence of an element in the array.
8. FindMax() - This function will find the maximum element in the array.
9. FindMin() - This function will find the minimum element in the array.
*/

#include<iostream>
using namespace std;

// Fucntion to scan the array
void ScanArray(int arr[], int size) {
    int i;
    
    cout << "Enter the elements of the array: " << endl;
    for(i = 0; i < size; i++) {
        cout << "\nEnter the element at index " << i << ": ";
        cin >> arr[i];
    }
}

// Function to print the array
void PrintArray(int arr[], int size) {
    int i;
    
    cout << "\nThe elements of the array are: ";
    for(i = 0; i < size; i++) {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

// Function to search an element in the array
void SearchArray(int arr[], int size, int element) {
    int i, flag = 0;

    for(i = 0; i < size; i++) {
        if(arr[i] == element) {
            flag = 1;
            break;
        }
    }

    if(flag == 1) {
        cout << "\nThe element " << element << " is present in the array at index " << i << endl;
    } else {
        cout << "\nThe element " << element << " is not present in the array" << endl;
    }
}

// Function to sort the array - Bubble Sort
void SortArray(int arr[], int size) {
    int i, j, temp;

    for(i = 0; i < size; i++) {
        for(j = i + 1; j < size; j++) {
            if(arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void ReverseArray(int arr[], int size) {
    int i, j, temp;

    for(i = 0, j = size - 1; i < j; i++, j--) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    // for(i=0; i<size; i++) {
    //     for(j=i+1; j<size; j++) {
    //         temp = arr[i];
    //         arr[i] = arr[j];
    //         arr[j] = temp;
    //     }
    // }
}


int main() {
    int size;
    system("cls");
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];

    while(1) {
        cout << "\n1. ScanArray" << endl;
        cout << "2. PrintArray" << endl;
        cout << "3. SearchArray" << endl;
        cout << "4. SortArray" << endl;
        cout << "5. ReverseArray" << endl;
        cout << "6. UpdateArray" << endl;
        cout << "7. FindOccurence" << endl;
        cout << "8. FindMax" << endl;
        cout << "9. FindMin" << endl;
        cout << "10. Exit" << endl;
        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                system("cls");
                ScanArray(arr, size);
            case 2:
                system("cls");
                PrintArray(arr, size);
                break;
            case 3:
                system("cls");
                int element;
                cout << "Enter the element to be searched: ";
                cin >> element;
                SearchArray(arr, size, element);
                break;
            case 4:
                system("cls");
                cout << "The array before sorting is: " << endl;
                PrintArray(arr, size);
                SortArray(arr, size);
                cout << "The array after sorting is: " << endl;
                PrintArray(arr, size);
                break;
            case 5:
                system("cls");
                cout << "The array before reversing is: " << endl;
                PrintArray(arr, size);
                ReverseArray(arr, size);    // Reversing the array
                cout << "The array after reversing is: " << endl;
                PrintArray(arr, size);
                break;
            case 6:
                system("cls");
                break;
            case 7:
                system("cls");
                break;
            case 8:
                system("cls");
                break;
            case 9:
                system("cls");
                break;
            case 10:
                exit(0);
                break;
            default:
                cout << "Invalid Choice" << endl;
        }// End of switch case
    }// End of while loop


    return 0;
}// End of main()