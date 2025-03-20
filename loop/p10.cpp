#include <iostream>
using namespace std;
main()
{
    // program to print factorial of n using while loop

    int n, fact = 1;
    cout << "Enter n : ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        fact *= i;
        i++;
    }
    cout << "Factorial of " << n << " is " << fact;
}