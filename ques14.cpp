#include<iostream>
using namespace std;
class employee{
    private:
    int basic_salary;
    float da,hra,netsalary;
    public:
    void read(){
    cout<<"enter the basic salary of employee";
    cin>>basic_salary;
    }
    void calculate(){
        da=(basic_salary*52)/100;
        hra=(basic_salary*30)/100;
     netsalary=basic_salary+da+hra;
    }
    void display(){
        cout<< "DA  : "<<da<<endl;
        cout<<"HRA  :"<<hra<<endl;
        cout<< "Net Salary :"<<netsalary;
    }
};
int main(){
    int n;
    cout<<"enter the numbers of employee";
    cin>>n;
employee emp[n];
for(int i=0; i<n; i++){
emp[i].read();
emp[i].calculate();
emp[i].display();
cout<<endl;
}
return 0;
}