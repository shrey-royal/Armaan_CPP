#include<iostream>
using namespace std;

class ArithmeticException : public exception {
    const char* str;
public:
    ArithmeticException(const char* str) {
        this->str = str;
    }

    const char* what() const throw() {
        return  this->str;
    } 
};

float division(int x, int y) {
    if(y == 0) throw ArithmeticException("Attempted to divide by zero!");
    else return x/y;
}

int main() {
    cout << "Before Exception" << endl;

    try {
        cout << division(12, 0) << endl;
    } catch(const exception& e) {
        cout << e.what() << endl;
    }

    cout << "After Exception" << endl;

    return 0;
}