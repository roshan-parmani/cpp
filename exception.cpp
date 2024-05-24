#include<iostream>
using namespace std;
int main(){
    double bal=1000.0;
    double amt;
    try{
    cout<<"enter amount for deposite balance :";
    cin>>amt;
    if(amt<0){
        cout<<"invalid amount"<<endl;
    }
    else{
        cout<<"amount deposited :"<<amt<<endl;
    }
    bal=bal+amt;
    cout<<"Available balance is :"<<bal<<endl;

    cout<<"Enter amount for withdrawl :";
    cin>>amt;
     if(amt>bal){
        throw runtime_error("invalid amount");
    }
    else{
        cout<<"amount withdrawl :"<<amt<<endl;
    }
    bal=bal-amt;
    cout<<"Available balance is :"<<bal<<endl;
    }
    catch(const exception & e){
        cout<<"exception occur  : "<<e.what();
    }

    return 0;
    }