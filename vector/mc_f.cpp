#include <iostream>
#include <vector>
using namespace std;

template <typename T, typename U>
class Student
{
private:
    T id;
    U name;

public:
    Student(T id, U name) : id(id), name(name) {}

    void display()
    {
        cout << "ID: " << id << ", Name: " << name << endl;
    }

    T getId()
    {
        return id;
    }
};

template <typename T, typename U>
class StudentManager
{
private:
    vector<Student<T, U>> students;

public:
    void addStudent()
    {
        T id;
        U name;
        cout << "Enter Student ID: ";
        cin >> id;
        cout << "Enter Student Name: ";
        cin >> name;

        Student<T, U> student(id, name);
        students.push_back(student);
        cout << "Student added successfully." << endl;
    }

    void displayAllStudents()
    {
        if (students.empty())
        {
            cout << "No students available." << endl;
            return;
        }
        cout << "Student List:" << endl;
        for (int i = 0; i < students.size(); i++)
        {
            students[i].display();
        }
    }

    void removeStudentById()
    {
        T id;
        cout << "Enter Student ID to remove: ";
        cin >> id;

        for (int i = 0; i < students.size(); i++)
        {
            if (students[i].getId() == id)
            {
                students.erase(students.begin() + i);
                cout << "Student with ID " << id << " removed." << endl;
                return;
            }
        }
        cout << "Student with ID " << id << " not found." << endl;
    }

    void searchStudentById()
    {
        T id;
        cout << "Enter Student ID to search: ";
        cin >> id;

        for (int i = 0; i < students.size(); i++)
        {
            if (students[i].getId() == id)
            {
                cout << "Student Found:" << endl;
                students[i].display();
                return;
            }
        }
        cout << "Student with ID " << id << " not found." << endl;
    }
};

int main()
{
    StudentManager<int, string> st;
    int choice;

    do
    {
        cout << endl
             << "Student Management System" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display All Students" << endl;
        cout << "3. Remove Student by ID" << endl;
        cout << "4. Search Student by ID" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            st.addStudent();
            break;
        case 2:
            st.displayAllStudents();
            break;
        case 3:
            st.removeStudentById();
            break;
        case 4:
            st.searchStudentById();
            break;
        case 5:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
