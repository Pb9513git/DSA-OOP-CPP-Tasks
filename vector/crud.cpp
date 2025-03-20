#include <iostream>
#include <vector>
using namespace std;
class collection
{
    vector<int> numbers;

public:
    void addElement(int num)
    {
        numbers.push_back(num);
    }
    void updateElement(int index, int element)
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
        for (int num : numbers)
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
main()
{
    collection c;
    int choice, element, index;
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
        switch (choice)
        {
        case 1:
            cout << "Enter element to add: ";
            cin >> element;
            c.addElement(element);
            break;
        case 2:
            cout << "Enter index to update: ";
            cin >> index;
            cout << "Enter new element: ";
            cin >> element;
            c.updateElement(index, element);
            break;
        case 3:
            cout << "Enter index to delete: ";
            cin >> index;
            c.deleteElement(index);
            break;
        case 4:
            c.displayElements();
            break;
        case 5:
            c.getSize();
            break;
        case 0:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
        }
    } while (choice != 0);
}