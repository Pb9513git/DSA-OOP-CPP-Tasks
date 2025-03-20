#include <iostream>
// #include <vector>
#include <algorithm>
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
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[left + i];
        R[i] = arr[mid + 1 + i];
    }
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int partition(int arrr[], int low, int high)
{
    int pivot = arrr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)
    {
        if (arrr[j] < pivot)
        {
            i++;
            swap(arrr[i], arrr[j]);
        }
    }
    swap(arrr[i + 1], arrr[high]);
    return (i + 1);
}
void quickSort(int arrr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arrr, low, high);
        quickSort(arrr, low, pi - 1);
        quickSort(arrr, pi + 1, high);
    }
}
int binarySearch(int arr[], int size, int target)
{
    sort(arr, arr + size);
    int left = 0, right = size - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}
main()
{
    LinkedList list;
    int arr[100];
    int choice, value, pos, n;
    do
    {
        cout << endl
             << "--- MAIN MENU ---" << endl;
        cout << "1. Array Operations" << endl;
        cout << "2. Linked List Operations" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            while (true)
            {
                cout << endl
                     << "--- ARRAY MENU ---" << endl;
                cout << "1. Enter an Array" << endl;
                cout << "2. Sort using Merge Sort" << endl;
                cout << "3. Sort using Quick Sort" << endl;
                cout << "4. Search using Binary Search" << endl;
                cout << "5. Go Back to Main Menu" << endl;
                cout << "Enter choice: ";
                cin >> choice;
                if (choice == 5)
                {
                    break;
                }
                switch (choice)
                {
                case 1:
                {
                    cout << "Enter number of elements: ";
                    cin >> n;

                    cout << "Enter " << n << " elements: ";
                    for (int i = 0; i < n; i++)
                    {
                        cin >> arr[i];
                    }

                    break;
                }
                case 2:
                {
                    mergeSort(arr, 0, n - 1);
                    cout << "Sorted Array: ";
                    printArray(arr, n);
                    break;
                }
                case 3:
                {
                    quickSort(arr, 0, n - 1);
                    cout << "Sorted Array: ";
                    printArray(arr, n);
                    cout << endl;
                    break;
                }
                case 4:
                {
                    cout << "Enter value to search: ";
                    cin >> value;
                    quickSort(arr, 0, n - 1);
                    cout << "Sorted array before searching: ";
                    printArray(arr, n);
                    int index = binarySearch(arr, n, value);
                    if (index != -1)
                        cout << "Value found at index " << index << endl;
                    else
                        cout << "Value not found.\n";
                    break;
                }
                default:
                    cout << "Invalid choice! Try again." << endl;
                }
            }
        }
        else if (choice == 2)
        {
            while (true)
            {
                cout << endl
                     << "--- LINKED LIST MENU ---" << endl;
                cout << "1. Insert at Beginning" << endl
                     << "2. Insert at End" << endl
                     << "3. Insert at Position" << endl
                     << "4. Delete from Beginning" << endl
                     << "5. Delete from End" << endl
                     << "6. Delete from Position" << endl
                     << "7. Display List" << endl
                     << "8. Go Back to Main Menu" << endl
                     << "Enter choice: ";
                cin >> choice;

                if (choice == 8)
                {
                    break;
                }
                switch (choice)
                {
                case 1:
                {
                    cout << "Enter value: ";
                    cin >> value;
                    list.addAtBegin(value);
                    break;
                }
                case 2:
                {
                    cout << "Enter value: ";
                    cin >> value;
                    list.addAtEnd(value);
                    break;
                }
                case 3:
                {
                    cout << "Enter value: ";
                    cin >> value;
                    cout << "Enter position: ";
                    cin >> pos;
                    list.addAtPosition(pos, value);
                    break;
                }
                case 4:
                {
                    list.deleteAtBegin();
                    break;
                }
                case 5:
                {
                    list.deleteAtEnd();
                    break;
                }
                case 6:
                {
                    cout << "Enter position: ";
                    cin >> pos;
                    list.deleteAtPosition(pos);
                    break;
                }
                case 7:
                {
                    list.ViewAllNodes();
                    break;
                }
                default:
                    cout << "Invalid choice! Try again.\n";
                }
            }
        }
        else if (choice == 3)
        {
            cout << "Exiting...\n";
            break;
        }
        else
        {
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 3);
}