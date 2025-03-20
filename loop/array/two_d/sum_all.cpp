#include <iostream>
using namespace std;
main()
{
    int r, c,sum=0;

    cout << "Enter Row Size : ";
    cin >> r;
    cout << "Enter Col Size : ";
    cin >> c;
    int a[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Enter element for a[" << i << "] [" << j << "] :";
            cin >> a[i][j];
        }
        cout<<endl;
    }
    cout << "Array Elements Are "<<endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            cout << a[i][j]<<" ";
            sum+=a[i][j];
        }
        cout << endl;
    }
    cout<<"And sum of All Element is : "<<sum;
}