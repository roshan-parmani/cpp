#include<iostream>

using namespace std;

int main()
{
    int a=3;
    int*b= &a;

    //  & ---->   (address of) operater
    cout<<"the address odf a is   :"<< &a<<endl;
    cout<<"the  address of a is    :"<<b<<endl;

    // * ---->  (value at)  dereference operater
    cout <<"the value at address b  is     :"<<*b<<endl; 
        return 0;
}