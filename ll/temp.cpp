#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
    void insertNode(node *&head, int value)
    {
        node *newNode = new node(value);
        if (head == nullptr)
        {
            head = newNode;
            return;
        }
        node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void displayList(node *head)
    {
        node *temp = head;
        cout << "Linked List: " << endl;
        cout << "---Data---|---Next---| " << endl;
        while (temp != nullptr)
        {
            // cout << temp->data << " ";
            cout << "|  " << temp->data << "      | " << temp->next << " |" << endl;
            temp = temp->next;
        }
        cout << endl;
    }
};
main()
{
    node *head = nullptr;
    head->insertNode(head, 1);
    head->insertNode(head, 2);
    head->insertNode(head, 3);
    head->displayList(head);
}
