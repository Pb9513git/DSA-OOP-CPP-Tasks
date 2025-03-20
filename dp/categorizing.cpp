#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
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
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    cout << "Sorted array in ascending order: ";
    printArray(arr, n);
}

void merge(int arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[left + i];
        R[i] = arr[mid + 1 + i];
    }
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}
void linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            cout << "Element found at index " << i << endl;
            return;
        }
    }
    cout << "Element not found" << endl;
}
void binarySearch(int arr[], int n, int key)
{
    int left = 0, right = n - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
        {
            cout << "Element found at index: " << mid << endl;
            return;
        }
        if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    cout << "Element not found." << endl;
}
main()
{
    int arr[100], size, choice, key, element;
    cout << "Enter the size of the array : ";
    cin >> size;
    cout << "Enter " << size << " elements : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    do
    {
        cout << endl
             << "Menu" << endl;
        cout << "1. Selection Sort" << endl;
        cout << "2. Merge Sort" << endl;
        cout << "3. Linear Search" << endl;
        cout << "4. Binary Search" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            selectionSort(arr, size);
            break;
        case 2:
            mergeSort(arr, 0, size - 1);
            cout << "Sorted array in ascending order: ";
            printArray(arr, size);
            break;
        case 3:
            linearSearch(arr, size, key);
            break;
        case 4:
            cout << "Enter the element to search for: ";
            cin >> key;
            selectionSort(arr, size);
            binarySearch(arr, size, key);
            break;
        case 5:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 5);
}