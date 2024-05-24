#include<iostream>

using namespace std;
struct employee{
    int employee_id,salary,product_q,price;
   float commission,sales,gross_salary,manager_commission;
   public:
    void takingdata(){
        cout<<"enter the employee id         : ";
        cin>>employee_id;
        cout<<"enter the salary of employee  : ";
        cin>>salary;
        cout<<"enter the quantity of product : ";
        cin>>product_q;
        cout<<"enter the price of product    : ";
        cin>>price;

    }
    void calculation(){
        sales=product_q*price;
        commission=sales/10;
        gross_salary=salary+commission;
       
    }

    void display_data(){
        cout<<"sales of employee          : "<<sales<<endl;
        cout<<"commission of employee     : "<<commission<<endl;
        cout<<"gross salary of employee   : "<<gross_salary<<endl;
    }

};
int main(){
    employee e1;
    e1.takingdata();
    e1.calculation();
    e1.display_data();
    return 0;
}