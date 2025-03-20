#include <iostream>
#include <string>
using namespace std;

class Train {
private:
    int train_number;
    string train_name;
    string source;
    string destination;
    string train_time;

public:
    // Function to set train details
    void setTrainDetails() {
        cout << "Enter Train Number: ";
        cin >> train_number;
        cin.ignore();
        cout << "Enter Train Name: ";
        getline(cin, train_name);
        cout << "Enter Source Station: ";
        getline(cin, source);
        cout << "Enter Destination Station: ";
        getline(cin, destination);
        cout << "Enter Train Time: ";
        getline(cin, train_time);
    }

    // Function to display train details
    void displayTrainDetails() {
        cout << "--------------------------------------" << endl;
        cout << "Train Number: " << train_number << endl;
        cout << "Train Name: " << train_name << endl;
        cout << "Source: " << source << endl;
        cout << "Destination: " << destination << endl;
        cout << "Train Time: " << train_time << endl;
        cout << "--------------------------------------" << endl;
    }

    // Function to search for a train by number
    int getTrainNumber() {
        return train_number;
    }
};

int main() {
    int n = 3; // Minimum of 3 train records
    Train trains[n];

    // Input train details
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Train " << i + 1 << ":" << endl;
        trains[i].setTrainDetails();
    }

    // Display all train details
    cout << "\nAll Train Records:\n";
    for (int i = 0; i < n; i++) {
        trains[i].displayTrainDetails();
    }

    // Search train by number
    int search_number;
    cout << "\nEnter Train Number to search: ";
    cin >> search_number;
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (trains[i].getTrainNumber() == search_number) {
            cout << "\nTrain Found:\n";
            trains[i].displayTrainDetails();
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "\nTrain with Number " << search_number << " not found." << endl;
    }

    return 0;
}
