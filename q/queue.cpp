// c++ crud program for a queue using array

#include <iostream>

using namespace std;

#define MAX 100

class Queue
{
    int front, rear;
    int arr[MAX];
    int size;

public:
    Queue()
    {
        front = -1;
        rear = -1;
        size = 0;
    }
    bool isEmpty()
    {
        return (front == -1);
    }
    bool isFull()
    {
        return (rear == MAX - 1);
    }
    void enqueue(int value)

    {
        if(isFull()){
            cout<<"Queue is Full"<<endl;
            return;
        }
        

    }
};
main()
{
    int choice;
    Queue q;
    do
    {
        cout<<"Queue Operations"<<endl;
        cout<<"1. Enqueue"<<endl;
        cout<<"2. Dequeue"<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4. Check if Queue is empty"<<endl;
        cout<<"5. Check if Queue is full"<<endl;
        cout<<"6. Get Front Element"<<endl;
        cout<<"7. Get Rear Element"<<endl;
        cout<<"8. Get Size of Queue"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch (choice){

        }
    } while (choice != 0);
}