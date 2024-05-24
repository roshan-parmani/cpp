#include <iostream>
using namespace std;
int main()
{
    int a[2][3];
    int b[2][3];

    cout << "enter the values for 1st matrix :";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }
    cout << endl;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "enter the values for 2nd matrix:";
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout << b[i][j] << " ";
        }

        cout << endl;
    }
    cout << endl;
    cout << "the addition of matrix1 and matrix2 is :" << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout << a[i][j] + b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}