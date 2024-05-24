//fabonacci series
#include<iostream>
using namespace std;

int main(){
    int term1=0,term2=1,nextterm;
    int n;
    cout<<"enter the number for fabonacci series:";
    cin>>n;
    for(int i=0; i<n; i++){
        nextterm=term1+term2;
        term1=term2;
        term2=nextterm;
        cout<<nextterm<<"\t";
    }

    return 0;
}