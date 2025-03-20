#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Collection
{
    vector<T> numbers;

public:
    void addElement(T num)
    {
        numbers.push_back(num);
    }
    void updateElement(int index, T element)
    {
        if (index >= 0 && index < numbers.size())
        {
            numbers[index] = element;
        }
        else
        {
            cout << "Invalid index" << endl;
        }
    }
    void deleteElement(int index)
    {
        if (index >= 0 && index < numbers.size())
        {
            numbers.erase(numbers.begin() + index);
        }
        else
        {
            cout << "Invalid index" << endl;
        }
    }
    void displayElements()
    {
        for (T num : numbers)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    void getSize()
    {
        cout << "Size of collection: " << numbers.size() << endl;
    }
};

int main()
{
    Collection<int> intCollection;
    Collection<double> doubleCollection;
    int choice, index;
    char type;

    cout << "Choose type: (i)nt or (d)ouble: ";
    cin >> type;

    do
    {
        cout << endl
             << "1. Add element" << endl
             << "2. Update element" << endl
             << "3. Delete element" << endl
             << "4. Display elements" << endl
             << "5. Get size" << endl
             << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (type == 'i')
        {
            int element;
            switch (choice)
            {
            case 1:
                cout << "Enter element to add: ";
                cin >> element;
                intCollection.addElement(element);
                break;
            case 2:
                cout << "Enter index to update: ";
                cin >> index;
                cout << "Enter new element: ";
                cin >> element;
                intCollection.updateElement(index, element);
                break;
            case 3:
                cout << "Enter index to delete: ";
                cin >> index;
                intCollection.deleteElement(index);
                break;
            case 4:
                intCollection.displayElements();
                break;
            case 5:
                intCollection.getSize();
                break;
            case 0:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
            }
        }
        else if (type == 'd')
        {
            double element;
            switch (choice)
            {
            case 1:
                cout << "Enter element to add: ";
                cin >> element;
                doubleCollection.addElement(element);
                break;
            case 2:
                cout << "Enter index to update: ";
                cin >> index;
                cout << "Enter new element: ";
                cin >> element;
                doubleCollection.updateElement(index, element);
                break;
            case 3:
                cout << "Enter index to delete: ";
                cin >> index;
                doubleCollection.deleteElement(index);
                break;
            case 4:
                doubleCollection.displayElements();
                break;
            case 5:
                doubleCollection.getSize();
                break;
            case 0:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
            }
        }
        else
        {
            cout << "Invalid type selection!" << endl;
            break;
        }
    } while (choice != 0);

    return 0;
}
