#include <iostream>
using namespace std;
int sum(int n);
main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    cout<<"Sum is : "<<sum(n);
}
int sum(int n)
{
    if (n != 0)
    {
        return n + sum(n - 1);
    }
    else
    {
        return n;
    }
}