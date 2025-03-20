#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &a)
{
    int n = a.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}
main()
{
    int n;
    cout << "Enter the size of the vector: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter " << n << " elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubbleSort(arr);
    for (int x : arr)
    {
        cout << x << " ";
    }
}