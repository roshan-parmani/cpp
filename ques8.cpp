#include <iostream>
using namespace std;

int main()
{
    int arr[2][2],sum1=0,sum2=0;
    cout << "Enter the element for 2d matrix: ";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "given matrix is:"<<endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[i][j]<<"  ";
        }
        cout<<endl;
    }
sum1=sum1+arr[0][0]+arr[1][1];
sum2=sum2+arr[1][0]+arr[0][1];

      cout<<"the sum of diagnol matrix is"<<sum1<<endl;
      cout<<"the sum of diagnol matrix is"<<sum2<<endl; 
      return 0;
}