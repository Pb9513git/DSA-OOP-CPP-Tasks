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
    cout << "Array Elements Are " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    int rs, cs, rsum = 0, csum = 0;
    cout << "Enter your desired row number (1-" << r << ") : ";
    cin >> rs;
    cout << "Enter your desired Column number (1-" << c << ") : ";
    cin >> cs;

    cout << "Elements of row " << rs << " are : ";
    for (int i = rs - 1; i < rs; i++)
    {
        for (int j = 0; j < c; j++)
        {

            cout << a[i][j] << ",";
            rsum = rsum + a[i][j];
        }
    }
    cout << endl
         << "And there sum is : " << rsum;

    cout << endl
         << "Elements of Column " << cs << " are : ";
    for (int i = 0; i < r; i++)
    {
        cout << a[i][cs - 1] << ",";
        csum = csum + a[i][cs - 1];
    }
    cout << endl
         << "And there sum is : " << csum;
}