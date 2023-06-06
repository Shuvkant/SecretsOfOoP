/*This program calculates the length of your name*/
/*Author Shuvkant Chaudhary Phanait   Date: 2023/05/02*/

#include <stdio.h>
#include <string.h>
int main()
{
    char name[30];              //initializing the array and its size
    int length= strlen(name);       //initializing the lenght of the string
    printf("Enter your name:");         //asking for your name 
    scanf("%[^\n]", name);            
    length = strlen(name);
    for (int i = 0; i <= length-1; i++)  //using for loop 
    {
        printf("name[%d]=%c\n",i, name[i]);
    }
    printf("\nThe lenght of your name is %d", length);
printf("\nYour name is Shuvkant Chaudhary Phanait");
}
