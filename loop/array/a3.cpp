#include <iostream>
using namespace std;
main()
{
    //sum of all positive elements only
    int size;
    cout << "Enter Array Size : ";
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element : ";
        cin >> a[i];
    }
    cout << "Positive Array Elements are  " << endl;
    int sum=0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] > 0)
        {
            cout << a[i] << endl;
            sum+=a[i];
        }
    }
    cout<<"Sum of Positive Array elements is : "<<sum;
}