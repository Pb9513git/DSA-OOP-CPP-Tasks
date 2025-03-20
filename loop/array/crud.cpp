#include <iostream>
using namespace std;

int main()
{
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int size = 0;
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
        {
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
            break;
        }

        case 2:
        {
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
            break;
        }

        case 3:
        {
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
            break;
        }

        case 4:
        {
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
            break;
        }

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

