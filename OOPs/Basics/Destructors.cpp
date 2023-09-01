#include<iostream>
using namespace std;

class Test {
    public:
        Test() {
            cout << "Constructor" << endl;
        }
        ~Test() {
            cout << "Destructor" << endl;
        }
};


int main() {
    Test t1;
    Test t2;

    cout << "Main" << endl;
    return 0;
}

/*
Constructors are used to initialize the object’s data members.
Destructors are used to clean up the object’s data members.

Constructors are invoked automatically when the object is created.
Destructors are invoked automatically when the object is destroyed.
*/