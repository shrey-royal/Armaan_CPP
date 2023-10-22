#include<iostream>
using namespace std;

class GrandParent {
    protected:
    int a;
    public:
        GrandParent() {
            cout << "GrandParent Constructor" << endl;
            a = 10;
        }
        ~GrandParent() {
            cout << "GrandParent Destructor" << endl;
        }
};

class Parent : public GrandParent {
    public:
        Parent() {
            cout << "Parent Constructor" << endl;
            a = 20;
        }
        ~Parent() {
            cout << "Parent Destructor" << endl;
        }
};

class Child : public Parent {
    public:
        Child() {
            cout << "Child Constructor" << endl;
            a = 30;
        }
        ~Child() {
            cout << "Child Destructor" << endl;
        }

        void getA() {
            cout << a << endl;
        }
};


int main() {

    Child c;
    c.getA();

    return 0;
}