#include <iostream>
#include <vector>
#include <string>
#include <string.h>
using namespace std;

struct Student {
    string id;
    int rollNo;
    string name;
    string studentClass;
    char section;
    int yearOfAdmission;
};

class StudentManagementSystem {
private:
    vector<Student> students;

public:
    void addStudent(string id, int rollNo, string name, string studentClass, char section, int yearOfAdmission) {
        Student newStudent = {id, rollNo, name, studentClass, section, yearOfAdmission};
        students.push_back(newStudent);
        cout << "Student added successfully!" << endl;
    }

    void displayStudents() {
        if (students.empty()) {
            cout << "No students in the record." << endl;
            return;
        }
        cout << "Student Records:" << endl;
        for (const auto& student : students) {
            cout << "ID: " << student.id
                 << ", Roll No: " << student.rollNo
                 << ", Name: " << student.name
                 << ", Class: " << student.studentClass
                 << ", Section: " << student.section
                 << ", Year of Admission: " << student.yearOfAdmission << endl;
        }
    }

    void searchStudentById(string id) {
        for (const auto& student : students) {
            if (student.id== id) {
                cout << "Student Found: " << endl;
                cout << "ID: " << student.id
                     << ", Roll No: " << student.rollNo
                     << ", Name: " << student.name
                     << ", Class: " << student.studentClass
                     << ", Section: " << student.section
                     << ", Year of Admission: " << student.yearOfAdmission << endl;
                return;
            }
        }
        cout << "Student with ID " << id << " not found." << endl;
    }
};

int main() {
    StudentManagementSystem sms;
    int choice;

    do {
        cout << "\nStudent Management System Menu:" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display All Students" << endl;
        cout << "3. Search Student by ID" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int rollNo, yearOfAdmission;
                string id,name, studentClass;
                char section;
                cout << "Enter ID: ";
                cin >> id;
                cout << "Enter Roll No: ";
                cin >> rollNo;
                cin.ignore(); // To ignore newline character from previous input
                cout << "Enter Name: ";
                getline(cin, name);
                cout << "Enter Class: ";
                cin >> studentClass;
                cout << "Enter Section: ";
                cin >> section;
                cout << "Enter Year of Admission: ";
                cin >> yearOfAdmission;
                sms.addStudent(id, rollNo, name, studentClass, section, yearOfAdmission);
                break;
            }
            case 2:
                sms.displayStudents();
                break;
            case 3: {
                string id;
                cout << "Enter ID to search: ";
                cin >> id;
                sms.searchStudentById(id);
                break;
            }
            case 4:
                cout << "Exiting the system. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}