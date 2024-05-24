#include<iostream>
using namespace std;

class bcaA{
   public:
   void display1(){
    cout<<"here all a sec student of bca "<<endl;
   }
};
class bcaB{
    public:
    void display2(){
        cout<<"here all b sec student of bca "<<endl;
    }
};
class both:public bcaA ,public bcaB{
    public:
    void displayboth(){
        cout<<"here both bcaA sec and bcaB sec for seminar "<<endl;
    }
};
int main(){
    both obj;
    obj.display1();
    obj.display2();
    obj.displayboth();
    return 0;
}