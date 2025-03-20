#include <iostream>
using namespace std;
void primeFactors(int n)
{
    cout << "Prime factors of " << n << " are: ";
    for (int i = 2; n > 1; i++)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }
}
main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    primeFactors(num);
}
