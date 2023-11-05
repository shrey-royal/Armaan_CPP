#include<iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Animal Sound" << endl;
    }
};

class Dog : public Animal {
public:
    void makeSound() {
        cout << "Bark Bark" << endl;
    }
};

class Cat : public Animal {
public:
    void makeSound() {
        cout << "Meow Meow" << endl;
    }
};


int main() {
    Animal* animal;

    Dog dog;
    Cat cat;

    animal = &dog;
    animal->makeSound();

    animal = &cat;
    animal->makeSound();

    return 0;
}

/*
Polymorphism is made up of 2 words poly + morphism. poly means many and morphism means forms. So polymorphism means many forms.

Virtual Function is a function in base class which is overriden in derived class. It is used to achieve runtime polymorphism.

Late Binding: Binding of function call to its definition at runtime is called late binding.


Regular Function Call : In C++, when you call a function on an object, the compiler knows exactly which function to execute based on the object's type.

Virtual Functions: When you declare a function as "virtual" in the base class, it allows derived classes to provide their own implementation of that function. When you call the virtual function on a base class pointer or reference that points to a derived class object, the compiler determines the appropriate derived class function to call based on the actual object's type, not the pointer's type. This is called "dynamic binding" or "late binding."



*/