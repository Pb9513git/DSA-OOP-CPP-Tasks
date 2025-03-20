#include <iostream>
using namespace std;
main()
{
    //minimum
    int size;
    cout << "Enter Array Size : ";
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element : ";
        cin >> a[i];
    }
    int min=a[0];
   
    for (int i = 0; i < size; i++)
    {
        if(a[i]<min){
            min=a[i];
        }
    }
    cout<<"Minimum element is : "<<min;
}