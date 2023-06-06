#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

// Structure to represent student information
struct Student {
    std::string name;
    int rollNo;
    std::string address;
    std::string phoneNumber;
};

// Function to read student information from user input
Student readStudentInfo() {
    Student student;

    std::cout << "Enter student name: ";
    std::getline(std::cin >> std::ws, student.name);

    std::cout << "Enter student roll number: ";
    std::cin >> student.rollNo;

    std::cout << "Enter student address: ";
    std::getline(std::cin >> std::ws, student.address);

    std::cout << "Enter student phone number: ";
    std::getline(std::cin >> std::ws, student.phoneNumber);

    return student;
}

// Function to save student information to a file
void saveStudentInfo(const Student& student, std::ofstream& file) {
    file << student.name << "," << student.rollNo << "," << student.address << "," << student.phoneNumber << std::endl;
}

// Function to load and sort student information from the file
void loadAndSortStudentInfo() {
    std::ifstream file("student_info.txt");
    if (!file.is_open()) {
        std::cout << "Unable to open the file." << std::endl;
        return;
    }

    std::vector<Student> students;

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string name, address, phoneNumber;
        int rollNo;

        std::getline(iss, name, ',');
        iss >> rollNo;
        std::getline(iss >> std::ws, address, ',');
        std::getline(iss >> std::ws, phoneNumber);

        students.push_back({name, rollNo, address, phoneNumber});
    }

    // Sort the student information based on names
    std::sort(students.begin(), students.end(), [](const Student& s1, const Student& s2) {
        return s1.name < s2.name;
    });

    // Display the sorted student information
    std::cout << "Sorted Student Information:" << std::endl;
    for (const auto& student : students) {
        std::cout << "Name: " << student.name << std::endl;
        std::cout << "Roll No: " << student.rollNo << std::endl;
        std::cout << "Address: " << student.address << std::endl;
        std::cout << "Phone Number: " << student.phoneNumber << std::endl;
        std::cout << std::endl;
    }

    file.close();
}

int main() {
    int numStudents;
    std::cout << "Enter the number of students: ";
    std::cin >> numStudents;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::ofstream file("student_info.txt");
    if (!file.is_open()) {
        std::cout << "Unable to create the file." << std::endl;
        return 0;
    }

    // Read student information from the user and save it to the file
    for (int i = 0; i < numStudents; ++i) {
        Student student = readStudentInfo();
        saveStudentInfo(student, file);
    }

    file.close();

    // Load and sort student information from the file

