#include<iostream>
using namespace std;

class Test {
private:
    int num;
public:
    Test() {
        num = 10;
    }

    Test(int num) {
        this->num = num;
    }

    void operator ++() {
        num+=2;
    }

    void operator -(Test t) {
        cout << "overload (-) : " << this->num - t.num << endl;
    }

    void print() {
        cout << "The count is " << num << endl;
    }
};

int main() {
    Test t(18);
    ++t;    //calling of a function "void operator ++()" is same as "t.operator ++()"
    t.print();

    Test t1(10), t2(5);
    t1 - t2;    //calling of a function "void operator -(Test t)" is same as "t1.operator -(t2)"

    return 0;
}