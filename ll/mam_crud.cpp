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
        this->size = 0;
    }
    void addAtBegin(int data)
    {
        Node *newNode = new Node(data);
        newNode->next = this->head;
        this->head = newNode;
        this->size++;
        cout << "Elements added successfully at the begining.." << endl;
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
    void addAtPosition(int position, int data)
    {
        if (position < 0 || position > this->size)
        {
            cout << "Invalid Position!" << endl;
            return;
        }
        if (position == 0)
        {
            addAtBegin(data);
        }
        else
        {
            Node *newNode = new Node(data);
            Node *ptr = this->head;
            for (int i = 0; i < position - 1; i++)
            {
                ptr = ptr->next;
            }
            newNode->next = ptr->next;
            ptr->next = newNode;
            this->size++;
        }
        cout << "Elements added successfully at the position.." << endl;
    }
    void update(int element, int position)
    {
        Node *ptr = this->head;
        for (int i = 0; i < position; i++)
        {
            ptr = ptr->next;
        }
        ptr->data = element;
        cout << "Element updated successfully at the position.." << endl;
    }
    void deleteAtBegin()
    {
        if (this->head == NULL)
        {
            cout << "List is empty!" << endl;
            return;
        }
        Node *temp = this->head;
        this->head = this->head->next;
        delete temp;
        this->size--;
        cout << "Element deleted successfully from the begining.." << endl;
    }
    void deleteAtEnd()
    {
        if (this->head == NULL)
        {
            cout << "List is empty!" << endl;
            return;
        }
        if (this->head->next == NULL)
        {
            delete this->head;
            this->head = NULL;
            this->size--;
            cout << "Element deleted successfully from the end.." << endl;
            return;
        }
        Node *ptr = this->head;
        while (ptr->next->next != NULL)
        {
            ptr = ptr->next;
        }
        delete ptr->next;
        ptr->next = NULL;
        this->size--;
        cout << "Element deleted successfully from the end.." << endl;
    }
    void deleteAtPosition(int position)
    {
        if (this->head == NULL)
        {
            cout << "List is empty!" << endl;
            return;
        }
        if (this->head->next == NULL)
        {
            delete this->head;
            this->head = NULL;
            this->size--;
            cout << "Element deleted successfully from the position.." << endl;
            return;
        }
        Node *ptr = this->head;
        for (int i = 0; i < position - 1; i++)
        {
            ptr = ptr->next;
            if (ptr->next == NULL)
            {
                cout << "Invalid Position!" << endl;
                return;
            }
        }
        Node *temp = ptr->next;
        ptr->next = ptr->next->next;
        delete temp;
        this->size--;
        cout << "Element deleted successfully from the position.." << endl;
    }
    void reverse()
    {
        Node *current, *prev, *next;
        current = this->head;
        prev = NULL;
        next = NULL;
        while (current != NULL)
        {
            next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }
        this->head = prev;
        cout << "Linked List reversed successfully.." << endl;
        cout << "Reversed Linked List: ";
        while (this->head != NULL)
        {
            cout << " --> [" << this->head->data << "]";
            // cout << this->head->data << " ";
            this->head = this->head->next;
        }
        cout << endl;
    }
    void search(int element)
    {
        if (this->head == NULL)
        {
            cout << "List is empty!" << endl;
            return;
        }
        else
        {
            Node *ptr = this->head;
            while (ptr != NULL)
            {
                if (ptr->data == element)
                {
                    cout << "Element found at position: " << (ptr - this->head + 1) << endl;
                    return;
                }
                ptr = ptr->next;
            }
            cout << "Element not found in the linked list.." << endl;
        }
    }
    void ViewAllNodes()
    {
        Node *ptr = this->head;
        cout << "Linked List: " << endl;
        cout << "Head";

        while (ptr != NULL)
        {
            // cout << ptr->data << " ";
            // ptr = ptr->next;

            cout << " --> [" << ptr->data << "]";
            ptr = ptr->next;
        }
        cout << " --> NULL" << endl;
        cout << endl;
    }

    void getSize()
    {
        cout << "Size of the linked list is: " << this->size + 1 << endl;
    }
};
main()
{
    LinkedList list;
    int choice, element, position;
    do
    {
        cout << "1. Add at Beginning" << endl;
        cout << "2. Add at End" << endl;
        cout << "3.Add at Position" << endl;
        cout << "4. Update" << endl;
        cout << "5.Delete at Beginning" << endl;
        cout << "6. Delete at End" << endl;
        cout << "7. Delete at Position" << endl;
        cout << "8. View All Nodes" << endl;
        cout << "9. Get Size" << endl;
        cout << "10. Reverse Linked List" << endl;
        cout << "11. Search Element in Linked List" << endl;
        cout << "0. Exit" << endl;
        cout << "----------------------------------" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the element to add at beginning: ";
            cin >> element;
            list.addAtBegin(element);
            break;
        case 2:
            cout << "Enter the element to add at end: ";
            cin >> element;
            list.addAtEnd(element);
            break;
        case 3:
            cout << "Enter the position : ";
            cin >> position;
            cout << " Enter element to add: ";
            cin >> element;
            list.addAtPosition(position, element);
            break;

        case 4:
            cout << "Enter the position to update: ";
            cin >> position;
            cout << "Enter the element to update: ";
            cin >> element;
            list.update(element, position);
        case 5:
            list.deleteAtBegin();
            break;
        case 6:
            list.deleteAtEnd();
            break;

        case 7:
            cout << "Enter the position to delete: ";
            cin >> position;
            list.deleteAtPosition(position);

        case 8:
            list.ViewAllNodes();
            break;
        case 9:
            list.getSize();
            break;

        case 10:
            list.reverse();
            break;
        case 11:
            cout << "Enter the element to search: ";
            cin >> element;
            list.search(element);
            break;
        case 0:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid Choice!" << endl;
        }
    } while (choice != 0);
    
}