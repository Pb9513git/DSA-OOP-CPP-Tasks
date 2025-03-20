#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter Array Size : ";
    cin >> size;
    int a[size], b[size], c[size];
    cout << "enter first array elements ";
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element : ";
        cin >> a[i];
    }
    cout << "enter second array elements ";
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element : ";
        cin >> b[i];
      
    }
      cout << "Addition of two array is ";
        for (int i = 0; i < size; i++)
        {
            c[i] = a[i] + b[i];
            cout << c[i] << endl;
        }
}