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


class Liger : public Dog, public Lion {
    public:
        void hunt() {
            cout << "Hunting..." << endl;
        }
};

int main() {

    Liger l;
    l.Dog::eat();
    l.Lion::sleep();
    l.bark();
    l.roar();
    l.hunt();

    return 0;
}