#include<iostream>
using namespace std;
class student{
    private:
    int roll_no,marks1,marks2,marks3;
    float percentage;
    public:
    void read(){
    cout<<"Enter the roll number of student";
    cin>>roll_no;
    cout<<"enter marks of three subject";
    cin>>marks1>>marks2>>marks3;
    }
    void calculate(){
        percentage=(marks1+marks2+marks3)/3.0;
    }
    void display(){
        cout<<"percentage is :"<<percentage<<"%";
    }
};
int main(){
     student obj;
     obj.read();
     obj.calculate();
     obj.display();

    return 0;
}