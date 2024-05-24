#include<iostream>
using namespace std;
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int a,b;
    cout<<"enter the value of a and b";
    cin>>a>>b;
    swap(a,b);
    cout<<"the value of a and b after swapping"<<a <<"   " <<b<<endl;   
    return 0;
}