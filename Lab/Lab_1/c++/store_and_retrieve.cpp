#include <iostream>
#include <string>
using namespace std;

// Define the structure for a student
struct Student
{
    string name;
    float marks;
};

// Function to input the details of a student
void inputStudentDetails(Student &s)
{
    cout << "Enter name: ";
    getline(cin, s.name);
    cout << "Enter marks in English (out of 100): ";
    cin >> s.marks;
}

// Function to display the details of a student
void displayStudentDetails(const Student &s)
{
    cout << "Name: " << s.name << endl;
    cout << "Marks in English: " << s.marks << endl;
}

int main()
{
    const int MAX_STUDENTS = 10;    // Maximum number of students
    Student students[MAX_STUDENTS]; // Array of students
    int numStudents = 0;            // Number of students in the array

    // Input the details of the students
    while (numStudents < MAX_STUDENTS)
    {
        cout << "Enter details of student #" << numStudents + 1 << endl;
        inputStudentDetails(students[numStudents]);
        numStudents++;

        // Ask if the user wants to input details of another student
        char choice;
        cout << "Do you want to enterdetails of another student (y/n)? ";
        cin >> choice;
        cin.ignore(); // Ignore the newline character
        if (choice != 'y' && choice != 'Y')
        {
            break;
        }
    }

    // Display the details of the students
    for (int i = 0; i < numStudents; i++)
    {
        cout << "Details of student #" << i + 1 << endl;
        displayStudentDetails(students[i]);
        cout << endl;
    }

    return 0;
}