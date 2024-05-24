#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    int num;
    cout << "enter the number for factorial of any num:";
    cin >> num;
    if (num < 0)
    {
        cout << "factorial num is not define for negative num";
    }
    else
    {
        int fact = factorial(num);
        cout << "factorial of " << num << "  is  " << fact;
    }

    return 0;
}