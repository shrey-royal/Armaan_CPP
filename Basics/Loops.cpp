/*
Loops are used to execute a block of code repeatedly until a certain condition is met.

There are three types of loops in C++:
1. for loop -   entry controlled loop
2. while loop   - entry controlled loop
3. do-while loop    - exit controlled loop

The syntax of a for loop is:
for (initialization; condition; increment/decrement) {
    // code block to be executed
}

The syntax of a while loop is:
initialization;
while (condition) {
    // code block to be executed
    increment/decrement;
}

The syntax of a do-while loop is:
initialization;
do {
    // code block to be executed
    increment/decrement;
} while (condition);

*/

#include <iostream>
using namespace std;

int main(){
/*
    int i = 0;

    // for loop
    for (i = 0; i < 5; i++) {   // initialization; condition; increment
        cout << i << endl;      // code block
    }

    cout << "\n\n";
    // while loop
    i = 0;                      // initialization
    while (i < 5) {             // condition
        cout << i << endl;      // code block
        i++;                    // increment
    }

    cout << "\n\n";
    // do-while loop
    i = 0;                      // initialization
    do {
        cout << i << endl;      // code block
        i++;                    // increment
    } while (i < 5);            // condition

*/

    int i;

    // output : 1 2 3 4 5
    // for (i = 1; i <= 5; i++) {
    //     cout << i << " ";
    // }

    // output : 5 4 3 2 1
    // for (i = 5; i >= 1; i--) {
    //     cout << i << " ";
    // }

    // output : 1 3 5 7 9
    // for (i = 1; i <= 9; i += 2) {
    //     cout << i << " ";
    // }

    // for(i=0; i<=10; i++){
    //     if(i%2==0)
    //         continue;
    //     else
    //         cout << i << " ";
    // }

    // output : 2 4 6 8 10
    // for (i = 2;i <= 10; i+=2) {
    //     cout << i << " ";
    // }

    // for (i = 1; i <= 10; i++) {
    //     if (i % 2 == 0)
    //         cout << i << " ";
    // }


}

/*

-> Make a cpp program that takes input from the user about the choices given below and perform the task accordingly.

ask starting number and ending number from the user and iterate loops accordingly.

1. Print start to end
2. Print end to start
3. Print odd numbers from start to end
4. Print even numbers from start to end

for the below tasks scan n from the user.

5. Print the sum of first n natural numbers
6. Print the sum of first n odd numbers
7. Print the sum of first n even numbers

-> ask the starting number and ending number from the user and print all the numbers between them.

*/