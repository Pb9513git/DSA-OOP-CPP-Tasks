#include <iostream>
#include <string>
using namespace std;

class Item {
private:
    int item_number;
    string item_name;
    int quantity;
    double price;
    double discount;

public:
    // Function to set item details
    void setItemDetails() {
        cout << "Enter Item Number: ";
        cin >> item_number;
        cin.ignore();
        cout << "Enter Item Name: ";
        getline(cin, item_name);
        cout << "Enter Quantity: ";
        cin >> quantity;
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Discount (%): ";
        cin >> discount;
    }

    // Function to display item details
    void displayItemDetails() {
        cout << "--------------------------------------" << endl;
        cout << "Item Number: " << item_number << endl;
        cout << "Item Name: " << item_name << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Price: $" << price << endl;
        cout << "Discount: " << discount << "%" << endl;
        cout << "--------------------------------------" << endl;
    }

    // Function to search for an item by number
    int getItemNumber() {
        return item_number;
    }
};

// Function to verify user credentials
bool verifyUser() {
    string user_id, password;
    cout << "\nEnter User ID: ";
    cin >> user_id;
    cout << "Enter Password: ";
    cin >> password;

    if (user_id == "admin" && password == "1234") {
        cout << "Access Granted!\n";
        return true;
    } else {
        cout << "Invalid Credentials! Access Denied.\n";
        return false;
    }
}

int main() {
    if (!verifyUser()) {
        return 0;
    }

    int n;
    cout << "Enter number of items: ";
    cin >> n;

    Item items[n];

    // Input item details
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Item " << i + 1 << ":" << endl;
        items[i].setItemDetails();
    }

    // Display all item details
    cout << "\nAll Item Records:\n";
    for (int i = 0; i < n; i++) {
        items[i].displayItemDetails();
    }

    // Search item by number
    int search_number;
    cout << "\nEnter Item Number to search: ";
    cin >> search_number;
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (items[i].getItemNumber() == search_number) {
            cout << "\nItem Found:\n";
            items[i].displayItemDetails();
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "\nItem with Number " << search_number << " not found." << endl;
    }

    return 0;
}
