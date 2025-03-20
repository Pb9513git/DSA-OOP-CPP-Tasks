#include <iostream>
using namespace std;

void add();
void sub();
void mul();
void div();
void mod();

main()
{

    int choice;

    do
    {

        cout << endl
             << "Calculator" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Modulous"<<endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            add();
            break;

        case 2:
            sub();
            break;

        case 3:
            mul();
            break;

        case 4:
            div();
            break;
        case 5:
            mod();
            break;

        case 6:
        {
            cout << "Exiting program. Goodbye!\n";
            break;
        }

        default:
        {
            cout << "Invalid choice. Please try again.\n";
            break;
        }
        }
    } while (choice != 6);
}
void add()
{
    float a, b;
    cout << "Enter first number : " ;
    cin >> a;
    cout << "Enter second number : " ;
    cin >> b;
    cout << "Addition of " << a << " and " << b << " is : " << a + b;
}
void sub()
{
    float a, b;
    cout << "Enter first number : " ;
    cin >> a;
    cout << "Enter second number : " ;
    cin >> b;
    cout << "Subtraction of " << a << " and " << b << " is : " << a - b;
}
void mul()
{
    float a, b;
    cout << "Enter first number : " ;
    cin >> a;
    cout << "Enter second number : ";
    cin >> b;
    cout << "Multiplication of " << a << " and " << b << " is : " << a * b;
}
void div()
{
    float a, b;
    cout << "Enter first number : " ;
    cin >> a;
    cout << "Enter second number : " ;
    cin >> b;
    cout << "Division of " << a << " and " << b << " is : " << a / b;
}
void mod()
{
    int a, b;
    cout << "Enter first number : ";
    cin >> a;
    cout << "Enter second number : " ;
    cin >> b;
    cout << "Modulous of " << a << " and " << b << " is : " << a % b;
}