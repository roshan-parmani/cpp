#include<iostream>


using namespace std;
class rectangle{
    float l,b,area;
    public:
    rectangle(float x,float y){
        l=x;
        b=y;
    
    }
    void fun()
    {
        area=l*b;
        cout<<"area of rectangle is :"<<area<<endl;
    }
};
int main()
{
    rectangle obj(2,3.5);
    
   obj.fun();
    return 0;
}