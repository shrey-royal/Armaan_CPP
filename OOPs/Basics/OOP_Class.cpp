#include<iostream>
using namespace std;

class Sample {
    //attributes
    public: //access specifier
        int a; //attribute
        int b; //attribute
        int c; //attribute

    //methods
    void scan() { //method
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
        cout << "Enter c: ";
        cin >> c;
    }

    void display() { //method
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
        cout << "c: " << c << endl;
    }
};

int main() {
    // Sample s; //object

    // s.a = 10;
    // s.b = 20;
    // s.c = 30;

    // cout << "a: " << s.a << endl;
    // cout << "b: " << s.b << endl;
    // cout << "c: " << s.c << endl;

    // s.scan();
    // s.display();

    cout << "\nEnter the number of samples: ";
    int n;
    cin >> n;

    Sample s[n];

    for(int i=0; i<n; i++) {
        cout << "\nSample " << i+1 << endl;
        s[i].scan();
    }
    system("cls");  //clear screen

    cout << "\nDisplaying the samples: " << endl;
    for(int i=0; i<n; i++) {
        cout << "\nSample " << i+1 << endl;
        s[i].display();
    }

    return 0;
}

/*
Access Specifiers: it defines the access scope of the attributes and methods of a class.
    public: accessible from anywhere
    private: accessible only from within the class
    protected: accessible from within the class and derived class

    default access specifier is private
*/