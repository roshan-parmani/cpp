#include<iostream>
using namespace std;
class circle{
   private:
   float pi,r,area;
   static float t_area;
   public:
   circle(){
    pi=3.14;
   }
   void read();
   void cal();
   void disp();

  // static member function
  static void t_area_disp(){
    cout<<"tota area"<<t_area;
  }


};
    float circle :: t_area;
    void circle :: read(){
     cout<<"enter the radius of circle";
     cin>>r;

}
void circle :: cal(){
    area=pi*r*r;
    t_area=t_area+area;
}
void circle :: disp(){
    cout<<"area of circle"<<area;
}

int main(){
   circle obj1,obj2,obj3;
   obj1.read();
   obj2.read();
   obj3.read();
        obj1.cal();
        obj2.cal();
        obj3.cal();
            obj1.disp();
            obj2.disp();
            obj3.disp();
  circle :: t_area_disp();          
    return 0;
}