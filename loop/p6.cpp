#include <iostream>
using namespace std;
main()
{
    // program to print even and its sum from n numbers using while loop

    int n, sum = 0;
    cout << "Enter n : ";
    cin >> n;
    int i = 1;
    while ( i <= n)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
            sum=sum+i;
        }
        i++;
    }
    cout<<"and the sum of this even number is : "<<sum;
}