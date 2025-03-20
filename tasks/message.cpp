#include <iostream>
#include <string>
using namespace std;

class Message {
public:
    // Writing a simple message
    void write(string message) {
        cout << "Message: " << message << endl;
    }

    // Writing a message to a specific recipient
    void write(string message, string recipient) {
        cout << "Message to " << recipient << ": " << message << endl;
    }

    // Writing a message to a recipient through a specific medium
    void write(string message, string recipient, string medium) {
        cout << "Sending message to " << recipient << " via " << medium << ": " << message << endl;
    }
};

int main() {
    Message myMessage;
    string message, recipient, medium;
    int choice;
    
    cout << "Choose an option:\n";
    cout << "1. Write a simple message\n";
    cout << "2. Write a message to a recipient\n";
    cout << "3. Write a message to a recipient via a specific medium\n";
    cout << "Enter your choice: ";
    cin >> choice;
    cin.ignore();
    
    switch(choice) {
        case 1:
            cout << "Enter message: ";
            getline(cin, message);
            myMessage.write(message);
            break;
        case 2:
            cout << "Enter message: ";
            getline(cin, message);
            cout << "Enter recipient: ";
            getline(cin, recipient);
            myMessage.write(message, recipient);
            break;
        case 3:
            cout << "Enter message: ";
            getline(cin, message);
            cout << "Enter recipient: ";
            getline(cin, recipient);
            cout << "Enter medium (Email/SMS/etc.): ";
            getline(cin, medium);
            myMessage.write(message, recipient, medium);
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    
    return 0;
}
