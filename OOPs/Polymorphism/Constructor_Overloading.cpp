#include<iostream>
using namespace std;

class Student {
    int id;
    string name;
    int grade;
    
public:
    Student() {
        id = 0;
        name = "";
        grade = 0;
    }

    Student(int id, string name, int grade) {
        this->id = id;
        this->name = name;
        this->grade = grade;
    }

    Student(string name, int grade) {
        this->id = 0;
        this->name = name;
        this->grade = grade;
    }

    void display() {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() {
    Student s1(1, "Armaan", 12);
    s1.display();

    Student s2;
    s2.display();

    Student s3("Punit", 6);
    s3.display();


    return 0;
}