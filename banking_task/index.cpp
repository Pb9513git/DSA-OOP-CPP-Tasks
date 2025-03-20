#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

class CircularLinkedList {
private:
    Node* tail;

public:   
    CircularLinkedList() {
        tail = nullptr;
    }

    // Insert a new node at the end
    void insertNode(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        if (!tail) {
            tail = newNode;
            tail->next = tail;
        } else {
            newNode->next = tail->next;
            tail->next = newNode;
            tail = newNode;
        }
        cout << "Node inserted successfully!\n";
    }

    // Display the list
    void displayList() {
        if (!tail) {
            cout << "List is empty!\n";
            return;
        }
        Node* temp = tail->next;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != tail->next);
        cout << "(circular)\n";
    }

    // Update a node value
    void updateNode(int oldVal, int newVal) {
        if (!tail) {
            cout << "List is empty!\n";
            return;
        }
        Node* temp = tail->next;
        do {
            if (temp->data == oldVal) {
                temp->data = newVal;
                cout << "Node updated successfully!\n";
                return;
            }
            temp = temp->next;
        } while (temp != tail->next);
        cout << "Value not found in the list!\n";
    }

    // Delete a node
    void deleteNode(int value) {
        if (!tail) {
            cout << "List is empty!\n";
            return;
        }
        Node* curr = tail->next;
        Node* prev = tail;
        do {
            if (curr->data == value) {
                if (curr == tail && curr->next == tail) { // Single node case
                    delete curr;
                    tail = nullptr;
                } else {
                    prev->next = curr->next;
                    if (curr == tail) // If deleting tail, update tail
                        tail = prev;
                    delete curr;
                }
                cout << "Node deleted successfully!\n";
                return;
            }
            prev = curr;
            curr = curr->next;
        } while (curr != tail->next);
        cout << "Value not found in the list!\n";
    }
};

int main() {
    CircularLinkedList cl;
    int choice, value, oldValue;
    
    while (true) {
        cout << "\nCircular Linked List Operations:\n";
        cout << "1. Insert Node\n";
        cout << "2. Display List\n";
        cout << "3. Update Node\n";
        cout << "4. Delete Node\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                cl.insertNode(value);
                break;
            case 2:
                cl.displayList();
                break;
            case 3:
                cout << "Enter value to update: ";
                cin >> oldValue;
                cout << "Enter new value: ";
                cin >> value;
                cl.updateNode(oldValue, value);
                break;
            case 4:
                cout << "Enter value to delete: ";
                cin >> value;
                cl.deleteNode(value);
                break;
            case 5:
                cout << "Exiting program...\n";
                return 0;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
}
