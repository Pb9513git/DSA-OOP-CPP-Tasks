#include <iostream>
using namespace std;
bool check_palin(int n);
main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    if (check_palin(n))
    {
        cout << n << " is an palindrom number." << endl;
    }
    else
    {
        cout << n << " is not an palindrom number." << endl;
    }
}
bool check_palin(int n)
{
    int num = n, reverse = 0, rem;
    while (num != 0)
    {
        rem = num % 10;

        reverse = reverse * 10 + rem;
        num = num / 10;
    }

    return reverse == n;
}