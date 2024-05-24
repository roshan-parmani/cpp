#include <iostream>
using namespace std;

// Base class 1
class Base1 {
public:
    void display1() {
        cout << "This is Base1 class" << endl;
    }
};

// Base class 2
class Base2 {
public:
    void display2() {
        cout << "This is Base2 class" << endl;
    }
};

// Derived class inheriting from Base1 and Base2
class Derived : public Base1, public Base2 {
public:
    void displayDerived() {
        cout << "This is Derived class" << endl;
    }
};

int main() {
    Derived obj;

    // Accessing members of Base1 using Derived object
    obj.display1();

    // Accessing members of Base2 using Derived object
    obj.display2();

    // Accessing members of Derived class
    obj.displayDerived();

    return 0;
}
