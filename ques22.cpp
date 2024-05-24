#include<iostream>
using namespace std;
class circle{
    private:
    float r,area,circumference,pi;
    public:
    circle(){
        pi=3.14;
    }
    void read(){
        cout<<"enter radius of circle :";
        cin>>r;
    }
    void calarea(){
        area=pi*r*r;
    }
    void calcircum(){
        circumference=2*pi*r;
    }
    

 void disp(){
    cout<<"area of circle is :"<<area<<endl;
    cout<<"circum of circle :"<<circumference<<endl;
    
 }
friend void avg(circle obj);

};
void avg(circle obj)
{
    cout<<"average of area and circumference :";
    cout<<(obj.area+obj.circumference)/2.0;
}
int main(){
    circle obj;
    obj.read();
    obj.calarea();
    obj.calcircum();
    obj.disp();
    avg(obj);
    return 0;
}