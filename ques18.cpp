#include<iostream>
using namespace std;

int sum(int a, int b){
    return a + b;
}

int sum(int a, int b, int c){
    return a + b + c;
}
int main(){
    
    cout<<"the sum of a and b is "<<sum(2,3)<<endl;
    cout<<"the sum of a , b and c is "<<sum(2,3,4)<<endl;
    return 0;
}