#include <iostream>
using namespace std;

int main()
{
    int from, to;

    // Input starting and ending numbers
    cout << "Enter starting number: ";
    cin >> from;
    cout << "Enter ending number: ";
    cin >> to;

    for (int i = from; i <= to; i++)
    {
        for (int j = 1; j <= to; j++)
        {
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << endl;
    }

    return 0;
}
