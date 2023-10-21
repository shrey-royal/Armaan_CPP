#include<iostream>
using namespace std;

class GrandFather {
protected:
    string name = "GrandFather";
    long int property = 1000; //in billions (dollars)

public:
    void display() {
        cout << "Name: " << name << endl;
        cout << "Property: " << property << endl;
    }
};

class Father {
protected:
    string name = "Father";
    long int property = 1000;  //in millions (dollars)

public:

    void getsProperty() {
        cout << "Father is getting Property from GrandFather" << endl;
        property += 100;
    }

    void spend() {
        cout << "Father Spending" << endl;
        property -= 100;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Property: " << property << endl;
    }
};

class ME : public Father, public GrandFather {
public:
    void spend() {
        cout << "I am spending money" << endl;
        Father::property -= 100;
    }
};

int main() {

    ME s;

    s.GrandFather::display();
    s.getsProperty();
    s.Father::display();
    s.spend();
    s.Father::display();


    return 0;
}
/*
Ambiguity Errors: These errors occur when we try to access the data members of the base class using the object of the derived class. and the data member is present in both the base classes.
*/