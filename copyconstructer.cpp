#include<iostream>
using namespace std;
class emp
{
    private:
    int product_q,price,salary,employee_id;
    float comm,sales,gross_salary,t_sales;
public:
emp(emp&s1,emp&s2,emp&s3)
{
    t_sales=(s1.t_sales+s2.t_sales+s3.t_sales);
}
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
        comm=sales/10;
        gross_salary=salary+comm;
        
       
    }

    void displaying_data(){
        cout<<"sales of employee          : "<<sales<<endl;
        cout<<"commission of employee     : "<<comm<<endl;
        cout<<"gross salary of employee   : "<<gross_salary<<endl;
    }

      

};
int main()
{
    emp s1;

    return 0;
}