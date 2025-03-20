#include <iostream>
using namespace std;

class BankAccount
{
protected:
    int accNum;
    string accHoldername;
    double balance;

public:
    void createAccount()
    {
        cout << "Enter Account Number: ";
        cin >> accNum;

        cout << "Enter Account Holder Name: ";
        cin >> accHoldername;
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit()
    {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        balance += amount;
        cout << "Deposit successful. New balance: $" << balance << endl;
    }

    void withdraw()
    {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (balance >= amount)
        {
            balance -= amount;
            cout << "Withdrawal successful. New balance: $" << balance << endl;
        }
        else
        {
            cout << "Insufficient funds." << endl;
        }
    }

    void getBalance()
    {
        cout << "Current balance: $" << balance << endl;
    }

    void displayAccountInfo()
    {
        cout << "Account Number: " << accNum << endl;
        cout << "Account Holder Name: " << accHoldername << endl;
        cout << "Current Balance: $" << balance << endl;
    }
};

class SavingsAccount : public BankAccount
{
    double interestRate;

public:
    void calculateInterestRate()
    {
        cout << "Enter interest rate (as a decimal): ";
        cin >> interestRate;
        double interest = balance * interestRate;
        cout << "Interest earned: $" << interest << endl;
    }
};

class CheckingAccount : public BankAccount
{
public:
    void checkOverdraft()
    {
        cout << "Checking account overdraft limit exceeded. Please contact the bank for assistance." << endl;
    }
};

class FixedDepositAccount : public BankAccount
{
    double timePeriod;

public:
    void calculateInterest()
    {
        double interestRate = 0.01;
        cout << "Enter time period (in years): ";
        cin >> timePeriod;
        double interest = balance * interestRate * timePeriod;
        cout << "Interest earned: $" << interest << endl;
    }
};

int main()
{
    BankAccount ba;
    cout << "Creating a general bank account..." << endl;
    ba.createAccount();
    ba.displayAccountInfo();
    ba.deposit();
    ba.withdraw();
    ba.getBalance();

    SavingsAccount sa;
    cout << "\nCreating a savings account..." << endl;
    sa.createAccount();
    sa.calculateInterestRate();
    sa.displayAccountInfo();

    CheckingAccount ca;
    cout << "\nCreating a checking account..." << endl;
    ca.createAccount();
    ca.checkOverdraft();

    FixedDepositAccount fd;
    cout << "\nCreating a fixed deposit account..." << endl;
    fd.createAccount();
    fd.calculateInterest();
    fd.displayAccountInfo();

    return 0;
}
