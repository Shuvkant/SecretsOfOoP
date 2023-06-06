#include <stdio.h>
#include <string.h>

// Define the structure for a student
struct Student {
  char name[50];
  float marks;
};

// Function to input the details of a student
void inputStudentDetails(struct Student* s) {
  printf("Enter name: ");
  fgets(s->name, 50, stdin);
  s->name[strcspn(s->name, "\n")] = '\0'; // Remove trailing newline character
  printf("Enter marks in English (out of 100): ");
  scanf("%f", &s->marks);
}

// Function to display the details of a student
void displayStudentDetails(const struct Student* s) {
  printf("Name: %s\n", s->name);
  printf("Marks in English: %.2f\n", s->marks);
}

int main() {
  const int MAX_STUDENTS = 10; // Maximum number of students
  struct Student students[MAX_STUDENTS]; // Array of students
  int numStudents = 0; // Number of students in the array

  // Input the details of the students
  while (numStudents < MAX_STUDENTS) {
    printf("Enter details of student #%d\n", numStudents + 1);
    inputStudentDetails(&students[numStudents]);
    numStudents++;

    // Ask if the user wants to input details of another student
   char choice;
    printf("Do you want to enter details of another student (y/n)? ");
    scanf(" %c", &choice);
    getchar(); // Ignore the newline character
    if (choice != 'y' && choice != 'Y') {
      break;
    }
  }

  // Display the details of the students
  for (int i = 0; i < numStudents; i++) {
    printf("Details of student #%d\n", i + 1);
    displayStudentDetails(&students[i]);
    printf("\n");
  }

  return 0;
}