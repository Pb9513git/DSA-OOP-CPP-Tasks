#include <iostream>
using namespace std;
int sum(int[], int);
main()
{
    int size;
    cout << "Enter Array size : ";
    cin >> size;
    int arr[size];
    cout << "Enter " << size << " elements for array " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << i + 1 << " element : ";
        cin >> arr[i];
    }
    cout << "Sum of all array element is : " << sum(arr, size);
}
int sum(int a[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {

        sum += a[i];
    }
    return sum;
}