#include <iostream>
using namespace std;
int linearSearch(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter the element to search: ";
    cin >> target;
    int index = linearSearch(arr, n, target);
    if (index == -1)
    {
        cout << "Element not found in the array.";
    }
    else
    {
        cout << "Element found at index " << index;
    }
}