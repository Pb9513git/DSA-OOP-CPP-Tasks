#include <iostream>
#include <string>
using namespace std;

class FastFoodCafe {
private:
    int cafe_id;
    string cafe_name;
    string cafe_type;
    string cafe_rating;
    string cafe_location;
    int cafe_establish_year;
    int cafe_staff_quantity;

public:
    // Default Constructor
    FastFoodCafe() {
        cafe_id = 0;
        cafe_name = "Unknown";
        cafe_type = "Unknown";
        cafe_rating = "Unknown";
        cafe_location = "Unknown";
        cafe_establish_year = 0;
        cafe_staff_quantity = 0;
    }

    // Function to set cafe details
    void setCafeDetails() {
        cout << "Enter Cafe ID: ";
        cin >> cafe_id;
        cin.ignore();
        cout << "Enter Cafe Name: ";
        getline(cin, cafe_name);
        cout << "Enter Cafe Type (Rooftop/Normal): ";
        getline(cin, cafe_type);
        cout << "Enter Cafe Rating (1 Star - 5 Star): ";
        getline(cin, cafe_rating);
        cout << "Enter Cafe Location (City Name): ";
        getline(cin, cafe_location);
        cout << "Enter Establishment Year: ";
        cin >> cafe_establish_year;
        cout << "Enter Staff Quantity: ";
        cin >> cafe_staff_quantity;
    }

    // Function to display cafe details
    void displayCafeDetails() {
        cout << "--------------------------------------" << endl;
        cout << "Cafe ID: " << cafe_id << endl;
        cout << "Cafe Name: " << cafe_name << endl;
        cout << "Cafe Type: " << cafe_type << endl;
        cout << "Cafe Rating: " << cafe_rating << endl;
        cout << "Location: " << cafe_location << endl;
        cout << "Established Year: " << cafe_establish_year << endl;
        cout << "Staff Quantity: " << cafe_staff_quantity << endl;
        cout << "--------------------------------------" << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of Fast Food Cafes: ";
    cin >> n;

    FastFoodCafe cafes[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for cafe " << i + 1 << ":" << endl;
        cafes[i].setCafeDetails();
    }

    cout << "\nFast Food Cafes Information:\n";
    for (int i = 0; i < n; i++) {
        cafes[i].displayCafeDetails();
    }

    return 0;
}
