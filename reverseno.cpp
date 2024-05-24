#include<iostream>
using namespace std;
int main()
{
    int a,rev=0,r;
    cout<<"enter num : ";
    cin>>a;
    while(a!=0)
    {
        r=a%10;
        rev=rev*10+r;
        a=a/10;
    }
    cout<<"reverse no is :"<<rev<<endl;

    return 0;
}