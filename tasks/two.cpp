#include <iostream>
#include <string>
using namespace std;

class Hotel
{
public:
    int hotel_id;
    string hotel_name;
    string hotel_city;
    int hotel_staff_quantity;
    int hotel_rooms_quantity;
    string hotel_level;

    void setDetails()
    {
        cout << "Enter Hotel Id:";
        cin >> hotel_id;
        cout << "Enter Hotel Name:";
        cin >> hotel_name;
        cout << "Enter Hotel City:";
        cin >> hotel_city;
        cout << "Enter Staff Quantity:";
        cin >> hotel_staff_quantity;
        cout << "Enter Rooms Quantity:";
        cin >> hotel_rooms_quantity;
        cout << "Enter Hotel Level ( 3/4/5 Stars ):";
        cin >> hotel_level;
    }

    void displayDetails()
    {
        cout << "--------------------------------------" << endl;
        cout << "Hotel ID: " << hotel_id << endl;
        cout << "Name: " << hotel_name << endl;
        cout << "City: " << hotel_city << endl;
        cout << "Staff Quantity: " << hotel_staff_quantity << endl;
        cout << "Rooms Quantity: " << hotel_rooms_quantity << endl;
        cout << "Hotel Level: " << hotel_level << endl;
        cout << "--------------------------------------" << endl;
    }
};

int main()
{

    Hotel hotels[4];

    for (int i = 0; i < 4; i++)
    {
        cout << "Enter Details for Hotel " << i + 1 << ":" << endl;

        hotels[i].setDetails();
    }
    cout << "Hotel Records:\n";
    for (int i = 0; i < 4; i++)
    {
        cout << "Hotel " << i + 1 << ":" << endl;
        hotels[i].displayDetails();
    }

    return 0;
}
