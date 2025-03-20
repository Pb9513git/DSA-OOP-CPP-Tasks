#include <iostream>
using namespace std;
int cube(int);
main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    cout << "Cube of " << n << " is " << cube(n);
}
int cube(int n)
{
    return n * n * n;
}