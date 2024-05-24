#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int flag =0;
    int key;

    cout << "Enter the number to search: ";
    cin >> key;
for(int i=0; i<=4; i++)
{
    if(arr[i] == key){
        flag = 1;
        cout<<"element"<<key<<"found at"<<i<<"position"<<endl;
    }
}
   if(flag =0){
    cout<<"element not found";
   }
    return 0;
}
