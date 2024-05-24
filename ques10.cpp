#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int *a = &num1;
    int *b = &num2;

    cout << "Sum: " << *a + *b << endl;
    cout << "subtraction: " << *a - *b << endl;
    cout << "multiplication :" << *a * *b << endl;
    if (*b != 0) {
        cout << "Quotient: " << *a / *b << endl;
        cout << "Remainder: " << *a % *b << endl;
    } else {
        cout << "Cannot divide by zero." << endl;
    }

    return 0;
}