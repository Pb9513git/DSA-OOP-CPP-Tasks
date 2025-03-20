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
    void search(int element)
    {
        Node *temp = this->head;
        int count = 0;
        while (temp != NULL)
        {
            if (temp->data == element)
            {
                count++;
            }
            temp = temp->next;
        }
        cout << "Element found " << count << " times." << endl;
        if (count == 0)
        {
            cout << "Element not found in the linked list.." << endl;
        }
    }
    void deleteByValue(int element)
    {
        if (this->head == NULL)
        {
            cout << "List is empty!" << endl;
            return;
        }
        if (this->head->data == element)
        {
            Node *temp = this->head;
            this->head = this->head->next;
            delete temp;
            this->size--;
            cout << "Element deleted successfully .." << endl;
            return;
        }

        Node *current = this->head;
        while (current->next != NULL && current->next->data != element)
        {
            current = current->next;
        }
        if (current->next == NULL)
        {
            cout << "Element not found in the linked list.." << endl;
            return;
        }
        Node *temp = current->next;
        current->next = current->next->next;
        delete temp;
        this->size--;
        cout << "Element deleted successfully from the linked list.." << endl;
    }
    void display()
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
    void reverse()
    {
        Node *current = this->head, *prev = NULL, *nextNode;
        while (current != NULL)
        {
            nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }
        this->head = prev;
        cout << "Linked List reversed successfully.." << endl;
        cout << "Reversed Linked List: ";
        while (this->head != NULL)
        {
            cout << " --> [" << this->head->data << "]";
            this->head = this->head->next;
        }
        this->head=prev;
        cout << endl;
    }
};
main()
{
    int choice, element;
    LinkedList list;
    do
    {
        cout << "1. Add at Begining" << endl;
        cout << "2. Search" << endl;
        cout << "3. Delete by Value" << endl;
        cout << "4. Display" << endl;
        cout << "5. Reverse" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the element to add : ";
            cin >> element;
            list.addAtBegin(element);
            break;
        case 2:
            cout << "Enter the element to search: ";
            cin >> element;
            list.search(element);
            break;
        case 3:
            cout << "Enter the element to delete: ";
            cin >> element;
            list.deleteByValue(element);
            break;

            case 4:
                list.display();
                break;

        case 5:
            list.reverse();
            break;
        case 0:
            cout << "Exiting the program..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 0);
}