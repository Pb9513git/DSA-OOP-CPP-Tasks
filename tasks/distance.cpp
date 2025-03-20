#include <iostream>
using namespace std;

class Distance {
public:
    int feet;
    int inches;

    // Function to input distance
    void setDistance() {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches: ";
        cin >> inches;
    }

    // Function to add two distances
    void addDistance(int f, int i) {
        feet += f;
        inches += i;

        // Convert inches to feet if 12 or more
        if (inches >= 12) {
            feet += inches / 12;
            inches %= 12;
        }
    }

    // Function to display distance
    void displayDistance() {
        cout << feet << " feet " << inches << " inch" << endl;
    }
};

int main() {
    Distance d1, d2;
    
    // Input distances
    cout << "Enter first distance:\n";
    d1.setDistance();
    cout << "Enter second distance:\n";
    d2.setDistance();
    
    // Add distances
    d1.addDistance(d2.feet, d2.inches);
    
    // Display result
    cout << "Sum of distances: ";
    d1.displayDistance();
    
    return 0;
}
