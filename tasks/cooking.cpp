#include <iostream>
#include <string>
using namespace std;

class Cooking {
public:
 
    void cook(string dishName) {
        cout << "Cooking " << dishName << "..." << endl;
    }

   
    void cook(string dishName, int servings) {
        cout << "Cooking " << dishName << " for " << servings << " servings..." << endl;
    }

   
    void cook(string dishName, string ingredient) {
        cout << "Cooking " << dishName << " with " << ingredient << "..." << endl;
    }
};

int main() {
    Cooking myCook;
    string dishName, ingredient;
    int servings;
    int choice;
    
    cout << "Choose an option:\n";
    cout << "1. Cook a dish\n";
    cout << "2. Cook a dish with servings\n";
    cout << "3. Cook a dish with a specific ingredient\n";
    cout << "Enter your choice: ";
    cin >> choice;
 
    
    switch(choice) {
        case 1:
            cout << "Enter dish name: ";
            cin>>dishName;
            myCook.cook(dishName);
            break;
        case 2:
            cout << "Enter dish name: ";
           cin>>dishName;
            cout << "Enter number of servings: ";
            cin >> servings;
            myCook.cook(dishName, servings);
            break;
        case 3:
            cout << "Enter dish name: ";
            cin>>dishName;
            cout << "Enter ingredient: ";
            cin>>ingredient;
            myCook.cook(dishName, ingredient);
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    
    return 0;
}
