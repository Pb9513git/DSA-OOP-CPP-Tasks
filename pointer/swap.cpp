#include <iostream>
using namespace std;
main()
{
    int a, b;
    cout << "Enter A : ";
    cin >> a;
    cout << "Enter B : ";
    cin >> b;
    int *p1 = &a, *p2 = &b;
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    cout << "After swapping " << endl
         << "A : " << *p1 << endl
         << "B : " << *p2;
}