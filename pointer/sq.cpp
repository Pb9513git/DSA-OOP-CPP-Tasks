#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter Array size : ";
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cout << "enter element " << i << ": ";
        cin >> a[i];
    }
    int *ptr[size];
    for (int i = 0; i < size; i++)
    {
        ptr[i] = &a[i];
        int square = *ptr[i] * *ptr[i];
        cout << "Squrae of " << *ptr[i] << " is : " << square << endl;
    }
    cout << "Reverse array : " << endl;
    for (int i = size - 1; i >= 0; i--)
    {
        cout << *ptr[i] << endl;
    }
}