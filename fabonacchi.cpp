#include<iostream>
using namespace std;
void fabo(int n)
{
    int term1=0,term2=1,nextterm;
    cout<<"fabonacci serien "<<n<<"terms"<<endl;
    for(int i=1; i<=n; ++i){
       if(i==1){
        cout<<term1<<", ";
        continue;
       }
       if(i==2){
        cout<<term2<<", ";
        continue;
       }
       nextterm=term1+term2;
       term1=term2;
       term2=nextterm;
       cout<<nextterm<<", ";

    }
}
int main(){
    int n;
    cout<<"enter the number of term for fabonacci series";
    cin>>n;

    fabo(n);
    
    return 0;
}