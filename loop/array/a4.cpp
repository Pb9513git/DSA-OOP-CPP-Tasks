#include <iostream>
using namespace std;
main()
{
    //find negative element
    int size;
    cout << "Enter Array Size : ";
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element : ";
        cin >> a[i];
    }
    cout<<"Negative array elements are "<<endl;
    for (int i = 0; i < size; i++)
    {
        if (a[i] < 0)
        {
            cout<<a[i]<<endl;
        }
    }
   
}