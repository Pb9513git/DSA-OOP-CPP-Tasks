#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,flag=0;

    cout << "Enter the size of the vector: ";
    cin >> n;

    vector<int> v(n);


    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    
   
    cout << "Elements strictly smaller than their neighbors: ";
    for (int i = 1; i < n - 1; i++)
    {
        if (v[i] < v[i - 1] && v[i] < v[i + 1])
        {
            cout << v[i] << " ";
            flag = 1;
        }
    }

    if (flag==0)
    {
        cout << "No such element found.";
    }

    return 0;
}
