/*
Functions are a way to group a set of statements together to perform a specific task.
A function is a block of code which only runs when it is called.
You can pass data, known as parameters, into a function.
A function can return data as a result.

4 types of functions:

1. no argument, no return value
2. no argument, return value
3. argument, no return value
4. argument, return value

syntax of basic function:

return_type function_name (parameter list) {
    body of the function
}

*/
/*
#include <iostream>
using namespace std;

// function declaration
void printMessage();

int main() {
    // function call
    printMessage();
    return 0;
}

// function definition
void printMessage() {
    cout << "Hello World!" << endl;
}
*/

// #include<iostream>
// using namespace std;

// void sample_fn(){       // function declaration -> definition
//     cout << "Hello World!" << endl;
// }

// int main(){
//     sample_fn();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// // 1. no argument, no return value
// void addition(){
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;
//     cout << "Sum: " << a+b << endl;
// }

// // 2. no argument, return value
// int subtraction(){
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;
//     return a-b;
// }

// // 3. argument, no return value
// void multiplication(int a, int b){  //formal arguments
//     cout << "Product: " << a*b << endl;
// }

// // 4. argument, return value
// int division(int a, int b){
//     return a/b;
// }

// int main(){
//     addition();
//     cout << "Difference: " << subtraction() << endl;
//     multiplication(10, 20); //actual arguments
//     cout << "Quotient: " << division(100, 10) << endl;
//     return 0;
// }

/*
1. WAP in c to check whether a number is even or odd using functions.
2. WAP in c to find the factorial of a number using functions.
ex:- 
5! = 5*4*3*2*1 = 120
6! = 6*5*4*3*2*1 = 720
4! = 4*3*2*1 = 24

3. WAP in c to find the sum of digits of a number using functions.
4. WAP in c to find the reverse of a number using functions.
5. WAP in c to find the sum of first n natural numbers using functions.
6. WAP in c to find the sum of first n even numbers using functions. 

*/

// 3. WAP in c to find the sum of digits of a number using functions.

#include<iostream>
using namespace std;

int sum_of_digits(int n){   //123
    int sum = 0;
    while(n>0){    //123>0, 12>0, 1>0, 0>0
        sum += n%10;    //sum = 0+3, sum = 3+2, sum = 5+1
        n /= 10;    //n = 12, n = 1, n = 0
    }
    return sum;
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Sum of digits: " << sum_of_digits(n) << endl;
    return 0;
}