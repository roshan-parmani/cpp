#include <iostream>
using namespace std;
int main(){
    int arr[5], i;
    int *ptr = arr;
    cout << "enter the values for array elemnts";
    for (i = 0; i < 4; i++)
    {
        cin >> ptr[i];
    }
    for (i = 0; i < 4; i++)
    {
        cout << ptr[i]<<" ";
    }
    return 0;
}