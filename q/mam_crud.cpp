#include <iostream>

using namespace std;
#define MAX 10
class Queue
{
    int front, rear, size, capacity;
    int *arr;

public:
    Queue(int capacity)
    {
        this->capacity = capacity;
        this->arr = new int[this->capacity];
        this->front = -1;
        this->rear = -1;
        this->size = 0;
    }
    ~Queue()
    {
        delete[] arr;
    }
    void enque(int element)
    {
        if (this->rear == this->capacity - 1)
        {
            cout << "Queue is full. " << endl;
            return;
        }
        else if (this->front == -1 && this->rear == -1)
        {
            this->front = 0;
            this->rear = 0;
            this->arr[this->rear] = element;
            this->size++;
        }
        else
        {
            this->rear++;
            this->arr[this->rear] = element;
            this->size++;
        }
    }
    void dequeue()
    {
        if (this->rear == -1 && this->front == -1)
        {
            cout << "Queue is empty. " << endl;
            return;
        }
        else if (this->front == this->rear)
        {
            this->front = -1;
            this->rear = -1;
            this->size--;
        }
        else
        {
            this->front--;
            this->size--;
        }
    }
    void display()
    {
        if (this->front == -1 && this->rear == -1)
        {
            cout << "Queue is empty. " << endl;
            return;
        }
        cout << "Queue elements are: " << "Front ";
        for (int i = this->front; i <= this->rear; i++)
        {
            cout << "<--[" << this->arr[i] << "]";
        }
        cout << "<--Rear";
       

        cout << endl;
    }
    
    void getRear()
    {
        if (this->rear == -1)
        {
            cout << "Queue is empty. " << endl;
            return;
        }
        cout << "Rear element is: " << this->arr[this->rear] << endl;
    }
    void getFront()
    {
        if (this->front == -1)
        {
            cout << "Queue is empty. " << endl;
            return;
        }
        cout << "Front element is: " << this->arr[this->front] << endl;
    }
};
main()
{
    int choice;
    Queue q(MAX);
    do
    {
        cout << "Queue Operations" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Get Front Element" << endl;
        cout << "5. Get Rear Element" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            int element;
            cout << "Enter element to enqueue: ";
            cin >> element;
            q.enque(element);
            break;
        case 2:
            q.dequeue();
            break;
        case 3:
            q.display();
            break;
        case 4:
            q.getFront();
            break;
        case 5:
            q.getRear();
            break;
        case 0:
            cout << "Exiting" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);
}