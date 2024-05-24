#include<iostream>
using namespace std;
class circle{
    private :
    int r;
    float circumference,pi;
    public:
    circle(){
        pi=3.14;
    }
    void read(){
        cout<<"Enter Radius";
        cin>>r;
    }
    void calculate(){
        circumference=2*pi*r;
    }
    void display(){
        cout<<"circumference of circle is :"<<circumference;
    }
};
int main(){
    circle obj;
    obj.read();
    obj.calculate();
    obj.display();
return 0;
}