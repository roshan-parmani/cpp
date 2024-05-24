
#include<iostream>
using namespace std;
int main(){
string food = "Pizza";
string &meal = food;

cout << food << endl;  // Outputs Pizza
cout << meal << endl;  // Outputs Pizza
return 0;
}