/*
Exception: A runtime error which the program can't handle.

two kinds of exceptions:

1. checked exception
2. unchecked exception

Exception Handling: It is a process of handling the exceptions that occured in the program so that the flow doesnt get interrupted.

1. try: it includes type of code which might throw an exception.
2. catch: used to catch the exception that was previously thrown.
3. throw: used to throw a runtime object of an exception explicitly.

*/

#include<iostream>
using namespace std;

float division(int x, int y) {
    if(y == 0) throw "Attempted to divide by zero!";
    return x/y;
}

int main() {
    cout << "Before Exception" << endl;

    try {
        cout << division(12, 0) << endl;
    } catch(const char* e) {
        cout << e << endl;
    }

    cout << "After Exception" << endl;

    return 0;
}