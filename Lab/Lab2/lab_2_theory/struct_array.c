#include <stdio.h>

// define a struct named Person
struct Person {
    char name[50];
    int age;
    float height;
};

int main() {
    // declare a variable of type Person and initialize its fields
    struct Person p1[20];
    for(int i=0 ;i<=2; i++){
    printf("Enter the name of the student:# %d\n", i+1);
    scanf(" %[^\n]s", p1[i].name);
    printf("Enter the age of student");
    scanf(" %d", &p1[i].age);
    printf("Enter the height of the student ");
    scanf(" %f", &p1[i].height);
    printf("\n\n");
    }



    // access the fields of the struct using the dot (.) operator
    for(int j=0; j<=2; j++){

    printf("\n");
    printf("Details of Student #%d", j+1);
    printf("Name: %s\n", p1[j].name);
    printf("Age: %d\n", p1[j].age);
    printf("Height: %.2f\n", p1[j].height);
}
    return 0;
}