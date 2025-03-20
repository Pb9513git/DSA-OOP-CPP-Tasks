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

void bubble(int arr[], int size)
{
    int pass = 1;
    while (pass < size - 1)
    {

        for (int i = 0; i < size - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        pass++;
    }
    cout << "Sorted array in ascending order: ";
    printArray(arr, size);
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
    bubble(arr, n);
   
}