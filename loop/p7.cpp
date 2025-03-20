#include <iostream>
using namespace std;
main()
{
    // program to print Multiplication table using for loop

    int n;
    cout << "Enter n : ";
    cin >> n;
    for (int i = 1; i <= 10; i++)
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;

    }
        
}