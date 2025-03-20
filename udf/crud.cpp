#include <iostream>
using namespace std;
const int MAX_SIZE = 100;
int arr[MAX_SIZE];
int size = 0;
void create();
void display();
void update();
void del();

int main()
{
    // Current number of elements in the array
    int choice;

    do
    {
        // Display menu
        cout << "\n1D Array CRUD Operations:\n";
        cout << "1. Create (Add Elements)\n";
        cout << "2. Read (Display Elements)\n";
        cout << "3. Update an Element\n";
        cout << "4. Delete an Element\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            create();
            break;

        case 2:
            display();
            break;

        case 3:
            update();
            break;

        case 4:
            del();
            break;

        case 5:
        {
            cout << "Exiting program. Goodbye!\n";
            break;
        }

        default:
        {
            cout << "Invalid choice. Please try again.\n";
            break;
        }
        }
    } while (choice != 5);

    return 0;
}
void create()
{ // Create (Add Elements)
    if (size >= MAX_SIZE)
    {
        cout << "Array is full. Cannot add more elements.\n";
    }
    else
    {
        int element;
        cout << "Enter the element to add: ";
        cin >> element;
        arr[size] = element;
        size++;
        cout << "Element added successfully.\n";
    }
}
void display()
{ // Read (Display Elements)
    if (size == 0)
    {
        cout << "Array is empty.\n";
    }
    else
    {
        cout << "Array elements: ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
}
void update()
{ // Update an Element
    if (size == 0)
    {
        cout << "Array is empty. Cannot update elements.\n";
    }
    else
    {
        int pos, newValue;
        cout << "Enter the position (1 to " << size << ") to update: ";
        cin >> pos;
        if (pos < 1 || pos > size)
        {
            cout << "Invalid position.\n";
        }
        else
        {
            cout << "Enter the new value: ";
            cin >> newValue;
            arr[pos - 1] = newValue;
            cout << "Element updated successfully.\n";
        }
    }
}
void del()
{ // Delete an Element
    if (size == 0)
    {
        cout << "Array is empty. Cannot delete elements.\n";
    }
    else
    {
        int pos;
        cout << "Enter the position (1 to " << size << ") to delete: ";
        cin >> pos;
        if (pos < 1 || pos > size)
        {
            cout << "Invalid position.\n";
        }
        else
        {
            for (int i = pos - 1; i < size - 1; i++)
            {
                arr[i] = arr[i + 1];
            }
            size--;
            cout << "Element deleted successfully.\n";
        }
    }
}
