#include<iostream>
using namespace std;

class Animal {
    public:
        void eat() {
            cout << "Eating..." << endl;
        }

        void sleep() {
            cout << "Sleeping..." << endl;
        }
};

class Dog : public Animal {
    public:
        void bark() {
            cout << "Barking..." << endl;
        }
};

class Lion : public Animal {
    public:
        void roar() {
            cout << "Roaring..." << endl;
        }
};

int main() {

    Dog d;
    d.eat();
    d.sleep();
    d.bark();

    Lion l;
    l.eat();
    l.sleep();
    l.roar();

    return 0;
}