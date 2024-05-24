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
    void makesound() override {
        cout << "Dog barks" << endl;
    }
};
int main() {
    Animal animalObj;
    Dog dogObj;
    animalObj.makesound();
    dogObj.makesound();
  return 0;
}
