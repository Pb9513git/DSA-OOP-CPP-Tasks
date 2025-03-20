#include <iostream>
using namespace std;

main()
{

    for (int i = 5; i >= 1; i--)
    {
        for (int space = 0; space < 5 - i; space++)
        {
            cout << "  ";
        }

        for (int j = 1; j <= i; j++)
        {
            if (j % 2 == 0)
            {
                cout << "0 ";
            }
            else
            {
                cout << "1 ";
            }
        }
        cout << endl;
    }
}
