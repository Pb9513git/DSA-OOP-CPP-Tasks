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

    void insert(int value)
    {
        node *newNode = new node(value);
        node *temp = this;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void insertAtEnd(int value)
    {
        node *newNode = new node(value);
        node *temp = this;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void display()
    {
        node *temp = this;
        cout << "Linked List: " << endl;
        // cout << "---Data---|---Next---| " << endl;
        cout << "Head";

        while (temp != nullptr)
        {
            cout << " --> [" << temp->data << "]";
            temp = temp->next;
        }
        cout << " --> NULL" << endl;
        cout << endl;
    }
};

int main()
{
    int n, value;

    cout << "Enter the number of elements: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "No elements to insert." << endl;
        return 0;
    }

    cout << "Enter value 1: ";
    cin >> value;
    node *head = new node(value);

    for (int i = 1; i < n; i++)
    {
        cout << "Enter value " << (i + 1) << ": ";
        cin >> value;
        head->insert(value);
    }

    head->display();
    return 0;
}
