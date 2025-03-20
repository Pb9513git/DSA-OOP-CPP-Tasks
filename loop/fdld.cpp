#include <iostream>
using namespace std;
main()
{
    int n, fd, ld;
    cout << "Enter Number : ";
    cin >> n;
    fd=n;
    while (fd >= 10)
    {
        fd = fd / 10;
    }

    ld = n % 10;
    cout <<"Sum of First and Last digit is : "<<fd+ld;
}