#include<iostream>
using namespace std;
class student{
    int rollno,m1,m2,m3;
    float p;
    public:
    void read(){
        cout<<"enter  roll no. of students : "<<endl;
        cin>>rollno;
        cout<<"enter the marks of  students: "<< endl;
        cin>>m1>>m2>>m3;

    }
    void cal(){
        p=(m1+m2+m3)/3;
    }
    void display(){
        cout<<"percentage  :  "<<p<<endl;
    }
};
int main(){
      student s1;
      s1.read();
      s1.cal();
      s1.display();


    return 0;
}
