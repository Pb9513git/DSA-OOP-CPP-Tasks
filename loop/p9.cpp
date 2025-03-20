#include <iostream>
using namespace std;
main()
{
    // program to print factorial of n using for loop

    int n,fact=1;
    cout << "Enter n : ";
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    cout<<"Factorial of "<<n<<" is "<<fact;
    
}