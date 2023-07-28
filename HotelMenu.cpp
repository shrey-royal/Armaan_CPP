/*
Hotel Menu Program

This program will display a menu of items that can be ordered from a hotel room service. The user will be able to select items from the menu and the total cost of the order will be displayed. The user will be able to order as many items as they want until they are finished. The program will then display the total cost of the order.

in Breakast option we will give 3 options
1. Eggs
2. Pancakes
3. Bacon

in Lunch option we will give 3 options
1. Sandwich
2. Soup
3. Salad

in Dinner option we will give 3 options
1. Steak
2. Chicken
3. Pasta

in Dessert option we will give 3 options
1. Ice Cream
2. Cake
3. Pie

in Drink option we will give 3 options
1. Water
2. Soda
3. Juice
4. Wine



*/

#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int choice;
    double total = 0;
    double price;

    while(1){
        //to clear the screen 
        system("cls");  
        cout << "Welcome to the Hotel Menu Program" << endl;
        cout << "Please select an option from the menu" << endl;
        cout << "1. Breakfast" << endl;
        cout << "2. Lunch" << endl;
        cout << "3. Dinner" << endl;
        cout << "4. Dessert" << endl;
        cout << "5. Drink" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1: 
                system("cls");  //to clear the screen
                cout << "Breakfast Menu" << endl;
                cout << "1. Eggs - $2.99" << endl;
                cout << "2. Pancakes - $3.99" << endl;
                cout << "3. Bacon - $4.99" << endl;
                cout << "Enter your choice: ";
                cin >> choice;
                switch(choice){
                    case 1: 
                        total += 2.99;
                        break;
                    case 2: 
                        total += 3.99;
                        break;
                    case 3: 
                        total += 4.99;
                        break;
                    default:
                        cout << "Invalid choice" << endl;
                        break;
                }
                break;

            case 2:
                system("cls");
                cout << "Lunch Menu" << endl;
                cout << "1. Sandwich - $5.99" << endl;
                cout << "2. Soup - $4.99" << endl;
                cout << "3. Salad - $3.99" << endl;
                cout << "Enter your choice: ";
                cin >> choice;
                switch(choice){
                    case 1: 
                        total += 5.99;
                        break;
                    case 2: 
                        total += 4.99;
                        break;
                    case 3: 
                        total += 3.99;
                        break;
                    default:
                        cout << "Invalid choice" << endl;
                        break;
                }
                break;

            case 3: 
                system("cls");
                cout << "Dinner Menu" << endl;
                cout << "1. Steak - $9.99" << endl;
                cout << "2. Chicken - $8.99" << endl;
                cout << "3. Pasta - $7.99" << endl;
                cout << "Enter your choice: ";
                cin >> choice;
                switch(choice){
                    case 1: 
                        total += 9.99;
                        break;
                    case 2: 
                        total += 8.99;
                        break;
                    case 3: 
                        total += 7.99;
                        break;
                    default:
                        cout << "Invalid choice" << endl;
                        break;
                }
                break;

            case 4:
                system("cls");
                cout << "Dessert Menu" << endl;
                cout << "1. Ice Cream - $2.99" << endl;
                cout << "2. Cake - $3.99" << endl;
                cout << "3. Pie - $4.99" << endl;
                cout << "Enter your choice: ";
                cin >> choice;
                switch(choice){
                    case 1: 
                        total += 2.99;
                        break;
                    case 2: 
                        total += 3.99;
                        break;
                    case 3: 
                        total += 4.99;
                        break;
                    default:
                        cout << "Invalid choice" << endl;
                        break;
                }
                break;

            case 5: 
                system("cls");
                cout << "Drink Menu" << endl;
                cout << "1. Water - $0.99" << endl;
                cout << "2. Soda - $1.99" << endl;
                cout << "3. Juice - $2.99" << endl;
                cout << "4. Wine - $3.99" << endl;
                cout << "Enter your choice: ";
                cin >> choice;
                switch(choice){
                    case 1: 
                        total += 0.99;
                        break;
                    case 2: 
                        total += 1.99;
                        break;
                    case 3: 
                        total += 2.99;
                        break;
                    case 4: 
                        total += 3.99;
                        break;
                    default:
                        cout << "Invalid choice" << endl;
                        break;
                }
                break;
            
            case 6:
                system("cls");
                cout << "Thank you for using the Hotel Menu Program" << endl;
                cout << "Your total is: $" << total << endl;
                exit(0);    // exit the program
        }   // end of switch statement
    }   //end of while loop

    return 0;
}   // end of main function