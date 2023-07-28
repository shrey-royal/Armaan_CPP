/*
Q. WHat is a Switch case?
A. Switch case is a statement that allows a variable to be tested for equality against a list of values. Each value is called a case, and the variable being switched on is checked for each switch case.

Here flow of control will be managed by user himself.

user will be asked to enter a number and based on the number entered, the program will execute the corresponding case.

user will have number of choice to choose from. then the program will execute the corresponding case.

syntax:- 
switch(expression){
    case constant-expression:
        statement(s);
        break;
    case constant-expression:
        statement(s);
        break;
    // you can have any number of case statements
    default: // optional
        statement(s);
}


Q. What is the difference between if-else and switch case?
A. The difference between if-else and switch case is that if-else is used to execute a block of code if a condition is true. If the condition is false, another block of code can be executed. Switch case is used to execute a block of code among many alternatives.


#example 1:- 

choice 1
choice 2
choice 3
choice 4
select choice: 2


switch(choice){
    case 1:
        cout<<"You entered 1";
        break;
    case 2:
        cout<<"You entered 2";
        break;
    case 3:
        cout<<"You entered 3";
        break;
    case 4:
        cout<<"You entered 4";
        break;
    default:    // if none of the above cases are true, then default case will be executed.
        cout<<"You entered something else";
}

user's choice matches with case 2, so the corresponding case will be executed.

in switch case usually we use break statement to break the switch case. if we don't use break statement, then the program will execute all the cases after the matching case.


*/

#include <iostream>
using namespace std;

int main(){
    int a, b;
    char choice;
    
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    cout<<"1. Addition press '+'"<<endl;
    cout<<"2. Subtraction press '-'"<<endl;
    cout<<"3. Multiplication press '*'"<<endl;
    cout<<"4. Division press '/'"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;

    switch(choice){
        case '+':
            cout << "\nAddition of " << a << " and " << b << " will be " << a+b;
            break;
        case '-':
            cout << "\nSubtraction of " << a << " and " << b << " will be " << a-b;
            break;
        case '*':
            cout << "\nMultiplication of " << a << " and " << b << " will be " << a*b;
            break;
        case '/':
            cout << "\nDivision of " << a << " and " << b << " will be " << a/b;
            break;
        default:
            cout << "\nInvalid choice";
    }
    return 0;
}
/*
Q. WAP in c, make a calculator using switch case. it will have 10 functions.
-> Next topic Hotel Menu using switch case.
*/