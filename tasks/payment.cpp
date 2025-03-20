#include <iostream>
#include <string>
using namespace std;

class Payment {
public:
    // Paying a specific amount
    void pay(double amount) {
        cout << "Paid: $" << amount << endl;
    }

    // Paying a specific amount using a specified payment method
    void pay(double amount, string paymentMethod) {
        cout << "Paid: $" << amount << " using " << paymentMethod << endl;
    }

    // Paying a specific amount using a specified payment method and currency
    void pay(double amount, string paymentMethod, string currency) {
        cout << "Paid: " << amount << " " << currency << " using " << paymentMethod << endl;
    }
};

int main() {
    Payment myPayment;
    double amount;
    string paymentMethod, currency;
    int choice;
    
    cout << "Choose a payment option:\n";
    cout << "1. Pay a specific amount\n";
    cout << "2. Pay using a specific method\n";
    cout << "3. Pay using a specific method and currency\n";
    cout << "Enter your choice: ";
    cin >> choice;
    cin.ignore();
    
    switch(choice) {
        case 1:
            cout << "Enter amount: ";
            cin >> amount;
            myPayment.pay(amount);
            break;
        case 2:
            cout << "Enter amount: ";
            cin >> amount;
            cin.ignore();
            cout << "Enter payment method (Credit Card/Cash/etc.): ";
            getline(cin, paymentMethod);
            myPayment.pay(amount, paymentMethod);
            break;
        case 3:
            cout << "Enter amount: ";
            cin >> amount;
            cin.ignore();
            cout << "Enter payment method (Credit Card/Cash/etc.): ";
            getline(cin, paymentMethod);
            cout << "Enter currency (USD/EUR/etc.): ";
            getline(cin, currency);
            myPayment.pay(amount, paymentMethod, currency);
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    
    return 0;
}
