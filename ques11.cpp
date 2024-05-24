#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main(){
    int a,b;
   cout<<"enter the value of a :";
   cin>>a; 
   cout<<"enter the value of b :";
   cin>>b; 
   swap(a,b);
   cout<<"value of a after swapping:"<<a<<endl;
   cout<<" value of b after swapping:"<<b<<endl;



    return 0;
}