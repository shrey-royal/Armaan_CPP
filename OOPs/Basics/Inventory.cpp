#include<iostream>
#include<cstring>   //for strcpy() function
using namespace std;

class Inventory {
    private:
        int itemID;
        char itemName[25];
        float itemPrice;
        int itemQuantity;
    public:
        void readData();
        void displayData();
        void updateQuantity(int);
        void updatePrice(float);
        void updateName(char[]);
        void updateID(int);
        int getID();
        char* getName();
        float getPrice();
        int getQuantity();
};

void Inventory::readData() {    //:: is scope resolution operator
    cout << "Enter item ID: ";
    cin >> itemID;
    cout << "Enter item name: ";
    cin >> itemName;
    cout << "Enter item price: ";
    cin >> itemPrice;
    cout << "Enter item quantity: ";
    cin >> itemQuantity;
}

void Inventory::displayData() {
    cout << "Item ID: " << itemID << endl;
    cout << "Item name: " << itemName << endl;
    cout << "Item price: " << itemPrice << endl;
    cout << "Item quantity: " << itemQuantity << endl;
}

void Inventory::updateQuantity(int quantity) {
    itemQuantity = quantity;
}

void Inventory::updatePrice(float price) {
    itemPrice = price;
}

void Inventory::updateName(char name[]) {
    strcpy(itemName, name);
}

void Inventory::updateID(int id) {
    itemID = id;
}

int Inventory::getID() {
    return itemID;
}

char* Inventory::getName() {
    return itemName;
}

float Inventory::getPrice() {
    return itemPrice;
}

int Inventory::getQuantity() {
    return itemQuantity;
}

class Demo {
    private:
        int a;
    public:
        void setA(int);
        int getA();
};

void Demo::setA(int x) {
    a = x;
}

int Demo::getA() {
    return a;
}

int main() {
    // Inventory item1;
    // item1.readData();
    // item1.displayData();
    // item1.updateQuantity(10);
    // item1.updatePrice(100);
    // item1.updateName("Item_1");
    // item1.updateID(1);
    // cout << "Item ID: " << item1.getID() << endl;
    // cout << "Item name: " << item1.getName() << endl;
    // cout << "Item price: " << item1.getPrice() << endl;
    // cout << "Item quantity: " << item1.getQuantity() << endl;

    Demo d[2];
    d[0].setA(10);
    cout << d[0].getA() << endl;

    d[1].setA(20);
    cout << d[1].getA() << endl;

    return 0;
}