#include <iostream>
using namespace std;
int fibo(int n);
main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    cout << "Fibonnaci Series : ";
    for (int i = 0; i < n; i++)
    {
        cout << " " << fibo(i);
    }
}
int fibo(int n)
{
    if ((n == 0) || (n == 1))
    {
        return n;
    }
    else
    {
        return (fibo(n - 1) + fibo(n - 2));
    }
}