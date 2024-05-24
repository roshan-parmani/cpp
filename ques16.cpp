#include<iostream>
using namespace std;
class si{
    private:
    int principle_amount,rate,time,simple_interest;
    public:
    si(float roi){
     rate=roi;
    }
    void read(){
        cout<<"Enter the principle amount :";
        cin>>principle_amount;
        cout<<"Enter the time in years :";
        cin>>time;
    }
void calculate(){
    simple_interest=(principle_amount*rate*time)/100;
}
void display(){
    cout<<"simple interest is :"<<simple_interest;
}
};
int main(){
    si obj(8.0);
    obj.read();
    obj.calculate();
    obj.display();


    return 0;
}