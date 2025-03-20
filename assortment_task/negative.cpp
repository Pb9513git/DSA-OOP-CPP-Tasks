#include <iostream>
using namespace std;
main()
{
    int r, c;

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
        cout << endl;
    }
    int min = a[0][0];
    cout << "negative Elements Are : " ;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            if (a[i][j] < 0)
            {
                cout << a[i][j];
            }
        }
        cout << endl;
    }
}