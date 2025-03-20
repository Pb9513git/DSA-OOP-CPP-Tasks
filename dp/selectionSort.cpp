#include <iostream>
using namespace std;
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}
// void swapValues(int i, int j)
// {
//     int temp = j;
//     j = i;
//     i = temp;
// }

void selectionSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        // swapValues(arr[i], arr[min]);
        int temp = arr[min];
       arr[min] = arr[i];
        arr[i] = temp;
        
    }
    cout << "Sorted array in ascending order: ";
    // printArray(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
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
    cout << "Original array: ";
    printArray(arr, n);
    selectionSort(arr, n);
    return 0;
}