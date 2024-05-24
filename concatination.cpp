#include<iostream>
#include<string>

using namespace std;

class concat{
    string text1,text2;
    string con;
    public:
    void fun1(){
        text1="roshan";

    }
    void fun2(){
        text2="parmani";
    }
    void concatinat(){
        con=text1+text2;
    }
    void disp(){
        cout<<"string is :"<<con<<endl;
    }
};
int main(){
    concat name;
    name.fun1();
    name.fun2();
    name.concatinat();
    name.disp();
    return 0;
}