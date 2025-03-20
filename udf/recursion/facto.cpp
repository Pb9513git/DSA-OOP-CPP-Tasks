#include <iostream>
using namespace std;
int facto(int n);
main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    cout <<n<<"! = "<< facto(n);
}
int facto(int n)
{
    if ((n == 0) || (n == 1))
    {
        return 1;
    }
    else
    {
        return n * facto(n - 1);
    }
}