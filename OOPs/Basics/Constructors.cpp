#include<iostream>
using namespace std;


class WeddingPlanner {
    private:
    // string nameofBride = "Riya";
    // string nameofGroom = "Armaan";
    // double budget = 10000000;
    // int noOfGuests = 100;
    // string venue = "Space";
    // string menu[10] = {"Cavier", "Wagyu Beef", "Oysters", "Foie Gras", "Truffles", "Kobe Beef", "Gold", "Champagne", "Saffron", "White Truffles"};

    // We can also initialize the values in the constructor
    string nameofBride;
    string nameofGroom;
    double budget;
    int noOfGuests;
    string venue;
    string menu[10] = {"Cavier", "Wagyu Beef", "Oysters", "Foie Gras", "Truffles", "Kobe Beef", "Gold", "Champagne", "Saffron", "White Truffles"};

    public:
    // WeddingPlanner() {
    //     cout << "Welcome to the wedding of " << nameofBride << " and " << nameofGroom << endl;
    //     // cout << "The budget for the wedding is " << budget << endl;
    //     // The budget is in millions so we will print it in millions
    //     cout << "The budget for the wedding is " << budget/1000000 << " millions" << endl;
        
    //     cout << "The number of guests are " << noOfGuests << endl;
    //     cout << "The venue is " << venue << endl;
    //     cout << "The menu is " << endl;
    //     for(int i = 0; i < 10; i++) {
    //         cout << menu[i] << endl;
    //     }
    // }

    // We can also initialize the values in the constructor
    WeddingPlanner() {
        nameofBride = "Riya";
        nameofGroom = "Armaan";
        budget = 10000000;
        noOfGuests = 100;
        venue = "Space";
    }

    void display() {
        cout << "Welcome to the wedding of " << nameofBride << " and " << nameofGroom << endl;
        cout << "The budget for the wedding is " << budget/1000000 << " millions" << endl;
        cout << "The number of guests are " << noOfGuests << endl;
        cout << "The venue is " << venue << endl;
        cout << "The menu is " << endl;
        for(int i = 0; i < 10; i++) {
            cout << menu[i] << ", ";
        }
        cout << endl;
    }
};

int main() {    
    WeddingPlanner wedding;
    wedding.display();


    return 0;
}

/*
Constructor is a special member function of a class that is executed whenever we create new objects of that class.

Why we have constructors?
    1. To initialize the objects of a class.
    2. To allocate memory to objects.

Rules for creating constructors:
    1. It should be declared in the public section of the class.
    2. They are automatically invoked whenever the object is created.
    3. They cannot return values and do not have return types.
    4. It can have default arguments.
    5. We cannot refer to their address.

*/