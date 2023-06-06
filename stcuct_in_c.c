#include<stdio.h>
int main(){
    struct details{
        int employeeId;
        char name[40];
         double phone;

    };
struct details c1;
printf("Enter employeeid, name and phonenumber:");
scanf(" %d %s %lf", &c1.employeeId, c1.name, &c1.phone);
printf("\n\n");
printf("Employee Id=%d\nNmae=%s\nPhone=%.0lf\n", c1.employeeId, c1.name, c1.phone);



struct details c2;
printf("Enter employeeid, name and phonenumber:");
scanf(" %d %s %lf", &c2.employeeId, c2.name, &c2.phone);
printf("\n\n");
printf("Employee Id=%d\nNmae=%s\nPhone=%.0lf\n", c2.employeeId, c2.name, c2.phone);
return 0;
}