#include <iostream>
using namespace std;
main()
{
    // program to print Multiplication table using while loop

    int n;
    cout << "Enter n : ";
    cin >> n;
    int i = 1;
    while (i <= 10)
    {
        cout << n << " * " << i << " = " << n * i << endl;
        i++;
    }
}