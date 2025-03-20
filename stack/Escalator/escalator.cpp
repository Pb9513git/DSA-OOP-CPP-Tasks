#include <iostream>
using namespace std;
class Base
{
public:
    virtual void push(int element) = 0;
    virtual void pop() = 0;
    virtual void peek() = 0;
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
    virtual void display() = 0;
};

class Stack : public Base
{

    int top;
    int size;
    int *arr;

    int capacity;

public:
    Stack(int capacity)
    {
        this->capacity = capacity;
        arr = new int[this->capacity];
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
            cout << "Pushed " << element << " into the Stack" << endl;
            size++;
        }
    }
    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        else
        {
            cout << "Popped " << arr[top] << " from the Stack" << endl;
            top--;
            size--;
        }
    }
    void peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        else
        {
            cout << "Top element is: " << arr[top] << endl;
        }
    }
    bool isEmpty()
    {
        return (top == -1);
    }
    bool isFull()
    {
        return size == capacity;
    }
    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack elements are: " << endl;
        cout << "Stack ";
        for (int i = 0; i < size; i++)
        {
            cout << "-->[" << arr[i] << "] ";
        }
        cout << "--> Top" << endl;
    }
};
main()
{
    int choice, n;
    cout << "Enter the size of Stack: ";
    cin >> n;
    Stack s(n);

    do
    {
        cout << "Stack Operations " << endl;
        cout << "1. Push " << endl;
        cout << "2. Pop " << endl;
        cout << "3. Peek " << endl;
        cout << "4. Check Empty " << endl;
        cout << "5. Check full " << endl;
        cout << "6. Display " << endl;
        cout << "0. Exit " << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {

        case 1:
            int num;
            cout << "Enter a number to push: ";
            cin >> num;
            s.push(num);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.peek();
            break;
        case 4:
            cout << (s.isEmpty() ? "Stack is empty" : "Stack is not empty") << endl;
            break;
        case 5:
            cout << (s.isFull() ? "Stack is full" : "Stack is not full") << endl;
            break;
        case 6:
            s.display();
            break;
        case 0:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 0);
}