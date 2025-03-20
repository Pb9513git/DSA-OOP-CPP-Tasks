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

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow" << endl;
        }
        else
        {
            cout << arr[top] << " popped from stack" << endl;
            top--;
            size--;
        }
    }
    void peek()
    {
        if (isEmpty())
            cout << "Stack is empty" << endl;
        else
        {
            cout << "Top element is: " << arr[top] << endl;
        }
    }
    void s()
    {
        cout << "Stack size: " << size << endl;
    }

    bool isEmpty()
    {
        return top == -1;
    }
    bool isFull()
    {
        return size == MAX;
    }
    void sort()
    {
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (arr[i] > arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        cout << "After Sorting  ";
        display();
    }
    void greaterAfterTop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        int topElement = arr[top];
        cout << "Top Element : " << topElement << endl;
        cout << "Elements greater than top: ";
        for (int i = top - 1; i >= 0; i--)
        {
            if (arr[i] > topElement)
            {
                cout << arr[i] << " ,";
            }
        }
        cout << endl;
    }

    void display()
    {
        if (isEmpty())
            cout << "Stack is empty" << endl;
        else
        {

            cout << "Stack elements are: " << endl;
            cout << "Stack ";
            for (int i = 0; i < size; i++)
            {
                cout << "-->[" << arr[i] << "] ";
            }
            cout << "--> Top" << endl;
        }
    }
    void reverse()
    {
        int temp[MAX];
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        else
        {

            for (int i = 0; i < size; i++)
            {
                temp[i] = arr[size - 1 - i];
            }
        }
        cout << "Top";
        for (int i = 0; i < size; i++)
        {
            cout << "-->[" << temp[i] << "] ";
        }
        cout << endl;
    }
};
main()
{
    Stack s;
    int choice;
    do
    {
        cout << "1.Push" << endl;
        cout << "2.Pop" << endl;
        cout << "3.Peek" << endl;
        cout << "4.Size" << endl;
        cout << "5.isEmpty" << endl;
        cout << "6.isFull" << endl;
        cout << "7.Sort" << endl;
        cout << "8.Greater After Top" << endl;
        cout << "9.Display" << endl;
        cout << "10.Reverse display" << endl;
        cout << "0.Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            int element;
            cout << "Enter an element to push: ";
            cin >> element;
            s.push(element);

            break;
        case 2:
            s.pop();

            break;
        case 3:
            s.peek();

            break;
        case 4:
            s.s();

            break;
        case 5:
            cout << (s.isEmpty() ? "Stack is empty" : "Stack is not empty") << endl;

            break;
        case 6:
            cout << (s.isFull() ? "Stack is full" : "Stack is not full") << endl;

            break;
        case 7:
            s.sort();
            break;
        case 8:
            s.greaterAfterTop();
            break;
        case 9:
            s.display();
            break;

        case 10:
            s.reverse();
            break;
        case 0:
            cout << "Exiting.." << endl;
            break;

        default:
            cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 0);
}
// reverse
// sort
// next greater element after top
