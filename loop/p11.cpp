#include <iostream>
using namespace std;
main()
{
    // program to print number divisible by 3 and 5 from n using for loop
    int n;
    cout << "Enter n : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 && i % 5 == 0){
            cout<<i<<endl;
        }
        
    }
}