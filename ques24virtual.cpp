#include <iostream>
using namespace std;
class Animal {
public:
    virtual void makesound() {
        cout << "Animal makes a sound" << endl;
    }
};
class Dog : public Animal {
public:
    void makesound() {
        cout << "Dog barks" << endl;
    }
};
int main() {
    Animal *ptr;
    Dog obj;
    ptr=&obj;
    ptr->makesound();
  return 0;
}