#include<iostream>
using namespace std;
 
 int main()
 {
    int a,b,c;
    cout<<"enter the value of a :";
    cin>>a;
    cout<<"enter the value of b :";
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"the value of a after swapping"<<a<<endl;
    cout<<"the value of b after swapping"<<b<<endl;
    return 0;
 }