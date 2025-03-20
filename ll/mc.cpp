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
        this->next = nullptr;
    }
};

class LinkedList
{
public:
    Node *head;
    int size;

    LinkedList()
    {
        this->head = nullptr;
        this->size = 0;
    }
    void addAtBegin(int data)
    {
        Node *newnode = new Node(data);
        newnode->next = this->head;
        this->head = newnode;
        this->size++;
        cout << "Node added at the beginning successfully!" << endl;
    }
    void addAtEnd(int data){
        Node *newnode = new Node(data);
        if (this->head == nullptr)
        {
            this->head = newnode;
        }
        else
        {
            Node *temp = this->head;
            while (temp->next!= nullptr)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
        this->size++;
        cout << "Node added at the end successfully!" << endl;
    }
   
    void addAtPosition(int data,int position){
        if (position < 0 || position > this->size)
        {
            cout << "Invalid position!" << endl;
            return;
        }
        if (position == 0){
            addAtBegin(data);
        }
        else{
            Node *newnode = new Node(data);
            Node *temp = this->head;
            for (int i = 0; i < position - 1; i++)
            {
                temp = temp->next;
            }
            newnode->next = temp->next;
            temp->next = newnode;
            this->size++;
            cout << "Node added at the position successfully!" << endl;
        }

        
    }
    void display()
    {
        Node *temp = this->head;
        cout << "Linked List: ";
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void update(int position,int element){
        if (position < 0 || position >= this->size){
            cout << "Invalid position!" << endl;
            return;
        }
        Node *temp = this->head;
        for (int i = 0; i < position; i++){
            temp = temp->next;

        }
        temp->data = element;
        cout << "Element updated successfully at the position!" << endl;


    }
    void deleteAtBegin(){
        if (this->head == nullptr){
            cout << "List is empty!" << endl;
            return;
        }
        Node *temp = this->head;
        this->head = this->head->next;
        delete temp;
        this->size--;
        cout << "Node deleted successfully at the beginning!" << endl;
    }
    void deleteAtEnd(){
        if (this->head == nullptr){
            cout << "List is empty!" << endl;
            return;
        }
        if (this->head->next == nullptr){
            delete this->head;
            this->head = nullptr;
            this->size--;
            cout << "Node deleted successfully at the end!" << endl;
            return;
        }
        Node *temp = this->head;
        while (temp->next->next!= nullptr){
            temp = temp->next;
        }
        delete temp->next;
        temp->next = nullptr;
        this->size--;
        cout << "Node deleted successfully at the end!" << endl;
    }
    void deleteAtPosition(int position){
        if (position < 0 || position >= this->size){
            cout << "Invalid position!" << endl;
            return;
        }
        if (position == 0){
            deleteAtBegin();
        }
        else{
            Node *temp = this->head;
            for (int i = 0; i < position - 1; i++){
                temp = temp->next;
            }
            Node *del = temp->next;
            temp->next = temp->next->next;
            delete del;
            this->size--;
            cout << "Node deleted successfully at the position!" << endl;
        }
    }

   
};
main()
{
    LinkedList list;
    list.addAtBegin(5);
    list.addAtBegin(10);
    list.addAtBegin(15);
    list.addAtEnd(20);
    list.addAtEnd(30);
    list.display();
    return 0;
}