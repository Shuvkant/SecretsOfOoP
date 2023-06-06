#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

// Structure to store student information
struct Student {
    char name[50];
    int rollNo;
    char address[100];
    char phoneNumber[20];
};

// Function to compare two student names for sorting
int compareNames(const void *a, const void *b) {struct Student *studentA = (struct Student *)a;
    struct Student *studentB = (struct Student *)b;
    return strcmp(studentA->name, studentB->name);
}

int main() {
    struct Student students[MAX_STUDENTS];
    int numStudents = 0;

    // Read student information
    printf("Enter the details of each student:\n");
    while (numStudents < MAX_STUDENTS) {
        printf("Student %d:\n", numStudents + 1);

        printf("Name: ");
        scanf("%s", students[numStudents].name);

        printf("Roll No: ");
        scanf("%d", &students[numStudents].rollNo);

        printf("Address: ");
        scanf("%s", students[numStudents].address);

        printf("Phone Number: ");
        scanf("%s", students[numStudents].phoneNumber);

        numStudents++;

        // Check if more students need to be entered
        char choice;
        printf("Do you want to enter another student (y/n)? ");
        scanf(" %c", &choice);
        if (choice != 'y' && choice != 'Y') {
            break;
        }
    }

    // Open the file for writing
    FILE *file = fopen("student_info.txt", "w");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Write student information to the file
    fwrite(students, sizeof(struct Student), numStudents, file);
    fclose(file);

    // Open the file for reading
    file = fopen("student_info.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read student information from the file
    numStudents = fread(students, sizeof(struct Student), MAX_STUDENTS, file);
    fclose(file);

    // Sort the student information by name
    qsort(students, numStudents, sizeof(struct Student), compareNames);

    // Print the sorted student information
    printf("\nSorted Student Information:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Address: %s\n", students[i].address);
        printf("Phone Number: %s\n", students[i].phoneNumber);
        printf("\n");
    }

    return 0;
}
