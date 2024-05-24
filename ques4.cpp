#include<iostream>
using namespace std;

int leapyear(int year){
    return (year%4==0 && year%100!=0) || (year%400==0);
        }
int main(){
     int year;
     cout<<"enter year for checking leap year or not :";
     cin>>year;

     if(leapyear(year)){
        cout<<year<<"is a leap year";
     }
     else{
      cout<< year <<" is not a leap year";
     }
    return 0;
}