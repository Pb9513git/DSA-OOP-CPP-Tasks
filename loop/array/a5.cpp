#include <iostream>
using namespace std;
main()
{
    //maximum
    int size;
    cout << "Enter Array Size : ";
    cin >> size;
    int a[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter element : ";
        cin >> a[i];
    }
    int max=a[0];
   
    for (int i = 0; i < size; i++)
    {
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<<"Maximum element is : "<<max;
}