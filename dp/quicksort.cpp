// c++ prgram for quick sorting

#include <iostream>
using namespace std;
// 14 16 12 15 17 19 11 13

int partition(int arrr[], int low, int high)
{
    int pivot = arrr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)
    {
        if (arrr[j] < pivot)
        {
            i++;
            swap(arrr[i], arrr[j]);
        }
    }
    swap(arrr[i + 1], arrr[high]);
    return (i + 1);
}
void quickSort(int arrr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arrr, low, high);
        quickSort(arrr, low, pi - 1);
        quickSort(arrr, pi + 1, high);
    }
}
main()
{
    int arr[] = {14, 16, 12, 15, 17, 19, 11, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Unsorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    quickSort(arr, 0, n - 1);
    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}