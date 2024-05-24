#include <iostream>
using namespace std;
int main()
{
   int n, count = 0;
   cout << "enter any num for checking prime or not :";
   cin >> n;
   for (int i = 1; i <= n; i++)
   {
      if (n % i == 0)
      {
         count++;
      }
   }
   if (count == 2)
   {
      cout << "this is prime number";
   }
   else
   {
      cout << "this is not a prime number";
   }
   return 0;
}