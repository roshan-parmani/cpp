#include <iostream>
using namespace std;

class Employee {
private:
    float salary, productQuantity,sellingPrice,totalSale ,commission;
public:
    Employee(float s, float pq, float sp) : salary(s), productQuantity(pq), sellingPrice(sp) {
        totalSale = productQuantity * sellingPrice;
        commission = 0.20 * totalSale;
    }
    float getGrossSalary() {
        return salary + commission;
    }
    float getTotalSale() {
        return totalSale;
    }
};
int main() {
    Employee salesman1(3000, 100, 50); 
    Employee salesman2(3500, 150, 60); 
    Employee salesman3(4000, 200, 70);
    float totalSalesBySalesmen = salesman1.getTotalSale() + salesman2.getTotalSale() + salesman3.getTotalSale();
    float managerSalary = 5000 + (0.10 * totalSalesBySalesmen);

    cout << "Salesman 1's Gross Salary: " << salesman1.getGrossSalary() << endl;
    cout << "Salesman 2's Gross Salary: " << salesman2.getGrossSalary() << endl;
    cout << "Salesman 3's Gross Salary: " << salesman3.getGrossSalary() << endl;
    cout << "Manager's Gross Salary: " << managerSalary << endl;

    return 0;
}
