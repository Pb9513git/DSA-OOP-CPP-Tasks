#include <iostream>
#include <string>
using namespace std;

class Employee
{

    int emp_id;
    string emp_name;
    int emp_age;
    string emp_role;
    double emp_salary;
    string emp_city;
    int emp_experience;
    string emp_company_name;

public:
    void setDetails()
    {
        cout << "Enter employee id :";
        cin >> emp_id;
        cout << "Enter employee name :";
        cin >> emp_name;
        cout << "Enter employee age :";
        cin >> emp_age;
        cout << "Enter employee role :";
        cin >> emp_role;
        cout << "Enter employee salary :";
        cin >> emp_salary;
        cout << "Enter employee city :";
        cin >> emp_city;
        cout << "Enter employee experience (in years) :";
        cin >> emp_experience;
        cout << "Enter employee company name :";
        cin >> emp_company_name;
    }

    void displayDetails()
    {
        cout << "--------------------------------------" << endl;
        cout << "Employee ID: " << emp_id << endl;
        cout << "Name: " << emp_name << endl;
        cout << "Age: " << emp_age << endl;
        cout << "Role: " << emp_role << endl;
        cout << "Salary: $" << emp_salary << endl;
        cout << "City: " << emp_city << endl;
        cout << "Experience: " << emp_experience << " years" << endl;
        cout << "Company: " << emp_company_name << endl;
        cout << "--------------------------------------" << endl;
    }
};

int main()
{

    Employee emp[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter details for Employee  " << i + 1 << ":" << endl;
        emp[i].setDetails();
        cout << endl;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "Records for Employee " << i + 1 << " are: " << endl;
        emp[i].displayDetails();
    }

    return 0;
}
