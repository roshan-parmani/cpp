#include<iostream>
using namespace std;

int main()
{
   int n;
   cin>>n;
   if(n%2!=0)
   {
    cout<<"wired";
   }
   else if((n%2==0) && (n=(2||3||4||5)))
   {
    cout<<" not wired";

   }
 else if((n%2==0) && (n>=6 && n<=20))
   {
    cout<<"  wired";
   }
   else if((n%2==0) &&  (n>20))
   {
    cout<<" not wired";
   }

   

    return 0;
}