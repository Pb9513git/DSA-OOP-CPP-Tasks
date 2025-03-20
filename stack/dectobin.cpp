#include <iostream>
using namespace std;

#define MAX 100

class Stack

{
    int top, size;
    int arr[MAX];

public:
    Stack()
    {
        top = -1;
        size = 0;
    }
    void push(int element)
    {
        if (isFull())
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        else
        {

            arr[++top] = element;
            size++;
            cout << element << " pushed to stack" << endl;
        }
    }

    int pop()
    {
        if (top >= 0)
        {
            return arr[top--];
        }
        return -1;
    }
    bool isEmpty()
    {
        return top == -1;
    }
    bool isFull()
    {
        return size == MAX;
    }
    void decToBinary(int element)
    {
        if (element == 0)
        {
            cout << "0";
            return;
        }
        while (element != 0)
        {
            push(element % 2);
            element = element / 2;
        }
        cout << "Binary : ";
        while (!isEmpty())
        {
            cout << pop();
        }
        cout << endl;
    }
};
main()
{
    int n;
    cout << "Enter any Number :";
    cin >> n;
    Stack s;
    s.decToBinary(n);
}