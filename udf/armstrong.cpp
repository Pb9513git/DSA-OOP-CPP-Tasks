#include <iostream>
using namespace std;
bool check_arm(int n);
main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    if (check_arm(n))
    {
        cout << n << " is an Armstrong number." << endl;
    }
    else
    {
        cout << n << " is not an Armstrong number." << endl;
    }
}
bool check_arm(int n)
{
    int sum = 0, num = n;
    for (; num > 0; num /= 10)
    {
        int digit = num % 10;
        sum += digit * digit * digit;
    }
    return sum == n;
}