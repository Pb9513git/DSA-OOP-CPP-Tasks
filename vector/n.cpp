#include <iostream>
#include <vector>
using namespace std;
main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
 
    vector<vector<int>> matrix(n, vector<int>(n, n));
    cout << "The " << n << " x " << n << " matrix is:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    

}