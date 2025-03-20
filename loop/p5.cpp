#include <iostream>
using namespace std;
main()
{
    // program to print even and its sum from n numbers using for loop

    int n, sum = 0;
    cout << "Enter n : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
            sum=sum+i;
        }
    }
    cout<<"and the sum of this even number is : "<<sum;
}