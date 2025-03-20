#include <iostream>
#include <string>
using namespace std;

bool check_palin(string);
main()
{
    string str;
    cout << "Enter string : ";
    cin >> str;

    if (check_palin(str))
    {
        cout << str << " is an palindrom string." << endl;
    }
    else
    {
        cout << str << " is not an palindrom string." << endl;
    }
}
bool check_palin(string str)

{
    int left = 0;
    int right = str.length() - 1;
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