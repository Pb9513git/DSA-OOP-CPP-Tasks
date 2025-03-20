#include <iostream>
using namespace std;
main()
{
    // program to print reverse 1 to n using for loop
    int n;
    cout << "Enter n : ";
    cin >> n;
    for (int i = n; i >= 1; i--)
    {
        cout << i << endl;
        i++;
    }
}