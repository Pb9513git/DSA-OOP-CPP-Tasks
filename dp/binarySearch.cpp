// c++ program for binary search without recursion
#include <iostream>
#include <algorithm>
using namespace std;

#include <algorithm>
int binarySearch(int arr[], int size, int target)
{
    sort(arr, arr + size); 
    int left = 0, right = size - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[] = {2, 3, 4, 10, 18, 20, 25};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter the number to search: ";
    cin >> target;

    int result = binarySearch(arr, size, target);

    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in the array" << endl;

    return 0;
}
