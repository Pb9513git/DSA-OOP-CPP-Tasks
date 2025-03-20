#include <iostream>
using namespace std;
bool isPalin(string str)
{
    int n = str.length();
    int left = 0, right = n - 1;
    while (left < right)
    {
        if (str[left] != str[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
main()
{
    string str;
    cout << "Enter String : ";
    cin >> str;
    if (isPalin(str))
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not palindrome";
    }
}