#include <iostream>
using namespace std;

#define MAX 100

class Stack
{
private:
    char arr[MAX];
    int top;

public:
    Stack() { top = -1; }

    void push(char ch)
    {
        if (top >= MAX - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        arr[++top] = ch;
    }

    char pop()
    {
        if (top < 0)
        {
            cout << "Stack Underflow" << endl;
            return 0;
        }
        return arr[top--];
    }

    bool isEmpty()
    {
        return (top == -1);
    }

    bool isPalindrome(string str)
    {
        for (char ch : str)
        {
            push(ch);
        }

        for (char ch : str)
        {
            if (ch != pop())
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    string str;
    cout << "Enter a string: ";
    cin >> str;

    Stack stack;
    if (stack.isPalindrome(str))
    {
        cout << "The string is a palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
