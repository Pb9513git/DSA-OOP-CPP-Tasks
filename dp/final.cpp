#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
class LinkedList
{
    Node *head;
    int size;

public:
    LinkedList()
    {
        this->head = NULL;
    }
    void addAtEnd(int data)
    {
        Node *newNode = new Node(data);
        if (this->head == NULL)
        {
            this->head = newNode;
            this->size++;
        }
        else
        {
            Node *ptr = this->head;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = newNode;
            this->size++;
        }
        cout << "Elements added successfully at the end.." << endl;
    }
};