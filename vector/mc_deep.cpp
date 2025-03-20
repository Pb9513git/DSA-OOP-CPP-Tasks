#include <iostream>
#include <vector>
#include <string>

class Student {
public:
    int id;
    std::string name;

    // Constructor to initialize id and name
    Student(int studentId, std::string studentName) : id(studentId), name(studentName) {}

    // Method to display student details
    void display() const {
        std::cout << "ID: " << id << ", Name: " << name << std::endl;
    }
};

class StudentManagementSystem {
private:
    std::vector<Student> students;

public:
    // Add a student to the vector
    void addStudent(int id, const std::string& name) {
        students.push_back(Student(id, name));
        std::cout << "Student added successfully!" << std::endl;
    }

    // Display all students in the vector
    void displayAllStudents() const {
        if (students.empty()) {
            std::cout << "No students found." << std::endl;
        } else {
            std::cout << "All Students:" << std::endl;
            for (const auto& student : students) {
                student.display();
            }
        }
    }

    // Remove a student by ID
    void removeStudentById(int id) {
        for (auto it = students.begin(); it != students.end(); ++it) {
            if (it->id == id) {
                students.erase(it);
                std::cout << "Student with ID " << id << " removed." << std::endl;
                return;
            }
        }
        std::cout << "Student with ID " << id << " not found." << std::endl;
    }

    // Search for a student by ID and display details
    void searchStudentById(int id) const {
        for (const auto& student : students) {
            if (student.id == id) {
                std::cout << "Student found: ";
                student.display();
                return;
            }
        }
        std::cout << "Student with ID " << id << " not found." << std::endl;
    }
};

int main() {
    StudentManagementSystem sms;
    int choice;
    int id;
    std::string name;

    while (true) {
        std::cout << "\nStudent Management System" << std::endl;
        std::cout << "1. Add Student" << std::endl;
        std::cout << "2. Display All Students" << std::endl;
        std::cout << "3. Remove Student by ID" << std::endl;
        std::cout << "4. Search Student by ID" << std::endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter Student ID: ";
                std::cin >> id;
                std::cin.ignore(); // To ignore the newline character left by cin
                std::cout << "Enter Student Name: ";
                std::getline(std::cin, name);
                sms.addStudent(id, name);
                break;

            case 2:
                sms.displayAllStudents();
                break;

            case 3:
                std::cout << "Enter Student ID to remove: ";
                std::cin >> id;
                sms.removeStudentById(id);
                break;

            case 4:
                std::cout << "Enter Student ID to search: ";
                std::cin >> id;
                sms.searchStudentById(id);
                break;

            case 5:
                std::cout << "Exiting the program. Goodbye!" << std::endl;
                return 0;

            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }

    return 0;
}