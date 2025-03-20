#include <iostream>
using namespace std;
main()
{
    // program to print number divisible by 3 and 5 from n using while loop
    int n;
    cout << "Enter n : ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << i << endl;
        }
        i++;
    }
}