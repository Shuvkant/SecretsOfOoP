#include <stdio.h>
#include<string.h>
int main()
{
    int length;
    char name[50];
    printf("Enter your name:");
    scanf("%s", name);
    length=strlen(name);
    printf("Your name is %s", name);
    printf("\nNumber of characters in %s is %d", name, length);
}
