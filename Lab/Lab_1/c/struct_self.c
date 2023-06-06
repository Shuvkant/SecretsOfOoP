#include <stdio.h>
#include<string.h>
// #define MAX_STUDENTS 10;
struct students
{
    char name[50];
    float marks;
};

void inputdetails(struct students*s)
{
    printf("Enter name:");
    fgets(s->name, 50, stdin);
    s->name[strcspn(s->name, "\n")]='\0';
    printf
}
int main()
{
    int numStudents = 0;
    int MAX_STUDENTS=10;
    struct students bidyarthi[MAX_STUDENTS] ;
    while (numStudents < MAX_STUDENTS)
    {
        printf("Enter the details  of student:#%d", numStudents+1);
        inputdetails(&bidyarthi[numStudents]);
    }
}