#include <iostream>
using namespace std;
main()
{
    int sy, ey, ar_index = 0;
    int ly[100];
    cout << "Enter Start Year : ";
    cin >> sy;
    cout << "Enter End Year : ";
    cin >> ey;
    for (int i = sy; i <= ey; i++)
    {
        if ((i % 4 == 0)&&(i % 100 != 0 || i % 400 == 0))
        {
            ly[ar_index] = i;
            ar_index++;
        }
    }
    for(int i=0;i<=ar_index;i++){
        cout<<ly[ar_index]<<endl;

    }
}