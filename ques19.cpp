#include<iostream>
using namespace std;

int sum(int a, int b){
    return a + b;
}

int sum(double a, double b){
    return a + b ;
}
int main(){
    
    cout<<"the sum of a and b is "<<sum(2,3)<<endl;
    cout<<"the sum of a , b and c is "<< sum(2.5,3.5 ) <<endl;
    return 0;
}