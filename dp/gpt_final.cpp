#include <iostream>
#include <vector>

using namespace std;

// Node structure for Linked List
struct Node {
    int data;
    Node* next;
};

// Linked List class
class LinkedList {
public:
    Node* head;

    LinkedList() { head = nullptr; }

    // Insert at the end
    void insert(int value) {
        Node* newNode = new Node{value, nullptr};
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) temp = temp->next;
            temp->next = newNode;
        }
    }

    // Delete a node
    void remove(int value) {
        if (!head) return;
        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* temp = head;
        while (temp->next && temp->next->data != value) temp = temp->next;
        if (temp->next) {
            Node* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
        }
    }

    // Display the linked list
    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

// Merge Sort - Helper function
void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1, n2 = right - mid;
    vector<int> L(n1), R(n2);
    
    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int i = 0; i < n2; i++) R[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];
}

// Merge Sort - Main function
void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

// Quick Sort - Partition function
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) swap(arr[++i], arr[j]);
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Quick Sort - Main function
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Binary Search function
int binarySearch(vector<int>& arr, int left, int right, int key) {
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key) return mid;
        if (arr[mid] < key) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

// Menu-driven program
int main() {
    LinkedList list;
    vector<int> arr;
    int choice, value;

    while (true) {
        cout << "\n--- MENU ---\n";
        cout << "1. Insert into Linked List\n";
        cout << "2. Delete from Linked List\n";
        cout << "3. Display Linked List\n";
        cout << "4. Sort an array (Merge Sort)\n";
        cout << "5. Sort an array (Quick Sort)\n";
        cout << "6. Search in array (Binary Search)\n";
        cout << "7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                list.insert(value);
                break;

            case 2:
                cout << "Enter value to delete: ";
                cin >> value;
                list.remove(value);
                break;

            case 3:
                cout << "Linked List: ";
                list.display();
                break;

            case 4:
                arr.clear();
                cout << "Enter array size: ";
                int n;
                cin >> n;
                cout << "Enter " << n << " elements: ";
                for (int i = 0; i < n; i++) {
                    cin >> value;
                    arr.push_back(value);
                }
                mergeSort(arr, 0, n - 1);
                cout << "Sorted Array (Merge Sort): ";
                for (int num : arr) cout << num << " ";
                cout << endl;
                break;

            case 5:
                arr.clear();
                cout << "Enter array size: ";
                cin >> n;
                cout << "Enter " << n << " elements: ";
                for (int i = 0; i < n; i++) {
                    cin >> value;
                    arr.push_back(value);
                }
                quickSort(arr, 0, n - 1);
                cout << "Sorted Array (Quick Sort): ";
                for (int num : arr) cout << num << " ";
                cout << endl;
                break;

            case 6:
                cout << "Enter number to search: ";
                cin >> value;
                int pos;
                pos = binarySearch(arr, 0, arr.size() - 1, value);
                if (pos != -1)
                    cout << "Found at index: " << pos << endl;
                else
                    cout << "Not found in array.\n";
                break;

            case 7:
                cout << "Exiting...\n";
                return 0;

            default:
                cout << "Invalid choice! Try again.\n";
        }
    }
}
